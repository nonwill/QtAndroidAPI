#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class Network;
}
namespace android::net::ipsec::ike
{
	class IkeIdentification;
}
namespace android::net::ipsec::ike
{
	class IkeSessionParams_IkeAuthConfig;
}

namespace android::net::ipsec::ike
{
	class IkeSessionParams : public JObject
	{
	public:
		// Fields
		static jint IKE_OPTION_ACCEPT_ANY_REMOTE_ID();
		static jint IKE_OPTION_EAP_ONLY_AUTH();
		static jint IKE_OPTION_FORCE_PORT_4500();
		static jint IKE_OPTION_MOBIKE();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSessionParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IkeSessionParams(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint getDpdDelaySeconds();
		jint getHardLifetimeSeconds();
		JObject getIkeSaProposals();
		android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig getLocalAuthConfig();
		android::net::ipsec::ike::IkeIdentification getLocalIdentification();
		jint getNattKeepAliveDelaySeconds();
		android::net::Network getNetwork();
		android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig getRemoteAuthConfig();
		android::net::ipsec::ike::IkeIdentification getRemoteIdentification();
		jintArray getRetransmissionTimeoutsMillis();
		jstring getServerHostname();
		jint getSoftLifetimeSeconds();
		jboolean hasIkeOption(jint arg0);
		jint hashCode();
	};
} // namespace android::net::ipsec::ike

