#include "../DhcpInfo.hpp"
#include "./WifiConfiguration.hpp"
#include "./WifiInfo.hpp"
#include "./WifiManager_AddNetworkResult.hpp"
#include "./WifiManager_LocalOnlyHotspotCallback.hpp"
#include "./WifiManager_MulticastLock.hpp"
#include "./WifiManager_ScanResultsCallback.hpp"
#include "./WifiManager_SubsystemRestartTrackingCallback.hpp"
#include "./WifiManager_WifiLock.hpp"
#include "./WifiManager_WpsCallback.hpp"
#include "./WpsInfo.hpp"
#include "./hotspot2/PasspointConfiguration.hpp"
#include "../../os/Handler.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./WifiManager.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WifiManager::ACTION_PICK_WIFI_NETWORK()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_PICK_WIFI_NETWORK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_REQUEST_SCAN_ALWAYS_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::ACTION_WIFI_NETWORK_SUGGESTION_POST_CONNECTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_WIFI_NETWORK_SUGGESTION_POST_CONNECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::ACTION_WIFI_SCAN_AVAILABILITY_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"ACTION_WIFI_SCAN_AVAILABILITY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiManager::ERROR_AUTHENTICATING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"ERROR_AUTHENTICATING"
		);
	}
	jstring WifiManager::EXTRA_BSSID()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NETWORK_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NETWORK_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NETWORK_SUGGESTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NETWORK_SUGGESTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NEW_RSSI()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_RSSI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_NEW_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_NEW_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_PREVIOUS_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_PREVIOUS_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_RESULTS_UPDATED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_RESULTS_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_SCAN_AVAILABLE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SCAN_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_SUPPLICANT_CONNECTED()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_SUPPLICANT_ERROR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_SUPPLICANT_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_WIFI_INFO()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::EXTRA_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"EXTRA_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::NETWORK_IDS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_IDS_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::NETWORK_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"NETWORK_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::RSSI_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"RSSI_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::SCAN_RESULTS_AVAILABLE_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SCAN_RESULTS_AVAILABLE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_DUPLICATE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_DUPLICATE"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_EXCEEDS_MAX_PER_APP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_EXCEEDS_MAX_PER_APP"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_INVALID()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_INVALID"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_ADD_NOT_ALLOWED"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_APP_DISALLOWED"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_INTERNAL"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_ERROR_REMOVE_INVALID"
		);
	}
	jint WifiManager::STATUS_NETWORK_SUGGESTIONS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_NETWORK_SUGGESTIONS_SUCCESS"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_APPROVAL_APPROVED_BY_CARRIER_PRIVILEGE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_APPROVAL_APPROVED_BY_CARRIER_PRIVILEGE"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_APPROVAL_APPROVED_BY_USER()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_APPROVAL_APPROVED_BY_USER"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_APPROVAL_PENDING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_APPROVAL_PENDING"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_APPROVAL_REJECTED_BY_USER()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_APPROVAL_REJECTED_BY_USER"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_APPROVAL_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_APPROVAL_UNKNOWN"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_CONNECTION_FAILURE_ASSOCIATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_CONNECTION_FAILURE_ASSOCIATION"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_CONNECTION_FAILURE_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_CONNECTION_FAILURE_AUTHENTICATION"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_CONNECTION_FAILURE_IP_PROVISIONING()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_CONNECTION_FAILURE_IP_PROVISIONING"
		);
	}
	jint WifiManager::STATUS_SUGGESTION_CONNECTION_FAILURE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"STATUS_SUGGESTION_CONNECTION_FAILURE_UNKNOWN"
		);
	}
	jstring WifiManager::SUPPLICANT_CONNECTION_CHANGE_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_CONNECTION_CHANGE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::SUPPLICANT_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"SUPPLICANT_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiManager::UNKNOWN_SSID()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"UNKNOWN_SSID",
			"Ljava/lang/String;"
		).object<jstring>();
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
	jint WifiManager::WIFI_MODE_FULL_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_FULL_LOW_LATENCY"
		);
	}
	jint WifiManager::WIFI_MODE_SCAN_ONLY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiManager",
			"WIFI_MODE_SCAN_ONLY"
		);
	}
	jstring WifiManager::WIFI_STATE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiManager",
			"WIFI_STATE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
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
	WifiManager::WifiManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	android::net::wifi::WifiManager_AddNetworkResult WifiManager::addNetworkPrivileged(android::net::wifi::WifiConfiguration arg0)
	{
		return callObjectMethod(
			"addNetworkPrivileged",
			"(Landroid/net/wifi/WifiConfiguration;)Landroid/net/wifi/WifiManager$AddNetworkResult;",
			arg0.object()
		);
	}
	jint WifiManager::addNetworkSuggestions(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"addNetworkSuggestions",
			"(Ljava/util/List;)I",
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
	void WifiManager::addSuggestionConnectionStatusListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"addSuggestionConnectionStatusListener",
			"(Ljava/util/concurrent/Executor;Landroid/net/wifi/WifiManager$SuggestionConnectionStatusListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiManager::addSuggestionUserApprovalStatusListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"addSuggestionUserApprovalStatusListener",
			"(Ljava/util/concurrent/Executor;Landroid/net/wifi/WifiManager$SuggestionUserApprovalStatusListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint WifiManager::calculateSignalLevel(jint arg0)
	{
		return callMethod<jint>(
			"calculateSignalLevel",
			"(I)I",
			arg0
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
	android::net::wifi::WifiManager_MulticastLock WifiManager::createMulticastLock(jstring arg0)
	{
		return callObjectMethod(
			"createMulticastLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;",
			arg0
		);
	}
	android::net::wifi::WifiManager_WifiLock WifiManager::createWifiLock(jstring arg0)
	{
		return callObjectMethod(
			"createWifiLock",
			"(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0
		);
	}
	android::net::wifi::WifiManager_WifiLock WifiManager::createWifiLock(jint arg0, jstring arg1)
	{
		return callObjectMethod(
			"createWifiLock",
			"(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;",
			arg0,
			arg1
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
	void WifiManager::flushPasspointAnqpCache()
	{
		callMethod<void>(
			"flushPasspointAnqpCache",
			"()V"
		);
	}
	__JniBaseClass WifiManager::getCallerConfiguredNetworks()
	{
		return callObjectMethod(
			"getCallerConfiguredNetworks",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass WifiManager::getConfiguredNetworks()
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
	jint WifiManager::getMaxNumberOfNetworkSuggestionsPerApp()
	{
		return callMethod<jint>(
			"getMaxNumberOfNetworkSuggestionsPerApp",
			"()I"
		);
	}
	jint WifiManager::getMaxSignalLevel()
	{
		return callMethod<jint>(
			"getMaxSignalLevel",
			"()I"
		);
	}
	__JniBaseClass WifiManager::getNetworkSuggestions()
	{
		return callObjectMethod(
			"getNetworkSuggestions",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass WifiManager::getPasspointConfigurations()
	{
		return callObjectMethod(
			"getPasspointConfigurations",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass WifiManager::getScanResults()
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
	jboolean WifiManager::is24GHzBandSupported()
	{
		return callMethod<jboolean>(
			"is24GHzBandSupported",
			"()Z"
		);
	}
	jboolean WifiManager::is5GHzBandSupported()
	{
		return callMethod<jboolean>(
			"is5GHzBandSupported",
			"()Z"
		);
	}
	jboolean WifiManager::is60GHzBandSupported()
	{
		return callMethod<jboolean>(
			"is60GHzBandSupported",
			"()Z"
		);
	}
	jboolean WifiManager::is6GHzBandSupported()
	{
		return callMethod<jboolean>(
			"is6GHzBandSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isAutoWakeupEnabled()
	{
		return callMethod<jboolean>(
			"isAutoWakeupEnabled",
			"()Z"
		);
	}
	jboolean WifiManager::isBridgedApConcurrencySupported()
	{
		return callMethod<jboolean>(
			"isBridgedApConcurrencySupported",
			"()Z"
		);
	}
	jboolean WifiManager::isCarrierNetworkOffloadEnabled(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"isCarrierNetworkOffloadEnabled",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jboolean WifiManager::isDecoratedIdentitySupported()
	{
		return callMethod<jboolean>(
			"isDecoratedIdentitySupported",
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
	jboolean WifiManager::isEasyConnectEnrolleeResponderModeSupported()
	{
		return callMethod<jboolean>(
			"isEasyConnectEnrolleeResponderModeSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isEasyConnectSupported()
	{
		return callMethod<jboolean>(
			"isEasyConnectSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isEnhancedOpenSupported()
	{
		return callMethod<jboolean>(
			"isEnhancedOpenSupported",
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
	jboolean WifiManager::isMakeBeforeBreakWifiSwitchingSupported()
	{
		return callMethod<jboolean>(
			"isMakeBeforeBreakWifiSwitchingSupported",
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
	jboolean WifiManager::isPasspointTermsAndConditionsSupported()
	{
		return callMethod<jboolean>(
			"isPasspointTermsAndConditionsSupported",
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
	jboolean WifiManager::isScanThrottleEnabled()
	{
		return callMethod<jboolean>(
			"isScanThrottleEnabled",
			"()Z"
		);
	}
	jboolean WifiManager::isStaApConcurrencySupported()
	{
		return callMethod<jboolean>(
			"isStaApConcurrencySupported",
			"()Z"
		);
	}
	jboolean WifiManager::isStaBridgedApConcurrencySupported()
	{
		return callMethod<jboolean>(
			"isStaBridgedApConcurrencySupported",
			"()Z"
		);
	}
	jboolean WifiManager::isStaConcurrencyForLocalOnlyConnectionsSupported()
	{
		return callMethod<jboolean>(
			"isStaConcurrencyForLocalOnlyConnectionsSupported",
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
	jboolean WifiManager::isWapiSupported()
	{
		return callMethod<jboolean>(
			"isWapiSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWifiDisplayR2Supported()
	{
		return callMethod<jboolean>(
			"isWifiDisplayR2Supported",
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
	jboolean WifiManager::isWifiStandardSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isWifiStandardSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean WifiManager::isWpa3SaeH2eSupported()
	{
		return callMethod<jboolean>(
			"isWpa3SaeH2eSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWpa3SaePublicKeySupported()
	{
		return callMethod<jboolean>(
			"isWpa3SaePublicKeySupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWpa3SaeSupported()
	{
		return callMethod<jboolean>(
			"isWpa3SaeSupported",
			"()Z"
		);
	}
	jboolean WifiManager::isWpa3SuiteBSupported()
	{
		return callMethod<jboolean>(
			"isWpa3SuiteBSupported",
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
	void WifiManager::registerScanResultsCallback(__JniBaseClass arg0, android::net::wifi::WifiManager_ScanResultsCallback arg1)
	{
		callMethod<void>(
			"registerScanResultsCallback",
			"(Ljava/util/concurrent/Executor;Landroid/net/wifi/WifiManager$ScanResultsCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiManager::registerSubsystemRestartTrackingCallback(__JniBaseClass arg0, android::net::wifi::WifiManager_SubsystemRestartTrackingCallback arg1)
	{
		callMethod<void>(
			"registerSubsystemRestartTrackingCallback",
			"(Ljava/util/concurrent/Executor;Landroid/net/wifi/WifiManager$SubsystemRestartTrackingCallback;)V",
			arg0.object(),
			arg1.object()
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
	jint WifiManager::removeNetworkSuggestions(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"removeNetworkSuggestions",
			"(Ljava/util/List;)I",
			arg0.object()
		);
	}
	jboolean WifiManager::removeNonCallerConfiguredNetworks()
	{
		return callMethod<jboolean>(
			"removeNonCallerConfiguredNetworks",
			"()Z"
		);
	}
	void WifiManager::removePasspointConfiguration(jstring arg0)
	{
		callMethod<void>(
			"removePasspointConfiguration",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiManager::removeSuggestionConnectionStatusListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeSuggestionConnectionStatusListener",
			"(Landroid/net/wifi/WifiManager$SuggestionConnectionStatusListener;)V",
			arg0.object()
		);
	}
	void WifiManager::removeSuggestionUserApprovalStatusListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeSuggestionUserApprovalStatusListener",
			"(Landroid/net/wifi/WifiManager$SuggestionUserApprovalStatusListener;)V",
			arg0.object()
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
	void WifiManager::setTdlsEnabledWithMacAddress(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setTdlsEnabledWithMacAddress",
			"(Ljava/lang/String;Z)V",
			arg0,
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
	void WifiManager::unregisterScanResultsCallback(android::net::wifi::WifiManager_ScanResultsCallback arg0)
	{
		callMethod<void>(
			"unregisterScanResultsCallback",
			"(Landroid/net/wifi/WifiManager$ScanResultsCallback;)V",
			arg0.object()
		);
	}
	void WifiManager::unregisterSubsystemRestartTrackingCallback(android::net::wifi::WifiManager_SubsystemRestartTrackingCallback arg0)
	{
		callMethod<void>(
			"unregisterSubsystemRestartTrackingCallback",
			"(Landroid/net/wifi/WifiManager$SubsystemRestartTrackingCallback;)V",
			arg0.object()
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

