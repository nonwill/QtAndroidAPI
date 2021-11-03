#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./NsdServiceInfo.hpp"

namespace android::net::nsd
{
	// Fields
	JObject NsdServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.nsd.NsdServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NsdServiceInfo::NsdServiceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NsdServiceInfo::NsdServiceInfo()
		: JObject(
			"android.net.nsd.NsdServiceInfo",
			"()V"
		) {}
	
	// Methods
	jint NsdServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject NsdServiceInfo::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Map;"
		);
	}
	java::net::InetAddress NsdServiceInfo::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/net/InetAddress;"
		);
	}
	jint NsdServiceInfo::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString NsdServiceInfo::getServiceName()
	{
		return callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		);
	}
	JString NsdServiceInfo::getServiceType()
	{
		return callObjectMethod(
			"getServiceType",
			"()Ljava/lang/String;"
		);
	}
	void NsdServiceInfo::removeAttribute(JString arg0)
	{
		callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NsdServiceInfo::setAttribute(JString arg0, JString arg1)
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void NsdServiceInfo::setHost(java::net::InetAddress arg0)
	{
		callMethod<void>(
			"setHost",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void NsdServiceInfo::setPort(jint arg0)
	{
		callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	void NsdServiceInfo::setServiceName(JString arg0)
	{
		callMethod<void>(
			"setServiceName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NsdServiceInfo::setServiceType(JString arg0)
	{
		callMethod<void>(
			"setServiceType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString NsdServiceInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NsdServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::nsd

