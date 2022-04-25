#pragma once

#include "../../JObject.hpp"

class JArray;
namespace java::security
{
	class KeyPair;
}

namespace android::security
{
	class AttestedKeyPair : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttestedKeyPair(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttestedKeyPair(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAttestationRecord() const;
		java::security::KeyPair getKeyPair() const;
	};
} // namespace android::security
