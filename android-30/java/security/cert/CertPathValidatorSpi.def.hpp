#pragma once

#include "../../../JObject.hpp"

namespace java::security::cert
{
	class CertPath;
}

namespace java::security::cert
{
	class CertPathValidatorSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidatorSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidatorSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CertPathValidatorSpi();
		
		// Methods
		JObject engineGetRevocationChecker() const;
		JObject engineValidate(java::security::cert::CertPath arg0, JObject arg1) const;
	};
} // namespace java::security::cert
