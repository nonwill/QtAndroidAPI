#include "../../../os/Bundle.hpp"
#include "../../../os/Parcel.hpp"
#include "./Characteristics.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject Characteristics::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Characteristics::Characteristics(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Characteristics::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Characteristics::getMaxMatchFilterLength()
	{
		return callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceNameLength()
	{
		return callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	jint Characteristics::getMaxServiceSpecificInfoLength()
	{
		return callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	void Characteristics::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

