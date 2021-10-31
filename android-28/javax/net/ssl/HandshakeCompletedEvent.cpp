#include "./SSLSocket.hpp"
#include "./HandshakeCompletedEvent.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	HandshakeCompletedEvent::HandshakeCompletedEvent(QJniObject obj) : java::util::EventObject(obj) {}
	
	// Constructors
	HandshakeCompletedEvent::HandshakeCompletedEvent(javax::net::ssl::SSLSocket arg0, __JniBaseClass arg1)
		: java::util::EventObject(
			"javax.net.ssl.HandshakeCompletedEvent",
			"(Ljavax/net/ssl/SSLSocket;Ljavax/net/ssl/SSLSession;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jstring HandshakeCompletedEvent::getCipherSuite()
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray HandshakeCompletedEvent::getLocalCertificates()
	{
		return callObjectMethod(
			"getLocalCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	__JniBaseClass HandshakeCompletedEvent::getLocalPrincipal()
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	jarray HandshakeCompletedEvent::getPeerCertificateChain()
	{
		return callObjectMethod(
			"getPeerCertificateChain",
			"()[Ljavax/security/cert/X509Certificate;"
		).object<jarray>();
	}
	jarray HandshakeCompletedEvent::getPeerCertificates()
	{
		return callObjectMethod(
			"getPeerCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	__JniBaseClass HandshakeCompletedEvent::getPeerPrincipal()
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	__JniBaseClass HandshakeCompletedEvent::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	javax::net::ssl::SSLSocket HandshakeCompletedEvent::getSocket()
	{
		return callObjectMethod(
			"getSocket",
			"()Ljavax/net/ssl/SSLSocket;"
		);
	}
} // namespace javax::net::ssl

