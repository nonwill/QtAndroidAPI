#include "./DrmConvertedStatus.hpp"

namespace android::drm
{
	// Fields
	jint DrmConvertedStatus::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_ERROR"
		);
	}
	jint DrmConvertedStatus::STATUS_INPUTDATA_ERROR()
	{
		return getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_INPUTDATA_ERROR"
		);
	}
	jint DrmConvertedStatus::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_OK"
		);
	}
	jbyteArray DrmConvertedStatus::convertedData()
	{
		return getObjectField(
			"convertedData",
			"[B"
		).object<jbyteArray>();
	}
	jint DrmConvertedStatus::offset()
	{
		return getField<jint>(
			"offset"
		);
	}
	jint DrmConvertedStatus::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// QJniObject forward
	DrmConvertedStatus::DrmConvertedStatus(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmConvertedStatus::DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2)
		: JObject(
			"android.drm.DrmConvertedStatus",
			"(I[BI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::drm

