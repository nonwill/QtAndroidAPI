#include "../ProxyInfo.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/util/BitSet.hpp"
#include "./WifiConfiguration.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WifiConfiguration::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiConfiguration::FQDN()
	{
		return getObjectField(
			"FQDN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WifiConfiguration::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::BitSet WifiConfiguration::allowedAuthAlgorithms()
	{
		return getObjectField(
			"allowedAuthAlgorithms",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedGroupCiphers()
	{
		return getObjectField(
			"allowedGroupCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedKeyManagement()
	{
		return getObjectField(
			"allowedKeyManagement",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedPairwiseCiphers()
	{
		return getObjectField(
			"allowedPairwiseCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedProtocols()
	{
		return getObjectField(
			"allowedProtocols",
			"Ljava/util/BitSet;"
		);
	}
	android::net::wifi::WifiEnterpriseConfig WifiConfiguration::enterpriseConfig()
	{
		return getObjectField(
			"enterpriseConfig",
			"Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	jboolean WifiConfiguration::hiddenSSID()
	{
		return getField<jboolean>(
			"hiddenSSID"
		);
	}
	jboolean WifiConfiguration::isHomeProviderNetwork()
	{
		return getField<jboolean>(
			"isHomeProviderNetwork"
		);
	}
	jint WifiConfiguration::networkId()
	{
		return getField<jint>(
			"networkId"
		);
	}
	jstring WifiConfiguration::preSharedKey()
	{
		return getObjectField(
			"preSharedKey",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WifiConfiguration::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	jstring WifiConfiguration::providerFriendlyName()
	{
		return getObjectField(
			"providerFriendlyName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlongArray WifiConfiguration::roamingConsortiumIds()
	{
		return getObjectField(
			"roamingConsortiumIds",
			"[J"
		).object<jlongArray>();
	}
	jint WifiConfiguration::status()
	{
		return getField<jint>(
			"status"
		);
	}
	jarray WifiConfiguration::wepKeys()
	{
		return getObjectField(
			"wepKeys",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jint WifiConfiguration::wepTxKeyIndex()
	{
		return getField<jint>(
			"wepTxKeyIndex"
		);
	}
	
	// QAndroidJniObject forward
	WifiConfiguration::WifiConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiConfiguration::WifiConfiguration()
		: __JniBaseClass(
			"android.net.wifi.WifiConfiguration",
			"()V"
		) {}
	
	// Methods
	jint WifiConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::ProxyInfo WifiConfiguration::getHttpProxy()
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	jboolean WifiConfiguration::isPasspoint()
	{
		return callMethod<jboolean>(
			"isPasspoint",
			"()Z"
		);
	}
	void WifiConfiguration::setHttpProxy(android::net::ProxyInfo arg0)
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	jstring WifiConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi
