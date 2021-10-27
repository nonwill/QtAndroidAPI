#include "../content/Context.hpp"
#include "./MediaRouter_RouteCategory.hpp"

namespace android::media
{
	// Fields
	
	MediaRouter_RouteCategory::MediaRouter_RouteCategory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MediaRouter_RouteCategory::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaRouter_RouteCategory::getName(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject MediaRouter_RouteCategory::getRoutes(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getRoutes",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jint MediaRouter_RouteCategory::getSupportedTypes()
	{
		return __thiz.callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	jboolean MediaRouter_RouteCategory::isGroupable()
	{
		return __thiz.callMethod<jboolean>(
			"isGroupable",
			"()Z"
		);
	}
	jstring MediaRouter_RouteCategory::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

