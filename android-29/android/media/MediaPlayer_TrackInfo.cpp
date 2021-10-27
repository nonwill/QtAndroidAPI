#include "./MediaFormat.hpp"
#include "../os/Parcel.hpp"
#include "./MediaPlayer_TrackInfo.hpp"

namespace android::media
{
	// Fields
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_AUDIO"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_METADATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_METADATA"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_SUBTITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_SUBTITLE"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_TIMEDTEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_TIMEDTEXT"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_UNKNOWN"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_VIDEO"
		);
	}
	
	MediaPlayer_TrackInfo::MediaPlayer_TrackInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint MediaPlayer_TrackInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject MediaPlayer_TrackInfo::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	jstring MediaPlayer_TrackInfo::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaPlayer_TrackInfo::getTrackType()
	{
		return __thiz.callMethod<jint>(
			"getTrackType",
			"()I"
		);
	}
	jstring MediaPlayer_TrackInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MediaPlayer_TrackInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

