#include "../DhcpInfo.hpp"
#include "./WifiConfiguration.hpp"
#include "./WifiInfo.hpp"
#include "./WifiManager_LocalOnlyHotspotCallback.hpp"
#include "./WifiManager_MulticastLock.hpp"
#include "./WifiManager_WifiLock.hpp"
#include "./WifiManager_WpsCallback.hpp"
#include "./WpsInfo.hpp"
#include "./hotspot2/PasspointConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./WifiManager.hpp"

namespace android::net::wifi
{
	// Fields
	JString WifiManager::ACTION_PICK_WIFI_NETWORK()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_PICK_WIFI_NETWORK",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	jint WifiManager::ERROR_AUTHENTICATING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"ERROR_AUTHENTICATING"
		);
	}
	JString WifiManager::EXTRA_BSSID()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_BSSID",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_NEW_RSSI()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_RSSI",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_NEW_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_STATE",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_PREVIOUS_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_PREVIOUS_WIFI_STATE",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_RESULTS_UPDATED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_RESULTS_UPDATED",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_SUPPLICANT_CONNECTED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_SUPPLICANT_ERROR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_ERROR",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_WIFI_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_INFO",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::EXTRA_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::NETWORK_IDS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_IDS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::NETWORK_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::RSSI_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"RSSI_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::SCAN_RESULTS_AVAILABLE_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SCAN_RESULTS_AVAILABLE_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::SUPPLICANT_CONNECTION_CHANGE_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_CONNECTION_CHANGE_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString WifiManager::SUPPLICANT_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	jint WifiManager::WIFI_MODE_FULL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL"
		);
	}
	jint WifiManager::WIFI_MODE_FULL_HIGH_PERF()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL_HIGH_PERF"
		);
	}
	jint WifiManager::WIFI_MODE_SCAN_ONLY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_SCAN_ONLY"
		);
	}
	JString WifiManager::WIFI_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	jint WifiManager::WIFI_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_DISABLED"
		);
	}
	jint WifiManager::WIFI_STATE_DISABLING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_DISABLING"
		);
	}
	jint WifiManager::WIFI_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_ENABLED"
		);
	}
	jint WifiManager::WIFI_STATE_ENABLING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_ENABLING"
		);
	}
	jint WifiManager::WIFI_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_UNKNOWN"
		);
	}
	jint WifiManager::WPS_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_AUTH_FAILURE"
		);
	}
	jint WifiManager::WPS_OVERLAP_ERROR()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_OVERLAP_ERROR"
		);
	}
	jint WifiManager::WPS_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_TIMED_OUT"
		);
	}
	jint WifiManager::WPS_TKIP_ONLY_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_TKIP_ONLY_PROHIBITED"
		);
	}
	jint WifiManager::WPS_WEP_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WPS_WEP_PROHIBITED"
		);
	}
	
	// QAndroidJniObject forward
	WifiManager::WifiManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WifiManager::calculateSignalLevel(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.WifiManager",
			"calculateSignalLevel",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint WifiManager::compareSignalLevel(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.net.wifi.WifiManager",
			"compareSignalLevel",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint WifiManager::addNetwork(android::net::wifi::WifiConfiguration arg0)
	{
		return callMethod<jint>(
			"addNetwork",
			"(Landroid/net/wifi/WifiConfiguration;)I",
			arg0.object()
		);
	}
	void WifiManager::addOrUpdatePasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration arg0)
	{
		callMethod<void>(
			"addOrUpdatePasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.object()
		);
	}
	void WifiManager::cancelWps(android::net::wifi::WifiManager_WpsCallback arg0)
	{
		callMethod<void>(
			"cancelWps",
			"(Landroid/net/wifi/WifiManager$WpsCallback;)V",
			arg0.object()
		);
	}
	android::net::wifi::WifiManager_MulticastLock WifiManager::createMulticastLock(JString arg0)
	{
		return callObjectMethod(
			"createMulticastLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiManager_WifiLock WifiManager::createWifiLock(JString arg0)
	{
		return callObjectMethod(
			"createWifiLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0.object<jstring>()
		);
	}
	android::net::wifi::WifiManager_WifiLock WifiManager::createWifiLock(jint arg0, JString arg1)
	{
		return callObjectMethod(
			"createWifiLock",
			"(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0,
			arg1.object<jstring>()
		);
	}
	jboolean WifiManager::disableNetwork(jint arg0)
	{
		return callMethod<jboolean>(
			"disableNetwork",
			"(I)Z",
			arg0
		);
	}
	jboolean WifiManager::disconnect()
	{
		return callMethod<jboolean>(
			"disconnect",
			"()Z"
		);
	}
	jboolean WifiManager::enableNetwork(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"enableNetwork",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	JObject WifiManager::getConfiguredNetworks()
	{
		return callObjectMethod(
			"getConfiguredNetworks",
			"()Ljava/util/List;"
		);
	}
	android::net::wifi::WifiInfo WifiManager::getConnectionInfo()
	{
		return callObjectMethod(
			"getConnectionInfo",
			"()Landroid/net/wifi/WifiInfo;"
		);
	}
	android::net::DhcpInfo WifiManager::getDhcpInfo()
	{
		return callObjectMethod(
			"getDhcpInfo",
			"()Landroid/net/DhcpInfo;"
		);
	}
	JObject WifiManager::getPasspointConfigurations()
	{
		return callObjectMethod(
			"getPasspointConfigurations",
			"()Ljava/util/List;"
		);
	}
	JObject WifiManager::getScanResults()
	{
		return callObjectMethod(
			"getScanResults",
			"()Ljava/util/List;"
		);
	}
	jint WifiManager::getWifiState()
	{
		return callMethod<jint>(
			"getWifiState",
			"()I"
		);
	}
	jboolean WifiManager::is5GHzBandSupported()
	{
		return callMethod<jboolean>(
			"is5GHzBandSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isDeviceToApRttSupported()
	{
		return callMethod<jboolean>(
			"isDeviceToApRttSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isEnhancedPowerReportingSupported()
	{
		return callMethod<jboolean>(
			"isEnhancedPowerReportingSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isP2pSupported()
	{
		return callMethod<jboolean>(
			"isP2pSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isPreferredNetworkOffloadSupported()
	{
		return callMethod<jboolean>(
			"isPreferredNetworkOffloadSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isScanAlwaysAvailable()
	{
		return callMethod<jboolean>(
			"isScanAlwaysAvailable",
			"()Z"
		);
	}
	jboolean WifiManager::isTdlsSupported()
	{
		return callMethod<jboolean>(
			"isTdlsSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWifiEnabled()
	{
		return callMethod<jboolean>(
			"isWifiEnabled",
			"()Z"
		);
	}
	jboolean WifiManager::pingSupplicant()
	{
		return callMethod<jboolean>(
			"pingSupplicant",
			"()Z"
		);
	}
	jboolean WifiManager::reassociate()
	{
		return callMethod<jboolean>(
			"reassociate",
			"()Z"
		);
	}
	jboolean WifiManager::reconnect()
	{
		return callMethod<jboolean>(
			"reconnect",
			"()Z"
		);
	}
	jboolean WifiManager::removeNetwork(jint arg0)
	{
		return callMethod<jboolean>(
			"removeNetwork",
			"(I)Z",
			arg0
		);
	}
	void WifiManager::removePasspointConfiguration(JString arg0)
	{
		callMethod<void>(
			"removePasspointConfiguration",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean WifiManager::saveConfiguration()
	{
		return callMethod<jboolean>(
			"saveConfiguration",
			"()Z"
		);
	}
	void WifiManager::setTdlsEnabled(java::net::InetAddress arg0, jboolean arg1)
	{
		callMethod<void>(
			"setTdlsEnabled",
			"(Ljava/net/InetAddress;Z)V",
			arg0.object(),
			arg1
		);
	}
	void WifiManager::setTdlsEnabledWithMacAddress(JString arg0, jboolean arg1)
	{
		callMethod<void>(
			"setTdlsEnabledWithMacAddress",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean WifiManager::setWifiEnabled(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setWifiEnabled",
			"(Z)Z",
			arg0
		);
	}
	void WifiManager::startLocalOnlyHotspot(android::net::wifi::WifiManager_LocalOnlyHotspotCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"startLocalOnlyHotspot",
			"(Landroid/net/wifi/WifiManager$LocalOnlyHotspotCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean WifiManager::startScan()
	{
		return callMethod<jboolean>(
			"startScan",
			"()Z"
		);
	}
	void WifiManager::startWps(android::net::wifi::WpsInfo arg0, android::net::wifi::WifiManager_WpsCallback arg1)
	{
		callMethod<void>(
			"startWps",
			"(Landroid/net/wifi/WpsInfo;Landroid/net/wifi/WifiManager$WpsCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint WifiManager::updateNetwork(android::net::wifi::WifiConfiguration arg0)
	{
		return callMethod<jint>(
			"updateNetwork",
			"(Landroid/net/wifi/WifiConfiguration;)I",
			arg0.object()
		);
	}
} // namespace android::net::wifi

