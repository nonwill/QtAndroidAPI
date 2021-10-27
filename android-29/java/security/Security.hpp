#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::util
{
	class LinkedHashSet;
}
namespace __jni_impl::java::util
{
	class Properties;
}

namespace __jni_impl::java::security
{
	class Security : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint addProvider(__jni_impl::java::security::Provider arg0);
		static jstring getAlgorithmProperty(jstring arg0, jstring arg1);
		static jstring getAlgorithmProperty(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getAlgorithms(jstring arg0);
		static QAndroidJniObject getAlgorithms(const QString &arg0);
		static jstring getProperty(jstring arg0);
		static jstring getProperty(const QString &arg0);
		static QAndroidJniObject getProvider(jstring arg0);
		static QAndroidJniObject getProvider(const QString &arg0);
		static jarray getProviders();
		static jarray getProviders(jstring arg0);
		static jarray getProviders(const QString &arg0);
		static jarray getProviders(__jni_impl::__JniBaseClass arg0);
		static jint insertProviderAt(__jni_impl::java::security::Provider arg0, jint arg1);
		static void removeProvider(jstring arg0);
		static void removeProvider(const QString &arg0);
		static void setProperty(jstring arg0, jstring arg1);
		static void setProperty(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::java::security

#include "../io/File.hpp"
#include "./Provider.hpp"
#include "../util/LinkedHashSet.hpp"
#include "../util/Properties.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void Security::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.Security",
			"(V)V");
	}
	
	// Methods
	jint Security::addProvider(__jni_impl::java::security::Provider arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.security.Security",
			"addProvider",
			"(Ljava/security/Provider;)I",
			arg0.__jniObject().object()
		);
	}
	jstring Security::getAlgorithmProperty(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithmProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Security::getAlgorithmProperty(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithmProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Security::getAlgorithms(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithms",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0
		);
	}
	QAndroidJniObject Security::getAlgorithms(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getAlgorithms",
			"(Ljava/lang/String;)Ljava/util/Set;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Security::getProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Security::getProperty(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Security::getProvider(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProvider",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			arg0
		);
	}
	QAndroidJniObject Security::getProvider(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProvider",
			"(Ljava/lang/String;)Ljava/security/Provider;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Security::getProviders()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"()[Ljava/security/Provider;"
		).object<jarray>();
	}
	jarray Security::getProviders(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/lang/String;)[Ljava/security/Provider;",
			arg0
		).object<jarray>();
	}
	jarray Security::getProviders(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/lang/String;)[Ljava/security/Provider;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jarray Security::getProviders(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.Security",
			"getProviders",
			"(Ljava/util/Map;)[Ljava/security/Provider;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jint Security::insertProviderAt(__jni_impl::java::security::Provider arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.security.Security",
			"insertProviderAt",
			"(Ljava/security/Provider;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Security::removeProvider(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Security",
			"removeProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Security::removeProvider(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Security",
			"removeProvider",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Security::setProperty(jstring arg0, jstring arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Security",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Security::setProperty(const QString &arg0, const QString &arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.security.Security",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class Security : public __jni_impl::java::security::Security
	{
	public:
		Security(QAndroidJniObject obj) { __thiz = obj; }
		Security()
		{
			__constructor();
		}
	};
} // namespace java::security

