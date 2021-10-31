#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::gsm
{
	class SmsMessage_MessageClass;
}
namespace android::telephony::gsm
{
	class SmsMessage_SubmitPdu;
}

namespace android::telephony::gsm
{
	class SmsMessage : public __JniBaseClass
	{
	public:
		// Fields
		static jint ENCODING_16BIT();
		static jint ENCODING_7BIT();
		static jint ENCODING_8BIT();
		static jint ENCODING_UNKNOWN();
		static jint MAX_USER_DATA_BYTES();
		static jint MAX_USER_DATA_SEPTETS();
		static jint MAX_USER_DATA_SEPTETS_WITH_HEADER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsMessage(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SmsMessage(QAndroidJniObject obj);
		
		// Constructors
		SmsMessage();
		
		// Methods
		static jintArray calculateLength(jstring arg0, jboolean arg1);
		static android::telephony::gsm::SmsMessage createFromPdu(jbyteArray arg0);
		static android::telephony::gsm::SmsMessage_SubmitPdu getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3);
		static android::telephony::gsm::SmsMessage_SubmitPdu getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4);
		static jint getTPLayerLengthForPDU(jstring arg0);
		jstring getDisplayMessageBody();
		jstring getDisplayOriginatingAddress();
		jstring getEmailBody();
		jstring getEmailFrom();
		jint getIndexOnSim();
		jstring getMessageBody();
		android::telephony::gsm::SmsMessage_MessageClass getMessageClass();
		jstring getOriginatingAddress();
		jbyteArray getPdu();
		jint getProtocolIdentifier();
		jstring getPseudoSubject();
		jstring getServiceCenterAddress();
		jint getStatus();
		jint getStatusOnSim();
		jlong getTimestampMillis();
		jbyteArray getUserData();
		jboolean isCphsMwiMessage();
		jboolean isEmail();
		jboolean isMWIClearMessage();
		jboolean isMWISetMessage();
		jboolean isMwiDontStore();
		jboolean isReplace();
		jboolean isReplyPathPresent();
		jboolean isStatusReportMessage();
	};
} // namespace android::telephony::gsm

