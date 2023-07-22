#pragma once

#include "../MacAddress.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"
#include "./WifiSsid.def.hpp"
#include "./hotspot2/PasspointConfiguration.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSuggestion.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject WifiNetworkSuggestion::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiNetworkSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WifiNetworkSuggestion::RANDOMIZATION_NON_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiNetworkSuggestion",
			"RANDOMIZATION_NON_PERSISTENT"
		);
	}
	inline jint WifiNetworkSuggestion::RANDOMIZATION_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiNetworkSuggestion",
			"RANDOMIZATION_PERSISTENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WifiNetworkSuggestion::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WifiNetworkSuggestion::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::MacAddress WifiNetworkSuggestion::getBssid() const
	{
		return callObjectMethod(
			"getBssid",
			"()Landroid/net/MacAddress;"
		);
	}
	inline android::net::wifi::WifiEnterpriseConfig WifiNetworkSuggestion::getEnterpriseConfig() const
	{
		return callObjectMethod(
			"getEnterpriseConfig",
			"()Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	inline jint WifiNetworkSuggestion::getMacRandomizationSetting() const
	{
		return callMethod<jint>(
			"getMacRandomizationSetting",
			"()I"
		);
	}
	inline JString WifiNetworkSuggestion::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::wifi::hotspot2::PasspointConfiguration WifiNetworkSuggestion::getPasspointConfig() const
	{
		return callObjectMethod(
			"getPasspointConfig",
			"()Landroid/net/wifi/hotspot2/PasspointConfiguration;"
		);
	}
	inline jint WifiNetworkSuggestion::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline jint WifiNetworkSuggestion::getPriorityGroup() const
	{
		return callMethod<jint>(
			"getPriorityGroup",
			"()I"
		);
	}
	inline JString WifiNetworkSuggestion::getSsid() const
	{
		return callObjectMethod(
			"getSsid",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::ParcelUuid WifiNetworkSuggestion::getSubscriptionGroup() const
	{
		return callObjectMethod(
			"getSubscriptionGroup",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline jint WifiNetworkSuggestion::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	inline android::net::wifi::WifiSsid WifiNetworkSuggestion::getWifiSsid() const
	{
		return callObjectMethod(
			"getWifiSsid",
			"()Landroid/net/wifi/WifiSsid;"
		);
	}
	inline jint WifiNetworkSuggestion::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WifiNetworkSuggestion::isAppInteractionRequired() const
	{
		return callMethod<jboolean>(
			"isAppInteractionRequired",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isCarrierMerged() const
	{
		return callMethod<jboolean>(
			"isCarrierMerged",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isCredentialSharedWithUser() const
	{
		return callMethod<jboolean>(
			"isCredentialSharedWithUser",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isEnhancedOpen() const
	{
		return callMethod<jboolean>(
			"isEnhancedOpen",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isHiddenSsid() const
	{
		return callMethod<jboolean>(
			"isHiddenSsid",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isInitialAutojoinEnabled() const
	{
		return callMethod<jboolean>(
			"isInitialAutojoinEnabled",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isMetered() const
	{
		return callMethod<jboolean>(
			"isMetered",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isRestricted() const
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isUntrusted() const
	{
		return callMethod<jboolean>(
			"isUntrusted",
			"()Z"
		);
	}
	inline jboolean WifiNetworkSuggestion::isUserInteractionRequired() const
	{
		return callMethod<jboolean>(
			"isUserInteractionRequired",
			"()Z"
		);
	}
	inline JString WifiNetworkSuggestion::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiNetworkSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
