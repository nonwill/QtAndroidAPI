#pragma once

#include "../../../JObject.hpp"

namespace android::net::nsd
{
	class NsdServiceInfo;
}

namespace android::net::nsd
{
	class NsdManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_NSD_STATE_CHANGED();
		static jstring EXTRA_NSD_STATE();
		static jint FAILURE_ALREADY_ACTIVE();
		static jint FAILURE_INTERNAL_ERROR();
		static jint FAILURE_MAX_LIMIT();
		static jint NSD_STATE_DISABLED();
		static jint NSD_STATE_ENABLED();
		static jint PROTOCOL_DNS_SD();
		
		// QJniObject forward
		template<typename ...Ts> explicit NsdManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NsdManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void discoverServices(jstring arg0, jint arg1, JObject arg2);
		void registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, JObject arg2);
		void resolveService(android::net::nsd::NsdServiceInfo arg0, JObject arg1);
		void stopServiceDiscovery(JObject arg0);
		void unregisterService(JObject arg0);
	};
} // namespace android::net::nsd

