#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class TelephonyDisplayInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint OVERRIDE_NETWORK_TYPE_LTE_ADVANCED_PRO();
		static jint OVERRIDE_NETWORK_TYPE_LTE_CA();
		static jint OVERRIDE_NETWORK_TYPE_NONE();
		static jint OVERRIDE_NETWORK_TYPE_NR_NSA();
		static jint OVERRIDE_NETWORK_TYPE_NR_NSA_MMWAVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyDisplayInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyDisplayInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getNetworkType();
		jint getOverrideNetworkType();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony
