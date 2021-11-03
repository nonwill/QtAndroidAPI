#include "../../JString.hpp"
#include "./MediaCodec_CodecException.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_CodecException::ERROR_INSUFFICIENT_RESOURCE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_INSUFFICIENT_RESOURCE"
		);
	}
	jint MediaCodec_CodecException::ERROR_RECLAIMED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_RECLAIMED"
		);
	}
	
	// QAndroidJniObject forward
	MediaCodec_CodecException::MediaCodec_CodecException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaCodec_CodecException::getDiagnosticInfo()
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
	jint MediaCodec_CodecException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	jboolean MediaCodec_CodecException::isRecoverable()
	{
		return callMethod<jboolean>(
			"isRecoverable",
			"()Z"
		);
	}
	jboolean MediaCodec_CodecException::isTransient()
	{
		return callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media

