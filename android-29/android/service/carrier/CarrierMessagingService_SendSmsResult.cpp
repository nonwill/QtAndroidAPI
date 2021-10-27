#include "./CarrierMessagingService_SendSmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingService$SendSmsResult",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint CarrierMessagingService_SendSmsResult::getMessageRef()
	{
		return __thiz.callMethod<jint>(
			"getMessageRef",
			"()I"
		);
	}
	jint CarrierMessagingService_SendSmsResult::getSendStatus()
	{
		return __thiz.callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier
