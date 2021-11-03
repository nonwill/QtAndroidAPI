#include "./BluetoothDevice.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./BluetoothSocket.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothSocket::TYPE_L2CAP()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_L2CAP"
		);
	}
	jint BluetoothSocket::TYPE_RFCOMM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_RFCOMM"
		);
	}
	jint BluetoothSocket::TYPE_SCO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothSocket",
			"TYPE_SCO"
		);
	}
	
	// QJniObject forward
	BluetoothSocket::BluetoothSocket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothSocket::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void BluetoothSocket::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jint BluetoothSocket::getConnectionType()
	{
		return callMethod<jint>(
			"getConnectionType",
			"()I"
		);
	}
	java::io::InputStream BluetoothSocket::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint BluetoothSocket::getMaxReceivePacketSize()
	{
		return callMethod<jint>(
			"getMaxReceivePacketSize",
			"()I"
		);
	}
	jint BluetoothSocket::getMaxTransmitPacketSize()
	{
		return callMethod<jint>(
			"getMaxTransmitPacketSize",
			"()I"
		);
	}
	java::io::OutputStream BluetoothSocket::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	android::bluetooth::BluetoothDevice BluetoothSocket::getRemoteDevice()
	{
		return callObjectMethod(
			"getRemoteDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jboolean BluetoothSocket::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
} // namespace android::bluetooth

