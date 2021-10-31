#include "./SSLProtocolException.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	SSLProtocolException::SSLProtocolException(QAndroidJniObject obj) : javax::net::ssl::SSLException(obj) {}
	
	// Constructors
	SSLProtocolException::SSLProtocolException(jstring arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::net::ssl

