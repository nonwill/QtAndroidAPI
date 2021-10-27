#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::java::security
{
	class PKCS12Attribute : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jstring getName();
		jstring getValue();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "../util/regex/Pattern.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void PKCS12Attribute::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"([B)V",
			arg0
		);
	}
	void PKCS12Attribute::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void PKCS12Attribute::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.PKCS12Attribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jboolean PKCS12Attribute::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jbyteArray PKCS12Attribute::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring PKCS12Attribute::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PKCS12Attribute::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PKCS12Attribute::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PKCS12Attribute::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class PKCS12Attribute : public __jni_impl::java::security::PKCS12Attribute
	{
	public:
		PKCS12Attribute(QAndroidJniObject obj) { __thiz = obj; }
		PKCS12Attribute(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		PKCS12Attribute(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

