#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./MediaRouter_RouteCategory.hpp"
#include "./MediaRouter_RouteGroup.hpp"
#include "../view/Display.hpp"
#include "./MediaRouter_RouteInfo.hpp"

namespace android::media
{
	// Fields
	jint MediaRouter_RouteInfo::DEVICE_TYPE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_BLUETOOTH"
		);
	}
	jint MediaRouter_RouteInfo::DEVICE_TYPE_SPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_SPEAKER"
		);
	}
	jint MediaRouter_RouteInfo::DEVICE_TYPE_TV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_TV"
		);
	}
	jint MediaRouter_RouteInfo::DEVICE_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_TYPE_LOCAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_TYPE_LOCAL"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_TYPE_REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_TYPE_REMOTE"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_VOLUME_FIXED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_VOLUME_FIXED"
		);
	}
	jint MediaRouter_RouteInfo::PLAYBACK_VOLUME_VARIABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaRouter$RouteInfo",
			"PLAYBACK_VOLUME_VARIABLE"
		);
	}
	
	MediaRouter_RouteInfo::MediaRouter_RouteInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MediaRouter_RouteInfo::getCategory()
	{
		return __thiz.callObjectMethod(
			"getCategory",
			"()Landroid/media/MediaRouter$RouteCategory;"
		);
	}
	jstring MediaRouter_RouteInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaRouter_RouteInfo::getDeviceType()
	{
		return __thiz.callMethod<jint>(
			"getDeviceType",
			"()I"
		);
	}
	QAndroidJniObject MediaRouter_RouteInfo::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Landroid/media/MediaRouter$RouteGroup;"
		);
	}
	QAndroidJniObject MediaRouter_RouteInfo::getIconDrawable()
	{
		return __thiz.callObjectMethod(
			"getIconDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jstring MediaRouter_RouteInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring MediaRouter_RouteInfo::getName(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(Landroid/content/Context;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint MediaRouter_RouteInfo::getPlaybackStream()
	{
		return __thiz.callMethod<jint>(
			"getPlaybackStream",
			"()I"
		);
	}
	jint MediaRouter_RouteInfo::getPlaybackType()
	{
		return __thiz.callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	QAndroidJniObject MediaRouter_RouteInfo::getPresentationDisplay()
	{
		return __thiz.callObjectMethod(
			"getPresentationDisplay",
			"()Landroid/view/Display;"
		);
	}
	jstring MediaRouter_RouteInfo::getStatus()
	{
		return __thiz.callObjectMethod(
			"getStatus",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaRouter_RouteInfo::getSupportedTypes()
	{
		return __thiz.callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	jobject MediaRouter_RouteInfo::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint MediaRouter_RouteInfo::getVolume()
	{
		return __thiz.callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint MediaRouter_RouteInfo::getVolumeHandling()
	{
		return __thiz.callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint MediaRouter_RouteInfo::getVolumeMax()
	{
		return __thiz.callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jboolean MediaRouter_RouteInfo::isConnecting()
	{
		return __thiz.callMethod<jboolean>(
			"isConnecting",
			"()Z"
		);
	}
	jboolean MediaRouter_RouteInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void MediaRouter_RouteInfo::requestSetVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestSetVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteInfo::requestUpdateVolume(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestUpdateVolume",
			"(I)V",
			arg0
		);
	}
	void MediaRouter_RouteInfo::setTag(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jstring MediaRouter_RouteInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media
