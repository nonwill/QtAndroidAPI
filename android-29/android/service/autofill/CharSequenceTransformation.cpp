#include "../../os/Parcel.hpp"
#include "./CharSequenceTransformation_Builder.hpp"
#include "./CharSequenceTransformation.hpp"

namespace android::service::autofill
{
	// Fields
	QAndroidJniObject CharSequenceTransformation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.CharSequenceTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CharSequenceTransformation::CharSequenceTransformation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint CharSequenceTransformation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring CharSequenceTransformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CharSequenceTransformation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill
