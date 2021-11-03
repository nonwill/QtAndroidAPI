#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::euicc
{
	class DownloadableSubscription;
}

namespace android::telephony::euicc
{
	class DownloadableSubscription_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadableSubscription_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadableSubscription_Builder(QJniObject obj);
		
		// Constructors
		DownloadableSubscription_Builder(android::telephony::euicc::DownloadableSubscription arg0);
		DownloadableSubscription_Builder(jstring arg0);
		
		// Methods
		android::telephony::euicc::DownloadableSubscription build();
		android::telephony::euicc::DownloadableSubscription_Builder setConfirmationCode(jstring arg0);
		android::telephony::euicc::DownloadableSubscription_Builder setEncodedActivationCode(jstring arg0);
	};
} // namespace android::telephony::euicc

