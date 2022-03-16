#pragma once

#include "../../../JString.hpp"
#include "./SSLProtocolException.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline SSLProtocolException::SSLProtocolException(JString arg0)
		: javax::net::ssl::SSLException(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::net::ssl

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./SSLException.hpp"

