#include "./CertificateExpiredException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertificateExpiredException::CertificateExpiredException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertificateExpiredException::CertificateExpiredException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateExpiredException",
			"()V"
		);
	}
	CertificateExpiredException::CertificateExpiredException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertificateExpiredException::CertificateExpiredException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertificateExpiredException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::security::cert
