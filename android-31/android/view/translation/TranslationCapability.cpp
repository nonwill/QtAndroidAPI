#include "../../os/Parcel.hpp"
#include "./TranslationSpec.hpp"
#include "./TranslationCapability.hpp"

namespace android::view::translation
{
	// Fields
	__JniBaseClass TranslationCapability::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationCapability",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TranslationCapability::STATE_AVAILABLE_TO_DOWNLOAD()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_AVAILABLE_TO_DOWNLOAD"
		);
	}
	jint TranslationCapability::STATE_DOWNLOADING()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_DOWNLOADING"
		);
	}
	jint TranslationCapability::STATE_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_NOT_AVAILABLE"
		);
	}
	jint TranslationCapability::STATE_ON_DEVICE()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationCapability",
			"STATE_ON_DEVICE"
		);
	}
	
	// QAndroidJniObject forward
	TranslationCapability::TranslationCapability(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TranslationCapability::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::view::translation::TranslationSpec TranslationCapability::getSourceSpec()
	{
		return callObjectMethod(
			"getSourceSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	jint TranslationCapability::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint TranslationCapability::getSupportedTranslationFlags()
	{
		return callMethod<jint>(
			"getSupportedTranslationFlags",
			"()I"
		);
	}
	android::view::translation::TranslationSpec TranslationCapability::getTargetSpec()
	{
		return callObjectMethod(
			"getTargetSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	jboolean TranslationCapability::isUiTranslationEnabled()
	{
		return callMethod<jboolean>(
			"isUiTranslationEnabled",
			"()Z"
		);
	}
	jstring TranslationCapability::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TranslationCapability::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

