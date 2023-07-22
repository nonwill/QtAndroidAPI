#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::security::identity
{
	class CredentialDataResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CredentialDataResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialDataResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JByteArray getDeviceMac() const;
		JByteArray getDeviceNameSpaces() const;
		JObject getDeviceSignedEntries() const;
		JObject getIssuerSignedEntries() const;
		JByteArray getStaticAuthenticationData() const;
	};
} // namespace android::security::identity

