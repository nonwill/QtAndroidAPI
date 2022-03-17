#pragma once

#include "../../JClass.hpp"
#include "./SecretKeyFactorySpi.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline SecretKeyFactorySpi::SecretKeyFactorySpi()
		: JObject(
			"javax.crypto.SecretKeyFactorySpi",
			"()V"
		) {}
	
	// Methods
} // namespace javax::crypto

// Base class headers

