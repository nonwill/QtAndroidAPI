#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class NetworkInfo_DetailedState;
}
namespace android::net::wifi
{
	class SupplicantState;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class WifiInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FREQUENCY_UNITS();
		static jstring LINK_SPEED_UNITS();
		static jint LINK_SPEED_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_DetailedState getDetailedStateOf(android::net::wifi::SupplicantState arg0);
		jint describeContents();
		jstring getBSSID();
		jint getFrequency();
		jboolean getHiddenSSID();
		jint getIpAddress();
		jint getLinkSpeed();
		jstring getMacAddress();
		jint getMaxSupportedRxLinkSpeedMbps();
		jint getMaxSupportedTxLinkSpeedMbps();
		jint getNetworkId();
		jstring getPasspointFqdn();
		jstring getPasspointProviderFriendlyName();
		jint getRssi();
		jint getRxLinkSpeedMbps();
		jstring getSSID();
		android::net::wifi::SupplicantState getSupplicantState();
		jint getTxLinkSpeedMbps();
		jint getWifiStandard();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

