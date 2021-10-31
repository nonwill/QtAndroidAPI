#include "./Credentials.hpp"
#include "./LocalSocketAddress.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./LocalSocket.hpp"

namespace android::net
{
	// Fields
	jint LocalSocket::SOCKET_DGRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_DGRAM"
		);
	}
	jint LocalSocket::SOCKET_SEQPACKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_SEQPACKET"
		);
	}
	jint LocalSocket::SOCKET_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.LocalSocket",
			"SOCKET_STREAM"
		);
	}
	
	// QAndroidJniObject forward
	LocalSocket::LocalSocket(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LocalSocket::LocalSocket()
		: __JniBaseClass(
			"android.net.LocalSocket",
			"()V"
		) {}
	LocalSocket::LocalSocket(jint arg0)
		: __JniBaseClass(
			"android.net.LocalSocket",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void LocalSocket::bind(android::net::LocalSocketAddress arg0)
	{
		callMethod<void>(
			"bind",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.object()
		);
	}
	void LocalSocket::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void LocalSocket::connect(android::net::LocalSocketAddress arg0)
	{
		callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;)V",
			arg0.object()
		);
	}
	void LocalSocket::connect(android::net::LocalSocketAddress arg0, jint arg1)
	{
		callMethod<void>(
			"connect",
			"(Landroid/net/LocalSocketAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	jarray LocalSocket::getAncillaryFileDescriptors()
	{
		return callObjectMethod(
			"getAncillaryFileDescriptors",
			"()[Ljava/io/FileDescriptor;"
		).object<jarray>();
	}
	java::io::FileDescriptor LocalSocket::getFileDescriptor()
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	java::io::InputStream LocalSocket::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	android::net::LocalSocketAddress LocalSocket::getLocalSocketAddress()
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
	java::io::OutputStream LocalSocket::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	android::net::Credentials LocalSocket::getPeerCredentials()
	{
		return callObjectMethod(
			"getPeerCredentials",
			"()Landroid/net/Credentials;"
		);
	}
	jint LocalSocket::getReceiveBufferSize()
	{
		return callMethod<jint>(
			"getReceiveBufferSize",
			"()I"
		);
	}
	android::net::LocalSocketAddress LocalSocket::getRemoteSocketAddress()
	{
		return callObjectMethod(
			"getRemoteSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
	jint LocalSocket::getSendBufferSize()
	{
		return callMethod<jint>(
			"getSendBufferSize",
			"()I"
		);
	}
	jint LocalSocket::getSoTimeout()
	{
		return callMethod<jint>(
			"getSoTimeout",
			"()I"
		);
	}
	jboolean LocalSocket::isBound()
	{
		return callMethod<jboolean>(
			"isBound",
			"()Z"
		);
	}
	jboolean LocalSocket::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean LocalSocket::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jboolean LocalSocket::isInputShutdown()
	{
		return callMethod<jboolean>(
			"isInputShutdown",
			"()Z"
		);
	}
	jboolean LocalSocket::isOutputShutdown()
	{
		return callMethod<jboolean>(
			"isOutputShutdown",
			"()Z"
		);
	}
	void LocalSocket::setFileDescriptorsForSend(jarray arg0)
	{
		callMethod<void>(
			"setFileDescriptorsForSend",
			"([Ljava/io/FileDescriptor;)V",
			arg0
		);
	}
	void LocalSocket::setReceiveBufferSize(jint arg0)
	{
		callMethod<void>(
			"setReceiveBufferSize",
			"(I)V",
			arg0
		);
	}
	void LocalSocket::setSendBufferSize(jint arg0)
	{
		callMethod<void>(
			"setSendBufferSize",
			"(I)V",
			arg0
		);
	}
	void LocalSocket::setSoTimeout(jint arg0)
	{
		callMethod<void>(
			"setSoTimeout",
			"(I)V",
			arg0
		);
	}
	void LocalSocket::shutdownInput()
	{
		callMethod<void>(
			"shutdownInput",
			"()V"
		);
	}
	void LocalSocket::shutdownOutput()
	{
		callMethod<void>(
			"shutdownOutput",
			"()V"
		);
	}
	jstring LocalSocket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

