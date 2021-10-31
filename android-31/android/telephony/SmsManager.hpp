#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telephony
{
	class SmsManager_FinancialSmsCallback;
}
namespace java::util
{
	class ArrayList;
}

namespace android::telephony
{
	class SmsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_MMS_DATA();
		static jstring EXTRA_MMS_HTTP_STATUS();
		static jstring MMS_CONFIG_ALIAS_ENABLED();
		static jstring MMS_CONFIG_ALIAS_MAX_CHARS();
		static jstring MMS_CONFIG_ALIAS_MIN_CHARS();
		static jstring MMS_CONFIG_ALLOW_ATTACH_AUDIO();
		static jstring MMS_CONFIG_APPEND_TRANSACTION_ID();
		static jstring MMS_CONFIG_EMAIL_GATEWAY_NUMBER();
		static jstring MMS_CONFIG_GROUP_MMS_ENABLED();
		static jstring MMS_CONFIG_HTTP_PARAMS();
		static jstring MMS_CONFIG_HTTP_SOCKET_TIMEOUT();
		static jstring MMS_CONFIG_MAX_IMAGE_HEIGHT();
		static jstring MMS_CONFIG_MAX_IMAGE_WIDTH();
		static jstring MMS_CONFIG_MAX_MESSAGE_SIZE();
		static jstring MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE();
		static jstring MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED();
		static jstring MMS_CONFIG_MMS_ENABLED();
		static jstring MMS_CONFIG_MMS_READ_REPORT_ENABLED();
		static jstring MMS_CONFIG_MULTIPART_SMS_ENABLED();
		static jstring MMS_CONFIG_NAI_SUFFIX();
		static jstring MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED();
		static jstring MMS_CONFIG_RECIPIENT_LIMIT();
		static jstring MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES();
		static jstring MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS();
		static jstring MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED();
		static jstring MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD();
		static jstring MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD();
		static jstring MMS_CONFIG_SUBJECT_MAX_LENGTH();
		static jstring MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER();
		static jstring MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION();
		static jstring MMS_CONFIG_UA_PROF_TAG_NAME();
		static jstring MMS_CONFIG_UA_PROF_URL();
		static jstring MMS_CONFIG_USER_AGENT();
		static jint MMS_ERROR_CONFIGURATION_ERROR();
		static jint MMS_ERROR_HTTP_FAILURE();
		static jint MMS_ERROR_INVALID_APN();
		static jint MMS_ERROR_IO_ERROR();
		static jint MMS_ERROR_NO_DATA_NETWORK();
		static jint MMS_ERROR_RETRY();
		static jint MMS_ERROR_UNABLE_CONNECT_MMS();
		static jint MMS_ERROR_UNSPECIFIED();
		static jint RESULT_BLUETOOTH_DISCONNECTED();
		static jint RESULT_CANCELLED();
		static jint RESULT_ENCODING_ERROR();
		static jint RESULT_ERROR_FDN_CHECK_FAILURE();
		static jint RESULT_ERROR_GENERIC_FAILURE();
		static jint RESULT_ERROR_LIMIT_EXCEEDED();
		static jint RESULT_ERROR_NONE();
		static jint RESULT_ERROR_NO_SERVICE();
		static jint RESULT_ERROR_NULL_PDU();
		static jint RESULT_ERROR_RADIO_OFF();
		static jint RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED();
		static jint RESULT_ERROR_SHORT_CODE_NOT_ALLOWED();
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_INVALID_ARGUMENTS();
		static jint RESULT_INVALID_BLUETOOTH_ADDRESS();
		static jint RESULT_INVALID_SMSC_ADDRESS();
		static jint RESULT_INVALID_SMS_FORMAT();
		static jint RESULT_INVALID_STATE();
		static jint RESULT_MODEM_ERROR();
		static jint RESULT_NETWORK_ERROR();
		static jint RESULT_NETWORK_REJECT();
		static jint RESULT_NO_BLUETOOTH_SERVICE();
		static jint RESULT_NO_DEFAULT_SMS_APP();
		static jint RESULT_NO_MEMORY();
		static jint RESULT_NO_RESOURCES();
		static jint RESULT_OPERATION_NOT_ALLOWED();
		static jint RESULT_RADIO_NOT_AVAILABLE();
		static jint RESULT_RECEIVE_DISPATCH_FAILURE();
		static jint RESULT_RECEIVE_INJECTED_NULL_PDU();
		static jint RESULT_RECEIVE_NULL_MESSAGE_FROM_RIL();
		static jint RESULT_RECEIVE_RUNTIME_EXCEPTION();
		static jint RESULT_RECEIVE_SQL_EXCEPTION();
		static jint RESULT_RECEIVE_URI_EXCEPTION();
		static jint RESULT_RECEIVE_WHILE_ENCRYPTED();
		static jint RESULT_REMOTE_EXCEPTION();
		static jint RESULT_REQUEST_NOT_SUPPORTED();
		static jint RESULT_RIL_ACCESS_BARRED();
		static jint RESULT_RIL_BLOCKED_DUE_TO_CALL();
		static jint RESULT_RIL_CANCELLED();
		static jint RESULT_RIL_ENCODING_ERR();
		static jint RESULT_RIL_INTERNAL_ERR();
		static jint RESULT_RIL_INVALID_ARGUMENTS();
		static jint RESULT_RIL_INVALID_MODEM_STATE();
		static jint RESULT_RIL_INVALID_SMSC_ADDRESS();
		static jint RESULT_RIL_INVALID_SMS_FORMAT();
		static jint RESULT_RIL_INVALID_STATE();
		static jint RESULT_RIL_MODEM_ERR();
		static jint RESULT_RIL_NETWORK_ERR();
		static jint RESULT_RIL_NETWORK_NOT_READY();
		static jint RESULT_RIL_NETWORK_REJECT();
		static jint RESULT_RIL_NO_MEMORY();
		static jint RESULT_RIL_NO_RESOURCES();
		static jint RESULT_RIL_OPERATION_NOT_ALLOWED();
		static jint RESULT_RIL_RADIO_NOT_AVAILABLE();
		static jint RESULT_RIL_REQUEST_NOT_SUPPORTED();
		static jint RESULT_RIL_REQUEST_RATE_LIMITED();
		static jint RESULT_RIL_SIMULTANEOUS_SMS_AND_CALL_NOT_ALLOWED();
		static jint RESULT_RIL_SIM_ABSENT();
		static jint RESULT_RIL_SMS_SEND_FAIL_RETRY();
		static jint RESULT_RIL_SYSTEM_ERR();
		static jint RESULT_SMS_BLOCKED_DURING_EMERGENCY();
		static jint RESULT_SMS_SEND_RETRY_FAILED();
		static jint RESULT_SYSTEM_ERROR();
		static jint RESULT_UNEXPECTED_EVENT_STOP_SENDING();
		static jint STATUS_ON_ICC_FREE();
		static jint STATUS_ON_ICC_READ();
		static jint STATUS_ON_ICC_SENT();
		static jint STATUS_ON_ICC_UNREAD();
		static jint STATUS_ON_ICC_UNSENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::SmsManager getDefault();
		static jint getDefaultSmsSubscriptionId();
		static android::telephony::SmsManager getSmsManagerForSubscriptionId(jint arg0);
		jstring createAppSpecificSmsToken(android::app::PendingIntent arg0);
		jstring createAppSpecificSmsTokenWithPackageInfo(jstring arg0, android::app::PendingIntent arg1);
		android::telephony::SmsManager createForSubscriptionId(jint arg0);
		java::util::ArrayList divideMessage(jstring arg0);
		void downloadMultimediaMessage(android::content::Context arg0, jstring arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4);
		void downloadMultimediaMessage(android::content::Context arg0, jstring arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4, jlong arg5);
		android::os::Bundle getCarrierConfigValues();
		jint getSmsCapacityOnIcc();
		void getSmsMessagesForFinancialApp(android::os::Bundle arg0, __JniBaseClass arg1, android::telephony::SmsManager_FinancialSmsCallback arg2);
		jstring getSmscAddress();
		jint getSubscriptionId();
		void injectSmsPdu(jbyteArray arg0, jstring arg1, android::app::PendingIntent arg2);
		void sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5);
		void sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, jstring arg2, android::os::Bundle arg3, android::app::PendingIntent arg4);
		void sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, jstring arg2, android::os::Bundle arg3, android::app::PendingIntent arg4, jlong arg5);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4, jlong arg5);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, __JniBaseClass arg2, __JniBaseClass arg3, __JniBaseClass arg4, jstring arg5, jstring arg6);
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4, jlong arg5);
		void sendTextMessageWithoutPersisting(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
		jboolean setSmscAddress(jstring arg0);
	};
} // namespace android::telephony
