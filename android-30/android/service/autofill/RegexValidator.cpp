#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./RegexValidator.hpp"

namespace android::service::autofill
{
	// Fields
	JObject RegexValidator::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.RegexValidator",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	RegexValidator::RegexValidator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RegexValidator::RegexValidator(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1)
		: JObject(
			"android.service.autofill.RegexValidator",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint RegexValidator::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring RegexValidator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RegexValidator::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

