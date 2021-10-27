#include "./PKIXReason.hpp"

namespace java::security::cert
{
	// Fields
	QAndroidJniObject PKIXReason::INVALID_KEY_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_KEY_USAGE",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::INVALID_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_NAME",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::INVALID_POLICY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"INVALID_POLICY",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::NAME_CHAINING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NAME_CHAINING",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::NOT_CA_CERT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NOT_CA_CERT",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::NO_TRUST_ANCHOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"NO_TRUST_ANCHOR",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::PATH_TOO_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"PATH_TOO_LONG",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	QAndroidJniObject PKIXReason::UNRECOGNIZED_CRIT_EXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.cert.PKIXReason",
			"UNRECOGNIZED_CRIT_EXT",
			"Ljava/security/cert/PKIXReason;"
		);
	}
	
	PKIXReason::PKIXReason(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PKIXReason::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXReason;",
			arg0
		);
	}
	QAndroidJniObject PKIXReason::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"valueOf",
			"(Ljava/lang/String;)Ljava/security/cert/PKIXReason;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray PKIXReason::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.PKIXReason",
			"values",
			"()[Ljava/security/cert/PKIXReason;"
		).object<jarray>();
	}
} // namespace java::security::cert
