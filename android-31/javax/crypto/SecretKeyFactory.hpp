#pragma once

#include "../../JObject.hpp"

class JClass;
class JObject;
class JString;
namespace java::security
{
	class Provider;
}
namespace javax::crypto
{
	class SecretKeyFactorySpi;
}

namespace javax::crypto
{
	class SecretKeyFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecretKeyFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeyFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::SecretKeyFactory getInstance(JString arg0);
		static javax::crypto::SecretKeyFactory getInstance(JString arg0, JString arg1);
		static javax::crypto::SecretKeyFactory getInstance(JString arg0, java::security::Provider arg1);
		JObject generateSecret(JObject arg0);
		JString getAlgorithm();
		JObject getKeySpec(JObject arg0, JClass arg1);
		java::security::Provider getProvider();
		JObject translateKey(JObject arg0);
	};
} // namespace javax::crypto

