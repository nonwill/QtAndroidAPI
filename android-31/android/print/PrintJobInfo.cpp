#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "./PrintAttributes.hpp"
#include "./PrintJobId.hpp"
#include "./PrinterId.hpp"
#include "../../JString.hpp"
#include "./PrintJobInfo.hpp"

namespace android::print
{
	// Fields
	JObject PrintJobInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintJobInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintJobInfo::STATE_BLOCKED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_BLOCKED"
		);
	}
	jint PrintJobInfo::STATE_CANCELED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CANCELED"
		);
	}
	jint PrintJobInfo::STATE_COMPLETED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_COMPLETED"
		);
	}
	jint PrintJobInfo::STATE_CREATED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_CREATED"
		);
	}
	jint PrintJobInfo::STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_FAILED"
		);
	}
	jint PrintJobInfo::STATE_QUEUED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_QUEUED"
		);
	}
	jint PrintJobInfo::STATE_STARTED()
	{
		return getStaticField<jint>(
			"android.print.PrintJobInfo",
			"STATE_STARTED"
		);
	}
	
	// QJniObject forward
	PrintJobInfo::PrintJobInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PrintJobInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PrintJobInfo::getAdvancedIntOption(JString arg0)
	{
		return callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JString PrintJobInfo::getAdvancedStringOption(JString arg0)
	{
		return callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::print::PrintAttributes PrintJobInfo::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrintJobInfo::getCopies()
	{
		return callMethod<jint>(
			"getCopies",
			"()I"
		);
	}
	jlong PrintJobInfo::getCreationTime()
	{
		return callMethod<jlong>(
			"getCreationTime",
			"()J"
		);
	}
	android::print::PrintJobId PrintJobInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	JString PrintJobInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		);
	}
	JArray PrintJobInfo::getPages()
	{
		return callObjectMethod(
			"getPages",
			"()[Landroid/print/PageRange;"
		);
	}
	android::print::PrinterId PrintJobInfo::getPrinterId()
	{
		return callObjectMethod(
			"getPrinterId",
			"()Landroid/print/PrinterId;"
		);
	}
	jint PrintJobInfo::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean PrintJobInfo::hasAdvancedOption(JString arg0)
	{
		return callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JString PrintJobInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PrintJobInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

