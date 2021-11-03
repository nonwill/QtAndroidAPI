#include "../../app/PendingIntent.hpp"
#include "../../../java/util/ArrayList.hpp"
#include "./SmsManager.hpp"

namespace android::telephony::gsm
{
	// Fields
	jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_NO_SERVICE"
		);
	}
	jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_NULL_PDU"
		);
	}
	jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"RESULT_ERROR_RADIO_OFF"
		);
	}
	jint SmsManager::STATUS_ON_SIM_FREE()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_FREE"
		);
	}
	jint SmsManager::STATUS_ON_SIM_READ()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_READ"
		);
	}
	jint SmsManager::STATUS_ON_SIM_SENT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_SENT"
		);
	}
	jint SmsManager::STATUS_ON_SIM_UNREAD()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_UNREAD"
		);
	}
	jint SmsManager::STATUS_ON_SIM_UNSENT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsManager",
			"STATUS_ON_SIM_UNSENT"
		);
	}
	
	// QJniObject forward
	SmsManager::SmsManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::gsm::SmsManager SmsManager::getDefault()
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsManager",
			"getDefault",
			"()Landroid/telephony/gsm/SmsManager;"
		);
	}
	java::util::ArrayList SmsManager::divideMessage(jstring arg0)
	{
		return callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	void SmsManager::sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5)
	{
		callMethod<void>(
			"sendDataMessage",
			"(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		);
	}
	void SmsManager::sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4)
	{
		callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void SmsManager::sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4)
	{
		callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::telephony::gsm

