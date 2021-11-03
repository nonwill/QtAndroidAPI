#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth::le
{
	class ScanRecord;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::bluetooth::le
{
	class ScanResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DATA_COMPLETE();
		static jint DATA_TRUNCATED();
		static jint PERIODIC_INTERVAL_NOT_PRESENT();
		static jint PHY_UNUSED();
		static jint SID_NOT_PRESENT();
		static jint TX_POWER_NOT_PRESENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanResult(QJniObject obj);
		
		// Constructors
		ScanResult(android::bluetooth::BluetoothDevice arg0, android::bluetooth::le::ScanRecord arg1, jint arg2, jlong arg3);
		ScanResult(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, android::bluetooth::le::ScanRecord arg8, jlong arg9);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getAdvertisingSid();
		jint getDataStatus();
		android::bluetooth::BluetoothDevice getDevice();
		jint getPeriodicAdvertisingInterval();
		jint getPrimaryPhy();
		jint getRssi();
		android::bluetooth::le::ScanRecord getScanRecord();
		jint getSecondaryPhy();
		jlong getTimestampNanos();
		jint getTxPower();
		jint hashCode();
		jboolean isConnectable();
		jboolean isLegacy();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

