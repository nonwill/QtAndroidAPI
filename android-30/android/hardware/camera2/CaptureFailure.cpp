#include "./CaptureRequest.hpp"
#include "../../../JString.hpp"
#include "./CaptureFailure.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CaptureFailure::REASON_ERROR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_ERROR"
		);
	}
	jint CaptureFailure::REASON_FLUSHED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_FLUSHED"
		);
	}
	
	// QAndroidJniObject forward
	CaptureFailure::CaptureFailure(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong CaptureFailure::getFrameNumber() const
	{
		return callMethod<jlong>(
			"getFrameNumber",
			"()J"
		);
	}
	JString CaptureFailure::getPhysicalCameraId() const
	{
		return callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		);
	}
	jint CaptureFailure::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	android::hardware::camera2::CaptureRequest CaptureFailure::getRequest() const
	{
		return callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint CaptureFailure::getSequenceId() const
	{
		return callMethod<jint>(
			"getSequenceId",
			"()I"
		);
	}
	jboolean CaptureFailure::wasImageCaptured() const
	{
		return callMethod<jboolean>(
			"wasImageCaptured",
			"()Z"
		);
	}
} // namespace android::hardware::camera2

