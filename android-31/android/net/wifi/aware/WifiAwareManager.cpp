#include "./AttachCallback.hpp"
#include "./AwareResources.hpp"
#include "./Characteristics.hpp"
#include "./IdentityChangedListener.hpp"
#include "../../../os/Handler.hpp"
#include "./WifiAwareManager.hpp"

namespace android::net::wifi::aware
{
	// Fields
	jstring WifiAwareManager::ACTION_WIFI_AWARE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareManager",
			"ACTION_WIFI_AWARE_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_INITIATOR()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_INITIATOR"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DATA_PATH_ROLE_RESPONDER()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DATA_PATH_ROLE_RESPONDER"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DISCOVERY_LOST_REASON_PEER_NOT_VISIBLE"
		);
	}
	jint WifiAwareManager::WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.WifiAwareManager",
			"WIFI_AWARE_DISCOVERY_LOST_REASON_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	WifiAwareManager::WifiAwareManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WifiAwareManager::attach(android::net::wifi::aware::AttachCallback arg0, android::net::wifi::aware::IdentityChangedListener arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"attach",
			"(Landroid/net/wifi/aware/AttachCallback;Landroid/net/wifi/aware/IdentityChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::net::wifi::aware::AwareResources WifiAwareManager::getAvailableAwareResources()
	{
		return callObjectMethod(
			"getAvailableAwareResources",
			"()Landroid/net/wifi/aware/AwareResources;"
		);
	}
	android::net::wifi::aware::Characteristics WifiAwareManager::getCharacteristics()
	{
		return callObjectMethod(
			"getCharacteristics",
			"()Landroid/net/wifi/aware/Characteristics;"
		);
	}
	jboolean WifiAwareManager::isAvailable()
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean WifiAwareManager::isDeviceAttached()
	{
		return callMethod<jboolean>(
			"isDeviceAttached",
			"()Z"
		);
	}
	jboolean WifiAwareManager::isInstantCommunicationModeEnabled()
	{
		return callMethod<jboolean>(
			"isInstantCommunicationModeEnabled",
			"()Z"
		);
	}
} // namespace android::net::wifi::aware
