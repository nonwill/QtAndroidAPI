#include "../os/Parcel.hpp"
#include "./NetworkRequest.hpp"

namespace android::net
{
	// Fields
	JObject NetworkRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NetworkRequest::NetworkRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint NetworkRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean NetworkRequest::hasCapability(jint arg0)
	{
		return callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	jboolean NetworkRequest::hasTransport(jint arg0)
	{
		return callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	jint NetworkRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring NetworkRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NetworkRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

