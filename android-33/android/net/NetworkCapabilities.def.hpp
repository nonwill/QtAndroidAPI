#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::net
{
	class NetworkSpecifier;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class NetworkCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint NET_CAPABILITY_CAPTIVE_PORTAL();
		static jint NET_CAPABILITY_CBS();
		static jint NET_CAPABILITY_DUN();
		static jint NET_CAPABILITY_EIMS();
		static jint NET_CAPABILITY_ENTERPRISE();
		static jint NET_CAPABILITY_FOREGROUND();
		static jint NET_CAPABILITY_FOTA();
		static jint NET_CAPABILITY_HEAD_UNIT();
		static jint NET_CAPABILITY_IA();
		static jint NET_CAPABILITY_IMS();
		static jint NET_CAPABILITY_INTERNET();
		static jint NET_CAPABILITY_MCX();
		static jint NET_CAPABILITY_MMS();
		static jint NET_CAPABILITY_MMTEL();
		static jint NET_CAPABILITY_NOT_CONGESTED();
		static jint NET_CAPABILITY_NOT_METERED();
		static jint NET_CAPABILITY_NOT_RESTRICTED();
		static jint NET_CAPABILITY_NOT_ROAMING();
		static jint NET_CAPABILITY_NOT_SUSPENDED();
		static jint NET_CAPABILITY_NOT_VPN();
		static jint NET_CAPABILITY_PRIORITIZE_BANDWIDTH();
		static jint NET_CAPABILITY_PRIORITIZE_LATENCY();
		static jint NET_CAPABILITY_RCS();
		static jint NET_CAPABILITY_SUPL();
		static jint NET_CAPABILITY_TEMPORARILY_NOT_METERED();
		static jint NET_CAPABILITY_TRUSTED();
		static jint NET_CAPABILITY_VALIDATED();
		static jint NET_CAPABILITY_WIFI_P2P();
		static jint NET_CAPABILITY_XCAP();
		static jint NET_ENTERPRISE_ID_1();
		static jint NET_ENTERPRISE_ID_2();
		static jint NET_ENTERPRISE_ID_3();
		static jint NET_ENTERPRISE_ID_4();
		static jint NET_ENTERPRISE_ID_5();
		static jint SIGNAL_STRENGTH_UNSPECIFIED();
		static jint TRANSPORT_BLUETOOTH();
		static jint TRANSPORT_CELLULAR();
		static jint TRANSPORT_ETHERNET();
		static jint TRANSPORT_LOWPAN();
		static jint TRANSPORT_USB();
		static jint TRANSPORT_VPN();
		static jint TRANSPORT_WIFI();
		static jint TRANSPORT_WIFI_AWARE();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NetworkCapabilities();
		NetworkCapabilities(android::net::NetworkCapabilities &arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JIntArray getCapabilities() const;
		JIntArray getEnterpriseIds() const;
		jint getLinkDownstreamBandwidthKbps() const;
		jint getLinkUpstreamBandwidthKbps() const;
		android::net::NetworkSpecifier getNetworkSpecifier() const;
		jint getOwnerUid() const;
		jint getSignalStrength() const;
		JObject getTransportInfo() const;
		jboolean hasCapability(jint arg0) const;
		jboolean hasEnterpriseId(jint arg0) const;
		jboolean hasTransport(jint arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net
