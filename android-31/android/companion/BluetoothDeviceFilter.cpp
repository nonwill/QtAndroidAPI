#include "../os/Parcel.hpp"
#include "./BluetoothDeviceFilter.hpp"

namespace android::companion
{
	// Fields
	JObject BluetoothDeviceFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.BluetoothDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BluetoothDeviceFilter::BluetoothDeviceFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothDeviceFilter::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothDeviceFilter::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint BluetoothDeviceFilter::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring BluetoothDeviceFilter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void BluetoothDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

