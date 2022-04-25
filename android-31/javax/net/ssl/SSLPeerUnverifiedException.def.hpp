#pragma once

#include "./SSLException.def.hpp"

class JString;

namespace javax::net::ssl
{
	class SSLPeerUnverifiedException : public javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SSLPeerUnverifiedException(const char *className, const char *sig, Ts...agv) : javax::net::ssl::SSLException(className, sig, std::forward<Ts>(agv)...) {}
		SSLPeerUnverifiedException(QAndroidJniObject obj) : javax::net::ssl::SSLException(obj) {}
		
		// Constructors
		SSLPeerUnverifiedException(JString arg0);
		
		// Methods
	};
} // namespace javax::net::ssl
