#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ImageTransformation.hpp"

namespace android::service::autofill
{
	// Fields
	JObject ImageTransformation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.ImageTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ImageTransformation::ImageTransformation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ImageTransformation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ImageTransformation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ImageTransformation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

