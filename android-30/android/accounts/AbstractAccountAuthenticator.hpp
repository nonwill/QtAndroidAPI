#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::accounts
{
	class Account;
}
namespace android::accounts
{
	class AccountAuthenticatorResponse;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::accounts
{
	class AbstractAccountAuthenticator : public JObject
	{
	public:
		// Fields
		static JString KEY_CUSTOM_TOKEN_EXPIRY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractAccountAuthenticator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AbstractAccountAuthenticator(QAndroidJniObject obj);
		
		// Constructors
		AbstractAccountAuthenticator(android::content::Context arg0);
		
		// Methods
		android::os::Bundle addAccount(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, JString arg2, JArray arg3, android::os::Bundle arg4);
		android::os::Bundle addAccountFromCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2);
		android::os::Bundle confirmCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, android::os::Bundle arg2);
		android::os::Bundle editProperties(android::accounts::AccountAuthenticatorResponse arg0, JString arg1);
		android::os::Bundle finishSession(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, android::os::Bundle arg2);
		android::os::Bundle getAccountCredentialsForCloning(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1);
		android::os::Bundle getAccountRemovalAllowed(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1);
		android::os::Bundle getAuthToken(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3);
		JString getAuthTokenLabel(JString arg0);
		JObject getIBinder();
		android::os::Bundle hasFeatures(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JArray arg2);
		android::os::Bundle isCredentialsUpdateSuggested(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2);
		android::os::Bundle startAddAccountSession(android::accounts::AccountAuthenticatorResponse arg0, JString arg1, JString arg2, JArray arg3, android::os::Bundle arg4);
		android::os::Bundle startUpdateCredentialsSession(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3);
		android::os::Bundle updateCredentials(android::accounts::AccountAuthenticatorResponse arg0, android::accounts::Account arg1, JString arg2, android::os::Bundle arg3);
	};
} // namespace android::accounts

