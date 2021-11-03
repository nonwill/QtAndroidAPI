#include "./pps/Credential.hpp"
#include "./pps/HomeSp.hpp"
#include "../../../os/Parcel.hpp"
#include "./PasspointConfiguration.hpp"

namespace android::net::wifi::hotspot2
{
	// Fields
	JObject PasspointConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PasspointConfiguration::PasspointConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasspointConfiguration::PasspointConfiguration()
		: JObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"()V"
		) {}
	PasspointConfiguration::PasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration &arg0)
		: JObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.object()
		) {}
	
	// Methods
	jint PasspointConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PasspointConfiguration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::net::wifi::hotspot2::pps::Credential PasspointConfiguration::getCredential()
	{
		return callObjectMethod(
			"getCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential;"
		);
	}
	android::net::wifi::hotspot2::pps::HomeSp PasspointConfiguration::getHomeSp()
	{
		return callObjectMethod(
			"getHomeSp",
			"()Landroid/net/wifi/hotspot2/pps/HomeSp;"
		);
	}
	jlong PasspointConfiguration::getSubscriptionExpirationTimeMillis()
	{
		return callMethod<jlong>(
			"getSubscriptionExpirationTimeMillis",
			"()J"
		);
	}
	jstring PasspointConfiguration::getUniqueId()
	{
		return callObjectMethod(
			"getUniqueId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PasspointConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PasspointConfiguration::isOsuProvisioned()
	{
		return callMethod<jboolean>(
			"isOsuProvisioned",
			"()Z"
		);
	}
	void PasspointConfiguration::setCredential(android::net::wifi::hotspot2::pps::Credential arg0)
	{
		callMethod<void>(
			"setCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.object()
		);
	}
	void PasspointConfiguration::setHomeSp(android::net::wifi::hotspot2::pps::HomeSp arg0)
	{
		callMethod<void>(
			"setHomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.object()
		);
	}
	jstring PasspointConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PasspointConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2

