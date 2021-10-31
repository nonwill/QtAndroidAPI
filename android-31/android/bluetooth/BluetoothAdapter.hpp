#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothServerSocket;
}
namespace android::bluetooth::le
{
	class BluetoothLeAdvertiser;
}
namespace android::bluetooth::le
{
	class BluetoothLeScanner;
}
namespace android::content
{
	class Context;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothAdapter : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jstring ACTION_DISCOVERY_FINISHED();
		static jstring ACTION_DISCOVERY_STARTED();
		static jstring ACTION_LOCAL_NAME_CHANGED();
		static jstring ACTION_REQUEST_DISCOVERABLE();
		static jstring ACTION_REQUEST_ENABLE();
		static jstring ACTION_SCAN_MODE_CHANGED();
		static jstring ACTION_STATE_CHANGED();
		static jint ERROR();
		static jstring EXTRA_CONNECTION_STATE();
		static jstring EXTRA_DISCOVERABLE_DURATION();
		static jstring EXTRA_LOCAL_NAME();
		static jstring EXTRA_PREVIOUS_CONNECTION_STATE();
		static jstring EXTRA_PREVIOUS_SCAN_MODE();
		static jstring EXTRA_PREVIOUS_STATE();
		static jstring EXTRA_SCAN_MODE();
		static jstring EXTRA_STATE();
		static jint SCAN_MODE_CONNECTABLE();
		static jint SCAN_MODE_CONNECTABLE_DISCOVERABLE();
		static jint SCAN_MODE_NONE();
		static jint STATE_CONNECTED();
		static jint STATE_CONNECTING();
		static jint STATE_DISCONNECTED();
		static jint STATE_DISCONNECTING();
		static jint STATE_OFF();
		static jint STATE_ON();
		static jint STATE_TURNING_OFF();
		static jint STATE_TURNING_ON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothAdapter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothAdapter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean checkBluetoothAddress(jstring arg0);
		static android::bluetooth::BluetoothAdapter getDefaultAdapter();
		jboolean cancelDiscovery();
		void closeProfileProxy(jint arg0, __JniBaseClass arg1);
		jboolean disable();
		jboolean enable();
		jstring getAddress();
		android::bluetooth::le::BluetoothLeAdvertiser getBluetoothLeAdvertiser();
		android::bluetooth::le::BluetoothLeScanner getBluetoothLeScanner();
		__JniBaseClass getBondedDevices();
		jint getLeMaximumAdvertisingDataLength();
		jstring getName();
		jint getProfileConnectionState(jint arg0);
		jboolean getProfileProxy(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		android::bluetooth::BluetoothDevice getRemoteDevice(jbyteArray arg0);
		android::bluetooth::BluetoothDevice getRemoteDevice(jstring arg0);
		jint getScanMode();
		jint getState();
		jboolean isDiscovering();
		jboolean isEnabled();
		jboolean isLe2MPhySupported();
		jboolean isLeCodedPhySupported();
		jboolean isLeExtendedAdvertisingSupported();
		jboolean isLePeriodicAdvertisingSupported();
		jboolean isMultipleAdvertisementSupported();
		jboolean isOffloadedFilteringSupported();
		jboolean isOffloadedScanBatchingSupported();
		android::bluetooth::BluetoothServerSocket listenUsingInsecureL2capChannel();
		android::bluetooth::BluetoothServerSocket listenUsingInsecureRfcommWithServiceRecord(jstring arg0, java::util::UUID arg1);
		android::bluetooth::BluetoothServerSocket listenUsingL2capChannel();
		android::bluetooth::BluetoothServerSocket listenUsingRfcommWithServiceRecord(jstring arg0, java::util::UUID arg1);
		jboolean setName(jstring arg0);
		jboolean startDiscovery();
		jboolean startLeScan(__JniBaseClass arg0);
		jboolean startLeScan(jarray arg0, __JniBaseClass arg1);
		void stopLeScan(__JniBaseClass arg0);
	};
} // namespace android::bluetooth

