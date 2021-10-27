#include "../../math/BigInteger.hpp"
#include "../Provider.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./X509Certificate.hpp"

namespace java::security::cert
{
	// Fields
	
	X509Certificate::X509Certificate(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void X509Certificate::checkValidity()
	{
		__thiz.callMethod<void>(
			"checkValidity",
			"()V"
		);
	}
	void X509Certificate::checkValidity(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"checkValidity",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	jint X509Certificate::getBasicConstraints()
	{
		return __thiz.callMethod<jint>(
			"getBasicConstraints",
			"()I"
		);
	}
	QAndroidJniObject X509Certificate::getExtendedKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getExtendedKeyUsage",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject X509Certificate::getIssuerAlternativeNames()
	{
		return __thiz.callObjectMethod(
			"getIssuerAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject X509Certificate::getIssuerDN()
	{
		return __thiz.callObjectMethod(
			"getIssuerDN",
			"()Ljava/security/Principal;"
		);
	}
	jbooleanArray X509Certificate::getIssuerUniqueID()
	{
		return __thiz.callObjectMethod(
			"getIssuerUniqueID",
			"()[Z"
		).object<jbooleanArray>();
	}
	QAndroidJniObject X509Certificate::getIssuerX500Principal()
	{
		return __thiz.callObjectMethod(
			"getIssuerX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jbooleanArray X509Certificate::getKeyUsage()
	{
		return __thiz.callObjectMethod(
			"getKeyUsage",
			"()[Z"
		).object<jbooleanArray>();
	}
	QAndroidJniObject X509Certificate::getNotAfter()
	{
		return __thiz.callObjectMethod(
			"getNotAfter",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509Certificate::getNotBefore()
	{
		return __thiz.callObjectMethod(
			"getNotBefore",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject X509Certificate::getSerialNumber()
	{
		return __thiz.callObjectMethod(
			"getSerialNumber",
			"()Ljava/math/BigInteger;"
		);
	}
	jstring X509Certificate::getSigAlgName()
	{
		return __thiz.callObjectMethod(
			"getSigAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring X509Certificate::getSigAlgOID()
	{
		return __thiz.callObjectMethod(
			"getSigAlgOID",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray X509Certificate::getSigAlgParams()
	{
		return __thiz.callObjectMethod(
			"getSigAlgParams",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray X509Certificate::getSignature()
	{
		return __thiz.callObjectMethod(
			"getSignature",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject X509Certificate::getSubjectAlternativeNames()
	{
		return __thiz.callObjectMethod(
			"getSubjectAlternativeNames",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject X509Certificate::getSubjectDN()
	{
		return __thiz.callObjectMethod(
			"getSubjectDN",
			"()Ljava/security/Principal;"
		);
	}
	jbooleanArray X509Certificate::getSubjectUniqueID()
	{
		return __thiz.callObjectMethod(
			"getSubjectUniqueID",
			"()[Z"
		).object<jbooleanArray>();
	}
	QAndroidJniObject X509Certificate::getSubjectX500Principal()
	{
		return __thiz.callObjectMethod(
			"getSubjectX500Principal",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	jbyteArray X509Certificate::getTBSCertificate()
	{
		return __thiz.callObjectMethod(
			"getTBSCertificate",
			"()[B"
		).object<jbyteArray>();
	}
	jint X509Certificate::getVersion()
	{
		return __thiz.callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	void X509Certificate::verify(__JniBaseClass arg0, java::security::Provider arg1)
	{
		__thiz.callMethod<void>(
			"verify",
			"(Ljava/security/PublicKey;Ljava/security/Provider;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::security::cert
