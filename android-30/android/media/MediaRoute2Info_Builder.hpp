#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRoute2Info;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaRoute2Info_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRoute2Info_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRoute2Info_Builder(QJniObject obj);
		
		// Constructors
		MediaRoute2Info_Builder(android::media::MediaRoute2Info arg0);
		MediaRoute2Info_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::media::MediaRoute2Info_Builder addFeature(jstring arg0);
		android::media::MediaRoute2Info_Builder addFeatures(__JniBaseClass arg0);
		android::media::MediaRoute2Info build();
		android::media::MediaRoute2Info_Builder clearFeatures();
		android::media::MediaRoute2Info_Builder setClientPackageName(jstring arg0);
		android::media::MediaRoute2Info_Builder setConnectionState(jint arg0);
		android::media::MediaRoute2Info_Builder setDescription(jstring arg0);
		android::media::MediaRoute2Info_Builder setExtras(android::os::Bundle arg0);
		android::media::MediaRoute2Info_Builder setIconUri(android::net::Uri arg0);
		android::media::MediaRoute2Info_Builder setVolume(jint arg0);
		android::media::MediaRoute2Info_Builder setVolumeHandling(jint arg0);
		android::media::MediaRoute2Info_Builder setVolumeMax(jint arg0);
	};
} // namespace android::media

