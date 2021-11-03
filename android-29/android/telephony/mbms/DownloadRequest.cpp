#include "../../../JByteArray.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DownloadRequest.hpp"

namespace android::telephony::mbms
{
	// Fields
	JObject DownloadRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.DownloadRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DownloadRequest::DownloadRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DownloadRequest::getMaxAppIntentSize()
	{
		return callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxAppIntentSize",
			"()I"
		);
	}
	jint DownloadRequest::getMaxDestinationUriSize()
	{
		return callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxDestinationUriSize",
			"()I"
		);
	}
	jint DownloadRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DownloadRequest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::Uri DownloadRequest::getDestinationUri()
	{
		return callObjectMethod(
			"getDestinationUri",
			"()Landroid/net/Uri;"
		);
	}
	JString DownloadRequest::getFileServiceId()
	{
		return callObjectMethod(
			"getFileServiceId",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri DownloadRequest::getSourceUri()
	{
		return callObjectMethod(
			"getSourceUri",
			"()Landroid/net/Uri;"
		);
	}
	jint DownloadRequest::getSubscriptionId()
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint DownloadRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JByteArray DownloadRequest::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	void DownloadRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

