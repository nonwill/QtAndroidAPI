#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class RcsUceAdapter;
}
namespace android::telephony::ims
{
	class RegistrationManager_RegistrationCallback;
}

namespace android::telephony::ims
{
	class ImsRcsManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsRcsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsRcsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void getRegistrationState(JObject arg0, JObject arg1);
		void getRegistrationTransportType(JObject arg0, JObject arg1);
		android::telephony::ims::RcsUceAdapter getUceAdapter();
		void registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1);
		void unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0);
	};
} // namespace android::telephony::ims

