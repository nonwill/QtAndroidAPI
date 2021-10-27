#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"


namespace __jni_impl::android::accounts
{
	class NetworkErrorException : public __jni_impl::android::accounts::AccountsException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::accounts


namespace __jni_impl::android::accounts
{
	// Fields
	
	// Constructors
	void NetworkErrorException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"()V"
		);
	}
	void NetworkErrorException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NetworkErrorException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NetworkErrorException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void NetworkErrorException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void NetworkErrorException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class NetworkErrorException : public __jni_impl::android::accounts::NetworkErrorException
	{
	public:
		NetworkErrorException(QAndroidJniObject obj) { __thiz = obj; }
		NetworkErrorException()
		{
			__constructor();
		}
		NetworkErrorException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NetworkErrorException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		NetworkErrorException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::accounts

