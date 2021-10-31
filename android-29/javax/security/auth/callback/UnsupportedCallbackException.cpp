#include "./UnsupportedCallbackException.hpp"

namespace javax::security::auth::callback
{
	// Fields
	
	// QJniObject forward
	UnsupportedCallbackException::UnsupportedCallbackException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	UnsupportedCallbackException::UnsupportedCallbackException(__JniBaseClass arg0)
		: java::lang::Exception(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;)V",
			arg0.object()
		) {}
	UnsupportedCallbackException::UnsupportedCallbackException(__JniBaseClass arg0, jstring arg1)
		: java::lang::Exception(
			"javax.security.auth.callback.UnsupportedCallbackException",
			"(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	__JniBaseClass UnsupportedCallbackException::getCallback()
	{
		return callObjectMethod(
			"getCallback",
			"()Ljavax/security/auth/callback/Callback;"
		);
	}
} // namespace javax::security::auth::callback

