#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::spec
{
	class EncodedKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		
		// Methods
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void EncodedKeySpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EncodedKeySpec",
			"([B)V",
			arg0
		);
	}
	
	// Methods
	jstring EncodedKeySpec::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jstring EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class EncodedKeySpec : public __jni_impl::java::security::spec::EncodedKeySpec
	{
	public:
		EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		EncodedKeySpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::spec

