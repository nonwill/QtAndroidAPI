#include "./KeyFactorySpi.hpp"
#include "./Provider.hpp"
#include "./KeyFactory.hpp"

namespace java::security
{
	// Fields
	
	KeyFactory::KeyFactory(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject KeyFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0
		);
	}
	QAndroidJniObject KeyFactory::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject KeyFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyFactory::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject KeyFactory::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::getInstance(const QString &arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::generatePrivate(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generatePrivate",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::generatePublic(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generatePublic",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;",
			arg0.__jniObject().object()
		);
	}
	jstring KeyFactory::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyFactory::getKeySpec(__JniBaseClass arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject KeyFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject KeyFactory::translateKey(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"translateKey",
			"(Ljava/security/Key;)Ljava/security/Key;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::security
