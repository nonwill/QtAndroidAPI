#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media
{
	class MediaSession2;
}
namespace android::media
{
	class MediaSession2_ControllerInfo;
}
namespace android::media
{
	class MediaSession2Service_MediaNotification;
}

namespace android::media
{
	class MediaSession2Service : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession2Service(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2Service(QJniObject obj);
		
		// Constructors
		MediaSession2Service();
		
		// Methods
		void addSession(android::media::MediaSession2 arg0);
		__JniBaseClass getSessions();
		__JniBaseClass onBind(android::content::Intent arg0);
		void onCreate();
		void onDestroy();
		android::media::MediaSession2 onGetSession(android::media::MediaSession2_ControllerInfo arg0);
		android::media::MediaSession2Service_MediaNotification onUpdateNotification(android::media::MediaSession2 arg0);
		void removeSession(android::media::MediaSession2 arg0);
	};
} // namespace android::media

