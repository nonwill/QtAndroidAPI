#pragma once

#include "../../../JObject.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::net::ssl
{
	class SSLContextSpi;
}
namespace javax::net::ssl
{
	class SSLEngine;
}
namespace javax::net::ssl
{
	class SSLParameters;
}
namespace javax::net::ssl
{
	class SSLServerSocketFactory;
}
namespace javax::net::ssl
{
	class SSLSocketFactory;
}

namespace javax::net::ssl
{
	class SSLContext : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SSLContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::ssl::SSLContext getDefault();
		static javax::net::ssl::SSLContext getInstance(jstring arg0);
		static javax::net::ssl::SSLContext getInstance(jstring arg0, jstring arg1);
		static javax::net::ssl::SSLContext getInstance(jstring arg0, java::security::Provider arg1);
		static void setDefault(javax::net::ssl::SSLContext arg0);
		javax::net::ssl::SSLEngine createSSLEngine();
		javax::net::ssl::SSLEngine createSSLEngine(jstring arg0, jint arg1);
		JObject getClientSessionContext();
		javax::net::ssl::SSLParameters getDefaultSSLParameters();
		jstring getProtocol();
		java::security::Provider getProvider();
		JObject getServerSessionContext();
		javax::net::ssl::SSLServerSocketFactory getServerSocketFactory();
		javax::net::ssl::SSLSocketFactory getSocketFactory();
		javax::net::ssl::SSLParameters getSupportedSSLParameters();
		void init(jarray arg0, jarray arg1, java::security::SecureRandom arg2);
	};
} // namespace javax::net::ssl

