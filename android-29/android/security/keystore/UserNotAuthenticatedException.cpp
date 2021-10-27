#include "./UserNotAuthenticatedException.hpp"

namespace android::security::keystore
{
	// Fields
	
	UserNotAuthenticatedException::UserNotAuthenticatedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UserNotAuthenticatedException::UserNotAuthenticatedException()
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"()V"
		);
	}
	UserNotAuthenticatedException::UserNotAuthenticatedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UserNotAuthenticatedException::UserNotAuthenticatedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	UserNotAuthenticatedException::UserNotAuthenticatedException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	UserNotAuthenticatedException::UserNotAuthenticatedException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.security.keystore.UserNotAuthenticatedException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::security::keystore
