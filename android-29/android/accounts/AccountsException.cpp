#include "./AccountsException.hpp"

namespace android::accounts
{
	// Fields
	
	AccountsException::AccountsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccountsException::AccountsException()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"()V"
		);
	}
	AccountsException::AccountsException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AccountsException::AccountsException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	AccountsException::AccountsException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	AccountsException::AccountsException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	AccountsException::AccountsException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::accounts
