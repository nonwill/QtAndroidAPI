#include "../app/PendingIntent.hpp"
#include "./RemoteControlClient_MetadataEditor.hpp"
#include "./session/MediaSession.hpp"
#include "../os/Looper.hpp"
#include "./RemoteControlClient.hpp"

namespace android::media
{
	// Fields
	jint RemoteControlClient::FLAG_KEY_MEDIA_FAST_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_FAST_FORWARD"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_NEXT"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PAUSE"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_PLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PLAY"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_PLAY_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PLAY_PAUSE"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_POSITION_UPDATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_POSITION_UPDATE"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_PREVIOUS"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_RATING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_RATING"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_REWIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_REWIND"
		);
	}
	jint RemoteControlClient::FLAG_KEY_MEDIA_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"FLAG_KEY_MEDIA_STOP"
		);
	}
	jint RemoteControlClient::PLAYSTATE_BUFFERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_BUFFERING"
		);
	}
	jint RemoteControlClient::PLAYSTATE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_ERROR"
		);
	}
	jint RemoteControlClient::PLAYSTATE_FAST_FORWARDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_FAST_FORWARDING"
		);
	}
	jint RemoteControlClient::PLAYSTATE_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_PAUSED"
		);
	}
	jint RemoteControlClient::PLAYSTATE_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_PLAYING"
		);
	}
	jint RemoteControlClient::PLAYSTATE_REWINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_REWINDING"
		);
	}
	jint RemoteControlClient::PLAYSTATE_SKIPPING_BACKWARDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_SKIPPING_BACKWARDS"
		);
	}
	jint RemoteControlClient::PLAYSTATE_SKIPPING_FORWARDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_SKIPPING_FORWARDS"
		);
	}
	jint RemoteControlClient::PLAYSTATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteControlClient",
			"PLAYSTATE_STOPPED"
		);
	}
	
	RemoteControlClient::RemoteControlClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteControlClient::RemoteControlClient(android::app::PendingIntent &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteControlClient",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	RemoteControlClient::RemoteControlClient(android::app::PendingIntent &arg0, android::os::Looper &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteControlClient",
			"(Landroid/app/PendingIntent;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RemoteControlClient::editMetadata(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"editMetadata",
			"(Z)Landroid/media/RemoteControlClient$MetadataEditor;",
			arg0
		);
	}
	QAndroidJniObject RemoteControlClient::getMediaSession()
	{
		return __thiz.callObjectMethod(
			"getMediaSession",
			"()Landroid/media/session/MediaSession;"
		);
	}
	void RemoteControlClient::setMetadataUpdateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setMetadataUpdateListener",
			"(Landroid/media/RemoteControlClient$OnMetadataUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteControlClient::setOnGetPlaybackPositionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGetPlaybackPositionListener",
			"(Landroid/media/RemoteControlClient$OnGetPlaybackPositionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteControlClient::setPlaybackPositionUpdateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackPositionUpdateListener",
			"(Landroid/media/RemoteControlClient$OnPlaybackPositionUpdateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteControlClient::setPlaybackState(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackState",
			"(I)V",
			arg0
		);
	}
	void RemoteControlClient::setPlaybackState(jint arg0, jlong arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setPlaybackState",
			"(IJF)V",
			arg0,
			arg1,
			arg2
		);
	}
	void RemoteControlClient::setTransportControlFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTransportControlFlags",
			"(I)V",
			arg0
		);
	}
} // namespace android::media
