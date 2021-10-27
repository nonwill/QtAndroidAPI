#include "../os/Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/Proxy.hpp"
#include "../../java/net/Socket.hpp"
#include "../../java/net/URL.hpp"
#include "../../java/net/URLConnection.hpp"
#include "../../javax/net/SocketFactory.hpp"
#include "./Network.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject Network::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.Network",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Network::Network(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Network::fromNetworkHandle(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.Network",
			"fromNetworkHandle",
			"(J)Landroid/net/Network;",
			arg0
		);
	}
	void Network::bindSocket(java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Network::bindSocket(java::net::DatagramSocket arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/net/DatagramSocket;)V",
			arg0.__jniObject().object()
		);
	}
	void Network::bindSocket(java::net::Socket arg0)
	{
		__thiz.callMethod<void>(
			"bindSocket",
			"(Ljava/net/Socket;)V",
			arg0.__jniObject().object()
		);
	}
	jint Network::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Network::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray Network::getAllByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			arg0
		).object<jarray>();
	}
	jarray Network::getAllByName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAllByName",
			"(Ljava/lang/String;)[Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject Network::getByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			arg0
		);
	}
	QAndroidJniObject Network::getByName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getByName",
			"(Ljava/lang/String;)Ljava/net/InetAddress;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong Network::getNetworkHandle()
	{
		return __thiz.callMethod<jlong>(
			"getNetworkHandle",
			"()J"
		);
	}
	QAndroidJniObject Network::getSocketFactory()
	{
		return __thiz.callObjectMethod(
			"getSocketFactory",
			"()Ljavax/net/SocketFactory;"
		);
	}
	jint Network::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Network::openConnection(java::net::URL arg0)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;)Ljava/net/URLConnection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Network::openConnection(java::net::URL arg0, java::net::Proxy arg1)
	{
		return __thiz.callObjectMethod(
			"openConnection",
			"(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Network::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Network::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net
