#include "../../../java/nio/ByteBuffer.hpp"
#include "./SSLEngineResult.hpp"
#include "./SSLEngineResult_HandshakeStatus.hpp"
#include "./SSLParameters.hpp"
#include "./SSLEngine.hpp"

namespace javax::net::ssl
{
	// Fields
	
	SSLEngine::SSLEngine(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SSLEngine::beginHandshake()
	{
		__thiz.callMethod<void>(
			"beginHandshake",
			"()V"
		);
	}
	void SSLEngine::closeInbound()
	{
		__thiz.callMethod<void>(
			"closeInbound",
			"()V"
		);
	}
	void SSLEngine::closeOutbound()
	{
		__thiz.callMethod<void>(
			"closeOutbound",
			"()V"
		);
	}
	jstring SSLEngine::getApplicationProtocol()
	{
		return __thiz.callObjectMethod(
			"getApplicationProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SSLEngine::getDelegatedTask()
	{
		return __thiz.callObjectMethod(
			"getDelegatedTask",
			"()Ljava/lang/Runnable;"
		);
	}
	jboolean SSLEngine::getEnableSessionCreation()
	{
		return __thiz.callMethod<jboolean>(
			"getEnableSessionCreation",
			"()Z"
		);
	}
	jarray SSLEngine::getEnabledCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getEnabledCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLEngine::getEnabledProtocols()
	{
		return __thiz.callObjectMethod(
			"getEnabledProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring SSLEngine::getHandshakeApplicationProtocol()
	{
		return __thiz.callObjectMethod(
			"getHandshakeApplicationProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SSLEngine::getHandshakeApplicationProtocolSelector()
	{
		return __thiz.callObjectMethod(
			"getHandshakeApplicationProtocolSelector",
			"()Ljava/util/function/BiFunction;"
		);
	}
	QAndroidJniObject SSLEngine::getHandshakeSession()
	{
		return __thiz.callObjectMethod(
			"getHandshakeSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	QAndroidJniObject SSLEngine::getHandshakeStatus()
	{
		return __thiz.callObjectMethod(
			"getHandshakeStatus",
			"()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;"
		);
	}
	jboolean SSLEngine::getNeedClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getNeedClientAuth",
			"()Z"
		);
	}
	jstring SSLEngine::getPeerHost()
	{
		return __thiz.callObjectMethod(
			"getPeerHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SSLEngine::getPeerPort()
	{
		return __thiz.callMethod<jint>(
			"getPeerPort",
			"()I"
		);
	}
	QAndroidJniObject SSLEngine::getSSLParameters()
	{
		return __thiz.callObjectMethod(
			"getSSLParameters",
			"()Ljavax/net/ssl/SSLParameters;"
		);
	}
	QAndroidJniObject SSLEngine::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Ljavax/net/ssl/SSLSession;"
		);
	}
	jarray SSLEngine::getSupportedCipherSuites()
	{
		return __thiz.callObjectMethod(
			"getSupportedCipherSuites",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray SSLEngine::getSupportedProtocols()
	{
		return __thiz.callObjectMethod(
			"getSupportedProtocols",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean SSLEngine::getUseClientMode()
	{
		return __thiz.callMethod<jboolean>(
			"getUseClientMode",
			"()Z"
		);
	}
	jboolean SSLEngine::getWantClientAuth()
	{
		return __thiz.callMethod<jboolean>(
			"getWantClientAuth",
			"()Z"
		);
	}
	jboolean SSLEngine::isInboundDone()
	{
		return __thiz.callMethod<jboolean>(
			"isInboundDone",
			"()Z"
		);
	}
	jboolean SSLEngine::isOutboundDone()
	{
		return __thiz.callMethod<jboolean>(
			"isOutboundDone",
			"()Z"
		);
	}
	void SSLEngine::setEnableSessionCreation(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnableSessionCreation",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setEnabledCipherSuites(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledCipherSuites",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLEngine::setEnabledProtocols(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEnabledProtocols",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLEngine::setHandshakeApplicationProtocolSelector(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHandshakeApplicationProtocolSelector",
			"(Ljava/util/function/BiFunction;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLEngine::setNeedClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNeedClientAuth",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setSSLParameters(javax::net::ssl::SSLParameters arg0)
	{
		__thiz.callMethod<void>(
			"setSSLParameters",
			"(Ljavax/net/ssl/SSLParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void SSLEngine::setUseClientMode(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseClientMode",
			"(Z)V",
			arg0
		);
	}
	void SSLEngine::setWantClientAuth(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setWantClientAuth",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject SSLEngine::unwrap(java::nio::ByteBuffer arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SSLEngine::unwrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLEngine::unwrap(java::nio::ByteBuffer arg0, jarray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"(Ljava/nio/ByteBuffer;[Ljava/nio/ByteBuffer;II)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SSLEngine::wrap(jarray arg0, java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLEngine::wrap(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SSLEngine::wrap(jarray arg0, jint arg1, jint arg2, java::nio::ByteBuffer arg3)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"([Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace javax::net::ssl
