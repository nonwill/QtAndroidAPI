#include "../graphics/drawable/Drawable.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_RouteInfo.hpp"
#include "./MediaRouter_RouteGroup.hpp"

namespace android::media
{
	// Fields
	
	MediaRouter_RouteGroup::MediaRouter_RouteGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaRouter_RouteGroup::addRoute(android::media::MediaRouter_RouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_RouteGroup::addRoute(android::media::MediaRouter_RouteInfo arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addRoute",
			"(Landroid/media/MediaRouter$RouteInfo;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MediaRouter_RouteGroup::getRouteAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRouteAt",
			"(I)Landroid/media/MediaRouter$RouteInfo;",
			arg0
		);
	}
	jint MediaRouter_RouteGroup::getRouteCount()
	{
		return __thiz.callMethod<jint>(
			"getRouteCount",
			"()I"
		);
	}
	void MediaRouter_RouteGroup::removeRoute(android::media::MediaRouter_RouteInfo arg0)
	{
		__thiz.callMethod<void>(
			"removeRoute",
			"(Landroid/media/MediaRouter$RouteInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_RouteGroup::removeRoute(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeRoute",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::requestSetVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::requestUpdateVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteGroup::setIconDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setIconDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaRouter_RouteGroup::setIconResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIconResource",
			"(I)V",
			arg0
		);
	}
	jstring MediaRouter_RouteGroup::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media
