#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace __jni_impl::java::nio::file
{
	class ProviderNotFoundException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void ProviderNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderNotFoundException",
			"()V"
		);
	}
	void ProviderNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ProviderNotFoundException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class ProviderNotFoundException : public __jni_impl::java::nio::file::ProviderNotFoundException
	{
	public:
		ProviderNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		ProviderNotFoundException()
		{
			__constructor();
		}
		ProviderNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file

