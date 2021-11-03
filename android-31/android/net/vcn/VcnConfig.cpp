#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "./VcnConfig.hpp"

namespace android::net::vcn
{
	// Fields
	JObject VcnConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.vcn.VcnConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VcnConfig::VcnConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint VcnConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VcnConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject VcnConfig::getGatewayConnectionConfigs()
	{
		return callObjectMethod(
			"getGatewayConnectionConfigs",
			"()Ljava/util/Set;"
		);
	}
	jint VcnConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void VcnConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::vcn

