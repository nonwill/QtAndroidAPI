#include "./MediaDrm_SessionException.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_SessionException::ERROR_RESOURCE_CONTENTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	jint MediaDrm_SessionException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	MediaDrm_SessionException::MediaDrm_SessionException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MediaDrm_SessionException::MediaDrm_SessionException(jint arg0, jstring arg1)
		: java::lang::RuntimeException(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint MediaDrm_SessionException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	jboolean MediaDrm_SessionException::isTransient()
	{
		return callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media
