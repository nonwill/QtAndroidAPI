#include "../../content/ComponentName.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./ChooserTarget.hpp"

namespace android::service::chooser
{
	// Fields
	JObject ChooserTarget::CREATOR()
	{
		return getStaticObjectField(
			"android.service.chooser.ChooserTarget",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ChooserTarget::ChooserTarget(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ChooserTarget::ChooserTarget(JString arg0, android::graphics::drawable::Icon arg1, jfloat arg2, android::content::ComponentName arg3, android::os::Bundle arg4)
		: JObject(
			"android.service.chooser.ChooserTarget",
			"(Ljava/lang/CharSequence;Landroid/graphics/drawable/Icon;FLandroid/content/ComponentName;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		) {}
	
	// Methods
	jint ChooserTarget::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ComponentName ChooserTarget::getComponentName()
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	android::graphics::drawable::Icon ChooserTarget::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	android::os::Bundle ChooserTarget::getIntentExtras()
	{
		return callObjectMethod(
			"getIntentExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat ChooserTarget::getScore()
	{
		return callMethod<jfloat>(
			"getScore",
			"()F"
		);
	}
	JString ChooserTarget::getTitle()
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString ChooserTarget::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ChooserTarget::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::chooser

