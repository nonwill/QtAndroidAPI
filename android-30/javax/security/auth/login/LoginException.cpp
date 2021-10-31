#include "./LoginException.hpp"

namespace javax::security::auth::login
{
	// Fields
	
	// QAndroidJniObject forward
	LoginException::LoginException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	LoginException::LoginException()
		: java::security::GeneralSecurityException(
			"javax.security.auth.login.LoginException",
			"()V"
		) {}
	LoginException::LoginException(jstring arg0)
		: java::security::GeneralSecurityException(
			"javax.security.auth.login.LoginException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::security::auth::login
