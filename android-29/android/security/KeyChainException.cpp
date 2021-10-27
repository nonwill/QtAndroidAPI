#include "./KeyChainException.hpp"

namespace android::security
{
	// Fields
	
	KeyChainException::KeyChainException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyChainException::KeyChainException()
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"()V"
		);
	}
	KeyChainException::KeyChainException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyChainException::KeyChainException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	KeyChainException::KeyChainException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	KeyChainException::KeyChainException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	KeyChainException::KeyChainException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::security
