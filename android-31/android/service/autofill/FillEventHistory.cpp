#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./FillEventHistory.hpp"

namespace android::service::autofill
{
	// Fields
	__JniBaseClass FillEventHistory::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillEventHistory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	FillEventHistory::FillEventHistory(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint FillEventHistory::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::os::Bundle FillEventHistory::getClientState()
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	__JniBaseClass FillEventHistory::getEvents()
	{
		return callObjectMethod(
			"getEvents",
			"()Ljava/util/List;"
		);
	}
	jstring FillEventHistory::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillEventHistory::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

