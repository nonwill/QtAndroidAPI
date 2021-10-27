#include "./AudioPresentation.hpp"
#include "./Image.hpp"
#include "./MediaCodec_BufferInfo.hpp"
#include "./MediaCodec_Callback.hpp"
#include "./MediaCodec_CryptoInfo.hpp"
#include "./MediaCodecInfo.hpp"
#include "./MediaCrypto.hpp"
#include "./MediaDescrambler.hpp"
#include "./MediaFormat.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/PersistableBundle.hpp"
#include "../view/Surface.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaCodec.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec::BUFFER_FLAG_CODEC_CONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_CODEC_CONFIG"
		);
	}
	jint MediaCodec::BUFFER_FLAG_END_OF_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_END_OF_STREAM"
		);
	}
	jint MediaCodec::BUFFER_FLAG_KEY_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_KEY_FRAME"
		);
	}
	jint MediaCodec::BUFFER_FLAG_PARTIAL_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_PARTIAL_FRAME"
		);
	}
	jint MediaCodec::BUFFER_FLAG_SYNC_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"BUFFER_FLAG_SYNC_FRAME"
		);
	}
	jint MediaCodec::CONFIGURE_FLAG_ENCODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"CONFIGURE_FLAG_ENCODE"
		);
	}
	jint MediaCodec::CRYPTO_MODE_AES_CBC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_AES_CBC"
		);
	}
	jint MediaCodec::CRYPTO_MODE_AES_CTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_AES_CTR"
		);
	}
	jint MediaCodec::CRYPTO_MODE_UNENCRYPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"CRYPTO_MODE_UNENCRYPTED"
		);
	}
	jint MediaCodec::INFO_OUTPUT_BUFFERS_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_OUTPUT_BUFFERS_CHANGED"
		);
	}
	jint MediaCodec::INFO_OUTPUT_FORMAT_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_OUTPUT_FORMAT_CHANGED"
		);
	}
	jint MediaCodec::INFO_TRY_AGAIN_LATER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"INFO_TRY_AGAIN_LATER"
		);
	}
	jstring MediaCodec::PARAMETER_KEY_HDR10_PLUS_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec::PARAMETER_KEY_OFFSET_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_OFFSET_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec::PARAMETER_KEY_REQUEST_SYNC_FRAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_REQUEST_SYNC_FRAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec::PARAMETER_KEY_SUSPEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_SUSPEND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec::PARAMETER_KEY_SUSPEND_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_SUSPEND_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaCodec::PARAMETER_KEY_VIDEO_BITRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodec",
			"PARAMETER_KEY_VIDEO_BITRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaCodec::VIDEO_SCALING_MODE_SCALE_TO_FIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT"
		);
	}
	jint MediaCodec::VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec",
			"VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING"
		);
	}
	
	MediaCodec::MediaCodec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MediaCodec::createByCodecName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createByCodecName",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0
		);
	}
	QAndroidJniObject MediaCodec::createByCodecName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createByCodecName",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaCodec::createDecoderByType(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createDecoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0
		);
	}
	QAndroidJniObject MediaCodec::createDecoderByType(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createDecoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaCodec::createEncoderByType(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createEncoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			arg0
		);
	}
	QAndroidJniObject MediaCodec::createEncoderByType(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createEncoderByType",
			"(Ljava/lang/String;)Landroid/media/MediaCodec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MediaCodec::createPersistentInputSurface()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodec",
			"createPersistentInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MediaCodec::configure(android::media::MediaFormat arg0, android::view::Surface arg1, android::media::MediaCrypto arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"configure",
			"(Landroid/media/MediaFormat;Landroid/view/Surface;Landroid/media/MediaCrypto;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void MediaCodec::configure(android::media::MediaFormat arg0, android::view::Surface arg1, jint arg2, android::media::MediaDescrambler arg3)
	{
		__thiz.callMethod<void>(
			"configure",
			"(Landroid/media/MediaFormat;Landroid/view/Surface;ILandroid/media/MediaDescrambler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject MediaCodec::createInputSurface()
	{
		return __thiz.callObjectMethod(
			"createInputSurface",
			"()Landroid/view/Surface;"
		);
	}
	jint MediaCodec::dequeueInputBuffer(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"dequeueInputBuffer",
			"(J)I",
			arg0
		);
	}
	jint MediaCodec::dequeueOutputBuffer(android::media::MediaCodec_BufferInfo arg0, jlong arg1)
	{
		return __thiz.callMethod<jint>(
			"dequeueOutputBuffer",
			"(Landroid/media/MediaCodec$BufferInfo;J)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaCodec::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jstring MediaCodec::getCanonicalName()
	{
		return __thiz.callObjectMethod(
			"getCanonicalName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaCodec::getCodecInfo()
	{
		return __thiz.callObjectMethod(
			"getCodecInfo",
			"()Landroid/media/MediaCodecInfo;"
		);
	}
	QAndroidJniObject MediaCodec::getInputBuffer(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInputBuffer",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	jarray MediaCodec::getInputBuffers()
	{
		return __thiz.callObjectMethod(
			"getInputBuffers",
			"()[Ljava/nio/ByteBuffer;"
		).object<jarray>();
	}
	QAndroidJniObject MediaCodec::getInputFormat()
	{
		return __thiz.callObjectMethod(
			"getInputFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	QAndroidJniObject MediaCodec::getInputImage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getInputImage",
			"(I)Landroid/media/Image;",
			arg0
		);
	}
	QAndroidJniObject MediaCodec::getMetrics()
	{
		return __thiz.callObjectMethod(
			"getMetrics",
			"()Landroid/os/PersistableBundle;"
		);
	}
	jstring MediaCodec::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaCodec::getOutputBuffer(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputBuffer",
			"(I)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	jarray MediaCodec::getOutputBuffers()
	{
		return __thiz.callObjectMethod(
			"getOutputBuffers",
			"()[Ljava/nio/ByteBuffer;"
		).object<jarray>();
	}
	QAndroidJniObject MediaCodec::getOutputFormat()
	{
		return __thiz.callObjectMethod(
			"getOutputFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	QAndroidJniObject MediaCodec::getOutputFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputFormat",
			"(I)Landroid/media/MediaFormat;",
			arg0
		);
	}
	QAndroidJniObject MediaCodec::getOutputImage(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputImage",
			"(I)Landroid/media/Image;",
			arg0
		);
	}
	void MediaCodec::queueInputBuffer(jint arg0, jint arg1, jint arg2, jlong arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"queueInputBuffer",
			"(IIIJI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void MediaCodec::queueSecureInputBuffer(jint arg0, jint arg1, android::media::MediaCodec_CryptoInfo arg2, jlong arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"queueSecureInputBuffer",
			"(IILandroid/media/MediaCodec$CryptoInfo;JI)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void MediaCodec::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaCodec::releaseOutputBuffer(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"releaseOutputBuffer",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void MediaCodec::releaseOutputBuffer(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"releaseOutputBuffer",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void MediaCodec::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void MediaCodec::setAudioPresentation(android::media::AudioPresentation arg0)
	{
		__thiz.callMethod<void>(
			"setAudioPresentation",
			"(Landroid/media/AudioPresentation;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaCodec::setCallback(android::media::MediaCodec_Callback arg0)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaCodec$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaCodec::setCallback(android::media::MediaCodec_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setCallback",
			"(Landroid/media/MediaCodec$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaCodec::setInputSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setInputSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaCodec::setOnFrameRenderedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnFrameRenderedListener",
			"(Landroid/media/MediaCodec$OnFrameRenderedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaCodec::setOutputSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setOutputSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaCodec::setParameters(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaCodec::setVideoScalingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVideoScalingMode",
			"(I)V",
			arg0
		);
	}
	void MediaCodec::signalEndOfInputStream()
	{
		__thiz.callMethod<void>(
			"signalEndOfInputStream",
			"()V"
		);
	}
	void MediaCodec::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void MediaCodec::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media
