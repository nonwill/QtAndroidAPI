#include "./BluetoothDevice.hpp"
#include "./BluetoothLeAudio.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothLeAudio::ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothLeAudio",
			"ACTION_LE_AUDIO_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	BluetoothLeAudio::BluetoothLeAudio(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void BluetoothLeAudio::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject BluetoothLeAudio::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothLeAudio::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothLeAudio::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
} // namespace android::bluetooth

