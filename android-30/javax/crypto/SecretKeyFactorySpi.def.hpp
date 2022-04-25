#pragma once

#include "../../JObject.hpp"

class JClass;

namespace javax::crypto
{
	class SecretKeyFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecretKeyFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeyFactorySpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SecretKeyFactorySpi();
		
		// Methods
	};
} // namespace javax::crypto
