#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi
{
	class WifiEnterpriseConfig;
}
namespace android::net::wifi
{
	class WifiNetworkSuggestion;
}
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace android::net::wifi
{
	class WifiNetworkSuggestion_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiNetworkSuggestion_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSuggestion_Builder(QAndroidJniObject obj);
		
		// Constructors
		WifiNetworkSuggestion_Builder();
		
		// Methods
		android::net::wifi::WifiNetworkSuggestion build();
		android::net::wifi::WifiNetworkSuggestion_Builder setBssid(android::net::MacAddress arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setCarrierMerged(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setCredentialSharedWithUser(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsAppInteractionRequired(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsEnhancedOpen(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsHiddenSsid(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsInitialAutojoinEnabled(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsMetered(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsUserInteractionRequired(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setIsWpa3SaeH2eOnlyModeEnabled(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setMacRandomizationSetting(jint arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setPasspointConfig(android::net::wifi::hotspot2::PasspointConfiguration arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setPriority(jint arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setPriorityGroup(jint arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setSsid(jstring arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setSubscriptionId(jint arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setUntrusted(jboolean arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWapiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWapiPassphrase(jstring arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa2EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa2Passphrase(jstring arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3Enterprise192BitModeConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3EnterpriseConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3EnterpriseStandardModeConfig(android::net::wifi::WifiEnterpriseConfig arg0);
		android::net::wifi::WifiNetworkSuggestion_Builder setWpa3Passphrase(jstring arg0);
	};
} // namespace android::net::wifi
