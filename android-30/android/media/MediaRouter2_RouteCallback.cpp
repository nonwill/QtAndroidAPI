#include "./MediaRouter2_RouteCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaRouter2_RouteCallback::MediaRouter2_RouteCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaRouter2_RouteCallback::MediaRouter2_RouteCallback()
		: __JniBaseClass(
			"android.media.MediaRouter2$RouteCallback",
			"()V"
		) {}
	
	// Methods
	void MediaRouter2_RouteCallback::onRoutesAdded(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRoutesAdded",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaRouter2_RouteCallback::onRoutesChanged(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRoutesChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaRouter2_RouteCallback::onRoutesRemoved(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRoutesRemoved",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
} // namespace android::media
