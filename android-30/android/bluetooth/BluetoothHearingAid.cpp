#include "../../JIntArray.hpp"
#include "./BluetoothDevice.hpp"
#include "../../JString.hpp"
#include "./BluetoothHearingAid.hpp"

namespace android::bluetooth
{
	// Fields
	JString BluetoothHearingAid::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHearingAid",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothHearingAid::BluetoothHearingAid(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject BluetoothHearingAid::getConnectedDevices()
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHearingAid::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothHearingAid::getDevicesMatchingConnectionStates(JIntArray arg0)
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
} // namespace android::bluetooth

