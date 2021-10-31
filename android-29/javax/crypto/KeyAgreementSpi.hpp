#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class SecureRandom;
}

namespace javax::crypto
{
	class KeyAgreementSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyAgreementSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyAgreementSpi(QJniObject obj);
		
		// Constructors
		KeyAgreementSpi();
		
		// Methods
	};
} // namespace javax::crypto

