#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::euicc
{
	class DownloadableSubscription : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadableSubscription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadableSubscription(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::euicc::DownloadableSubscription forActivationCode(jstring arg0);
		jint describeContents();
		jstring getConfirmationCode();
		jstring getEncodedActivationCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::euicc

