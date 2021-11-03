#include "../../../JString.hpp"
#include "./CertificateExpiredException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	CertificateExpiredException::CertificateExpiredException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateExpiredException::CertificateExpiredException()
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateExpiredException",
			"()V"
		) {}
	CertificateExpiredException::CertificateExpiredException(JString arg0)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::security::cert

