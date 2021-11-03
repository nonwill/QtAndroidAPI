#pragma once

#include "../../../../../JObject.hpp"
#include "./WifiP2pServiceInfo.hpp"


namespace android::net::wifi::p2p::nsd
{
	class WifiP2pUpnpServiceInfo : public android::net::wifi::p2p::nsd::WifiP2pServiceInfo
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiP2pUpnpServiceInfo(const char *className, const char *sig, Ts...agv) : android::net::wifi::p2p::nsd::WifiP2pServiceInfo(className, sig, std::forward<Ts>(agv)...) {}
		WifiP2pUpnpServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::p2p::nsd::WifiP2pUpnpServiceInfo newInstance(jstring arg0, jstring arg1, JObject arg2);
	};
} // namespace android::net::wifi::p2p::nsd

