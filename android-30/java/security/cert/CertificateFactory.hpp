#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
class JString;
namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CRL;
}
namespace java::security::cert
{
	class CertPath;
}
namespace java::security::cert
{
	class Certificate;
}
namespace java::security::cert
{
	class CertificateFactorySpi;
}

namespace java::security::cert
{
	class CertificateFactory : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertificateFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::cert::CertificateFactory getInstance(JString arg0);
		static java::security::cert::CertificateFactory getInstance(JString arg0, JString arg1);
		static java::security::cert::CertificateFactory getInstance(JString arg0, java::security::Provider arg1);
		java::security::cert::CRL generateCRL(java::io::InputStream arg0);
		JObject generateCRLs(java::io::InputStream arg0);
		java::security::cert::CertPath generateCertPath(java::io::InputStream arg0);
		java::security::cert::CertPath generateCertPath(JObject arg0);
		java::security::cert::CertPath generateCertPath(java::io::InputStream arg0, JString arg1);
		java::security::cert::Certificate generateCertificate(java::io::InputStream arg0);
		JObject generateCertificates(java::io::InputStream arg0);
		JObject getCertPathEncodings();
		java::security::Provider getProvider();
		JString getType();
	};
} // namespace java::security::cert

