#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./SSLEngineResult.hpp"
#include "./SSLEngineResult_HandshakeStatus.hpp"
#include "./SSLParameters.hpp"
#include "./SSLEngine.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	SSLEngine::SSLEngine(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void SSLEngine::beginHandshake()
	{
		callMethod<void>(
			"beginHandshake",
			"()V"
		);
	}
	void SSLEngine::closeInbound()
	{
		callMethod<void>(
			"closeInbound",
			"()V"
		);
	}
	void SSLEngine::closeOutbound()
	{
		callMethod<void>(
			"closeOutbound",
			"()V"
		);
	}
	JString SSLEngine::getApplicationProtocol()
	{
		return callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLEngine::getDelegatedTask()
	{
		return callObjectMethod(
			"getDelegatedTask",
			"()Ljava/lang/Runnable;"
		);
	}
	jboolean SSLEngine::getEnableSessionCreation()
	{
		return callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	JArray SSLEngine::getEnabledCipherSuites()
	{
		return callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLEngine::getEnabledProtocols()
	{
		return callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		);
	}
	JString SSLEngine::getHandshakeApplicationProtocol()
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		);
	}
	JObject SSLEngine::getHandshakeApplicationProtocolSelector()
	{
		return callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	JObject SSLEngine::getHandshakeSession()
	{
		return callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	javax::net::ssl::SSLEngineResult_HandshakeStatus SSLEngine::getHandshakeStatus()
	{
		return callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	jboolean SSLEngine::getNeedClientAuth()
	{
		return callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	JString SSLEngine::getPeerHost()
	{
		return callObjectMethod(
			"getPeerHost",
			"()Ljava/lang/String;"
		);
	}
	jint SSLEngine::getPeerPort()
	{
		return callMethod<jint>(
			"getPeerPort",
			"()I"
		);
	}
	javax::net::ssl::SSLParameters SSLEngine::getSSLParameters()
	{
		return callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	JObject SSLEngine::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	JArray SSLEngine::getSupportedCipherSuites()
	{
		return callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		);
	}
	JArray SSLEngine::getSupportedProtocols()
	{
		return callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		);
	}
	jboolean SSLEngine::getUseClientMode()
	{
		return callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLEngine::getWantClientAuth()
	{
		return callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	jboolean SSLEngine::isInboundDone()
	{
		return callMethod<jboolean>(
			"isInboundDone",
			"()Z"
		);
	}
	jboolean SSLEngine::isOutboundDone()
	{
		return callMethod<jboolean>(
			"isOutboundDone",
			"()Z"
		);
	}
	void SSLEngine::setEnableSessionCreation(jboolean arg0)
	{
		callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setEnabledCipherSuites(JArray arg0)
	{
		callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLEngine::setEnabledProtocols(JArray arg0)
	{
		callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void SSLEngine::setHandshakeApplicationProtocolSelector(JObject arg0)
	{
		callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	void SSLEngine::setNeedClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setSSLParameters(javax::net::ssl::SSLParameters arg0)
	{
		callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.object()
		);
	}
	void SSLEngine::setUseClientMode(jboolean arg0)
	{
		callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setWantClientAuth(jboolean arg0)
	{
		callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, JArray arg1)
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::unwrap(java::nio::ByteBuffer arg0, JArray arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2,
			arg3
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::wrap(JArray arg0, java::nio::ByteBuffer arg1)
	{
		return callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object(),
			arg1.object()
		);
	}
	javax::net::ssl::SSLEngineResult SSLEngine::wrap(JArray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3)
	{
		return callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.object<jarray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
} // namespace javax::net::ssl

