#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaSession2;
}
namespace android::media
{
	class MediaSession2_SessionCallback;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaSession2_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession2_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2_Builder(QAndroidJniObject obj);
		
		// Constructors
		MediaSession2_Builder(android::content::Context arg0);
		
		// Methods
		android::media::MediaSession2 build();
		android::media::MediaSession2_Builder setExtras(android::os::Bundle arg0);
		android::media::MediaSession2_Builder setId(jstring arg0);
		android::media::MediaSession2_Builder setSessionActivity(android::app::PendingIntent arg0);
		android::media::MediaSession2_Builder setSessionCallback(__JniBaseClass arg0, android::media::MediaSession2_SessionCallback arg1);
	};
} // namespace android::media

