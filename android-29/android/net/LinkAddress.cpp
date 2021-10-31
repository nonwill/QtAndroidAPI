#include "../os/Parcel.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/InterfaceAddress.hpp"
#include "./LinkAddress.hpp"

namespace android::net
{
	// Fields
	__JniBaseClass LinkAddress::CREATOR()
	{
		return getStaticObjectField(
			"android.net.LinkAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	LinkAddress::LinkAddress(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint LinkAddress::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LinkAddress::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::net::InetAddress LinkAddress::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint LinkAddress::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint LinkAddress::getPrefixLength()
	{
		return callMethod<jint>(
			"getPrefixLength",
			"()I"
		);
	}
	jint LinkAddress::getScope()
	{
		return callMethod<jint>(
			"getScope",
			"()I"
		);
	}
	jint LinkAddress::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LinkAddress::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LinkAddress::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

