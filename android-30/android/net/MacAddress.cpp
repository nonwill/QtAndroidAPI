#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/Inet6Address.hpp"
#include "./MacAddress.hpp"

namespace android::net
{
	// Fields
	android::net::MacAddress MacAddress::BROADCAST_ADDRESS()
	{
		return getStaticObjectField(
			"android.net.MacAddress",
			"BROADCAST_ADDRESS",
			"Landroid/net/MacAddress;"
		);
	}
	JObject MacAddress::CREATOR()
	{
		return getStaticObjectField(
			"android.net.MacAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MacAddress::TYPE_BROADCAST()
	{
		return getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_BROADCAST"
		);
	}
	jint MacAddress::TYPE_MULTICAST()
	{
		return getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_MULTICAST"
		);
	}
	jint MacAddress::TYPE_UNICAST()
	{
		return getStaticField<jint>(
			"android.net.MacAddress",
			"TYPE_UNICAST"
		);
	}
	
	// QAndroidJniObject forward
	MacAddress::MacAddress(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::MacAddress MacAddress::fromBytes(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.net.MacAddress",
			"fromBytes",
			"([B)Landroid/net/MacAddress;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::MacAddress MacAddress::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.MacAddress",
			"fromString",
			"(Ljava/lang/String;)Landroid/net/MacAddress;",
			arg0.object<jstring>()
		);
	}
	jint MacAddress::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MacAddress::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MacAddress::getAddressType()
	{
		return callMethod<jint>(
			"getAddressType",
			"()I"
		);
	}
	java::net::Inet6Address MacAddress::getLinkLocalIpv6FromEui48Mac()
	{
		return callObjectMethod(
			"getLinkLocalIpv6FromEui48Mac",
			"()Ljava/net/Inet6Address;"
		);
	}
	jint MacAddress::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MacAddress::isLocallyAssigned()
	{
		return callMethod<jboolean>(
			"isLocallyAssigned",
			"()Z"
		);
	}
	jboolean MacAddress::matches(android::net::MacAddress arg0, android::net::MacAddress arg1)
	{
		return callMethod<jboolean>(
			"matches",
			"(Landroid/net/MacAddress;Landroid/net/MacAddress;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	JByteArray MacAddress::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JString MacAddress::toOuiString()
	{
		return callObjectMethod(
			"toOuiString",
			"()Ljava/lang/String;"
		);
	}
	JString MacAddress::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MacAddress::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

