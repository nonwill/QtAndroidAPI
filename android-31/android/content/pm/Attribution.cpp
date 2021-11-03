#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./Attribution.hpp"

namespace android::content::pm
{
	// Fields
	JObject Attribution::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.Attribution",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Attribution::Attribution(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Attribution::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Attribution::getLabel()
	{
		return callMethod<jint>(
			"getLabel",
			"()I"
		);
	}
	JString Attribution::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	void Attribution::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

