#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class WifiSsid;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi
{
	class SoftApConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SECURITY_TYPE_OPEN();
		static jint SECURITY_TYPE_WPA2_PSK();
		static jint SECURITY_TYPE_WPA3_OWE();
		static jint SECURITY_TYPE_WPA3_OWE_TRANSITION();
		static jint SECURITY_TYPE_WPA3_SAE();
		static jint SECURITY_TYPE_WPA3_SAE_TRANSITION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SoftApConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoftApConfiguration(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::MacAddress getBssid() const;
		JString getPassphrase() const;
		jint getSecurityType() const;
		JString getSsid() const;
		android::net::wifi::WifiSsid getWifiSsid() const;
		jint hashCode() const;
		jboolean isHiddenSsid() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

