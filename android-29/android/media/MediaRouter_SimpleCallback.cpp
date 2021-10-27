#include "./MediaRouter.hpp"
#include "./MediaRouter_RouteGroup.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_SimpleCallback.hpp"

namespace android::media
{
	// Fields
	
	MediaRouter_SimpleCallback::MediaRouter_SimpleCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaRouter_SimpleCallback::MediaRouter_SimpleCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaRouter$SimpleCallback",
			"()V"
		);
	}
	
	// Methods
	void MediaRouter_SimpleCallback::onRouteAdded(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteAdded",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteGrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onRouteGrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void MediaRouter_SimpleCallback::onRouteRemoved(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteRemoved",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteSelected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2)
	{
		__thiz.callMethod<void>(
			"onRouteSelected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteUngrouped(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1, android::media::MediaRouter_RouteGroup arg2)
	{
		__thiz.callMethod<void>(
			"onRouteUngrouped",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;Landroid/media/MediaRouter$RouteGroup;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteUnselected(android::media::MediaRouter arg0, jint arg1, android::media::MediaRouter_RouteInfo arg2)
	{
		__thiz.callMethod<void>(
			"onRouteUnselected",
			"(Landroid/media/MediaRouter;ILandroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void MediaRouter_SimpleCallback::onRouteVolumeChanged(android::media::MediaRouter arg0, android::media::MediaRouter_RouteInfo arg1)
	{
		__thiz.callMethod<void>(
			"onRouteVolumeChanged",
			"(Landroid/media/MediaRouter;Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media
