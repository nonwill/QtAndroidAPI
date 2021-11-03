#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class DhcpInfo;
}
namespace android::net::wifi
{
	class WifiConfiguration;
}
namespace android::net::wifi
{
	class WifiInfo;
}
namespace android::net::wifi
{
	class WifiManager_LocalOnlyHotspotCallback;
}
namespace android::net::wifi
{
	class WifiManager_MulticastLock;
}
namespace android::net::wifi
{
	class WifiManager_WifiLock;
}
namespace android::net::wifi
{
	class WifiManager_WpsCallback;
}
namespace android::net::wifi
{
	class WpsInfo;
}
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
namespace android::os
{
	class Handler;
}
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net::wifi
{
	class WifiManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_PICK_WIFI_NETWORK();
		static JString ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE();
		static jint ERROR_AUTHENTICATING();
		static JString EXTRA_BSSID();
		static JString EXTRA_NETWORK_INFO();
		static JString EXTRA_NEW_RSSI();
		static JString EXTRA_NEW_STATE();
		static JString EXTRA_PREVIOUS_WIFI_STATE();
		static JString EXTRA_RESULTS_UPDATED();
		static JString EXTRA_SUPPLICANT_CONNECTED();
		static JString EXTRA_SUPPLICANT_ERROR();
		static JString EXTRA_WIFI_INFO();
		static JString EXTRA_WIFI_STATE();
		static JString NETWORK_IDS_CHANGED_ACTION();
		static JString NETWORK_STATE_CHANGED_ACTION();
		static JString RSSI_CHANGED_ACTION();
		static JString SCAN_RESULTS_AVAILABLE_ACTION();
		static JString SUPPLICANT_CONNECTION_CHANGE_ACTION();
		static JString SUPPLICANT_STATE_CHANGED_ACTION();
		static jint WIFI_MODE_FULL();
		static jint WIFI_MODE_FULL_HIGH_PERF();
		static jint WIFI_MODE_SCAN_ONLY();
		static JString WIFI_STATE_CHANGED_ACTION();
		static jint WIFI_STATE_DISABLED();
		static jint WIFI_STATE_DISABLING();
		static jint WIFI_STATE_ENABLED();
		static jint WIFI_STATE_ENABLING();
		static jint WIFI_STATE_UNKNOWN();
		static jint WPS_AUTH_FAILURE();
		static jint WPS_OVERLAP_ERROR();
		static jint WPS_TIMED_OUT();
		static jint WPS_TKIP_ONLY_PROHIBITED();
		static jint WPS_WEP_PROHIBITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint calculateSignalLevel(jint arg0, jint arg1);
		static jint compareSignalLevel(jint arg0, jint arg1);
		jint addNetwork(android::net::wifi::WifiConfiguration arg0);
		void addOrUpdatePasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration arg0);
		void cancelWps(android::net::wifi::WifiManager_WpsCallback arg0);
		android::net::wifi::WifiManager_MulticastLock createMulticastLock(JString arg0);
		android::net::wifi::WifiManager_WifiLock createWifiLock(JString arg0);
		android::net::wifi::WifiManager_WifiLock createWifiLock(jint arg0, JString arg1);
		jboolean disableNetwork(jint arg0);
		jboolean disconnect();
		jboolean enableNetwork(jint arg0, jboolean arg1);
		JObject getConfiguredNetworks();
		android::net::wifi::WifiInfo getConnectionInfo();
		android::net::DhcpInfo getDhcpInfo();
		JObject getPasspointConfigurations();
		JObject getScanResults();
		jint getWifiState();
		jboolean is5GHzBandSupported();
		jboolean isDeviceToApRttSupported();
		jboolean isEnhancedPowerReportingSupported();
		jboolean isP2pSupported();
		jboolean isPreferredNetworkOffloadSupported();
		jboolean isScanAlwaysAvailable();
		jboolean isTdlsSupported();
		jboolean isWifiEnabled();
		jboolean pingSupplicant();
		jboolean reassociate();
		jboolean reconnect();
		jboolean removeNetwork(jint arg0);
		void removePasspointConfiguration(JString arg0);
		jboolean saveConfiguration();
		void setTdlsEnabled(java::net::InetAddress arg0, jboolean arg1);
		void setTdlsEnabledWithMacAddress(JString arg0, jboolean arg1);
		jboolean setWifiEnabled(jboolean arg0);
		void startLocalOnlyHotspot(android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, android::os::Handler arg1);
		jboolean startScan();
		void startWps(android::net::wifi::WpsInfo arg0, android::net::wifi::WifiManager_WpsCallback arg1);
		jint updateNetwork(android::net::wifi::WifiConfiguration arg0);
	};
} // namespace android::net::wifi

