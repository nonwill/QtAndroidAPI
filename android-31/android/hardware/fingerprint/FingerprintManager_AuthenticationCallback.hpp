#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationResult;
}

namespace android::hardware::fingerprint
{
	class FingerprintManager_AuthenticationCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FingerprintManager_AuthenticationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FingerprintManager_AuthenticationCallback(QJniObject obj);
		
		// Constructors
		FingerprintManager_AuthenticationCallback();
		
		// Methods
		void onAuthenticationError(jint arg0, jstring arg1);
		void onAuthenticationFailed();
		void onAuthenticationHelp(jint arg0, jstring arg1);
		void onAuthenticationSucceeded(android::hardware::fingerprint::FingerprintManager_AuthenticationResult arg0);
	};
} // namespace android::hardware::fingerprint

