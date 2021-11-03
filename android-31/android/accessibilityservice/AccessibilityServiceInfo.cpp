#include "../content/pm/PackageManager.hpp"
#include "../content/pm/ResolveInfo.hpp"
#include "../os/Parcel.hpp"
#include "./AccessibilityServiceInfo.hpp"

namespace android::accessibilityservice
{
	// Fields
	jint AccessibilityServiceInfo::CAPABILITY_CAN_CONTROL_MAGNIFICATION()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_CONTROL_MAGNIFICATION"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_PERFORM_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_PERFORM_GESTURES"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_ENHANCED_WEB_ACCESSIBILITY"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_FILTER_KEY_EVENTS"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_FINGERPRINT_GESTURES"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_REQUEST_TOUCH_EXPLORATION"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_RETRIEVE_WINDOW_CONTENT"
		);
	}
	jint AccessibilityServiceInfo::CAPABILITY_CAN_TAKE_SCREENSHOT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CAPABILITY_CAN_TAKE_SCREENSHOT"
		);
	}
	JObject AccessibilityServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AccessibilityServiceInfo::DEFAULT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"DEFAULT"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_ALL_MASK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_ALL_MASK"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_AUDIBLE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_AUDIBLE"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_BRAILLE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_BRAILLE"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_GENERIC()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_GENERIC"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_HAPTIC()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_HAPTIC"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_SPOKEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_SPOKEN"
		);
	}
	jint AccessibilityServiceInfo::FEEDBACK_VISUAL()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FEEDBACK_VISUAL"
		);
	}
	jint AccessibilityServiceInfo::FLAG_ENABLE_ACCESSIBILITY_VOLUME()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_ENABLE_ACCESSIBILITY_VOLUME"
		);
	}
	jint AccessibilityServiceInfo::FLAG_INCLUDE_NOT_IMPORTANT_VIEWS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_INCLUDE_NOT_IMPORTANT_VIEWS"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REPORT_VIEW_IDS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REPORT_VIEW_IDS"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_2_FINGER_PASSTHROUGH()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_2_FINGER_PASSTHROUGH"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_ACCESSIBILITY_BUTTON()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_ACCESSIBILITY_BUTTON"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_ENHANCED_WEB_ACCESSIBILITY"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_FILTER_KEY_EVENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_FILTER_KEY_EVENTS"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_FINGERPRINT_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_FINGERPRINT_GESTURES"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_MULTI_FINGER_GESTURES()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_MULTI_FINGER_GESTURES"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_SHORTCUT_WARNING_DIALOG_SPOKEN_FEEDBACK"
		);
	}
	jint AccessibilityServiceInfo::FLAG_REQUEST_TOUCH_EXPLORATION_MODE()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_REQUEST_TOUCH_EXPLORATION_MODE"
		);
	}
	jint AccessibilityServiceInfo::FLAG_RETRIEVE_INTERACTIVE_WINDOWS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_RETRIEVE_INTERACTIVE_WINDOWS"
		);
	}
	jint AccessibilityServiceInfo::FLAG_SEND_MOTION_EVENTS()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_SEND_MOTION_EVENTS"
		);
	}
	jint AccessibilityServiceInfo::FLAG_SERVICE_HANDLES_DOUBLE_TAP()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"FLAG_SERVICE_HANDLES_DOUBLE_TAP"
		);
	}
	jint AccessibilityServiceInfo::eventTypes()
	{
		return getField<jint>(
			"eventTypes"
		);
	}
	jint AccessibilityServiceInfo::feedbackType()
	{
		return getField<jint>(
			"feedbackType"
		);
	}
	jint AccessibilityServiceInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jlong AccessibilityServiceInfo::notificationTimeout()
	{
		return getField<jlong>(
			"notificationTimeout"
		);
	}
	jarray AccessibilityServiceInfo::packageNames()
	{
		return getObjectField(
			"packageNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	
	// QJniObject forward
	AccessibilityServiceInfo::AccessibilityServiceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessibilityServiceInfo::AccessibilityServiceInfo()
		: JObject(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"()V"
		) {}
	
	// Methods
	jstring AccessibilityServiceInfo::capabilityToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"capabilityToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AccessibilityServiceInfo::feedbackTypeToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"feedbackTypeToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AccessibilityServiceInfo::flagToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityServiceInfo",
			"flagToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AccessibilityServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AccessibilityServiceInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean AccessibilityServiceInfo::getCanRetrieveWindowContent()
	{
		return callMethod<jboolean>(
			"getCanRetrieveWindowContent",
			"()Z"
		);
	}
	jint AccessibilityServiceInfo::getCapabilities()
	{
		return callMethod<jint>(
			"getCapabilities",
			"()I"
		);
	}
	jstring AccessibilityServiceInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityServiceInfo::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityServiceInfo::getInteractiveUiTimeoutMillis()
	{
		return callMethod<jint>(
			"getInteractiveUiTimeoutMillis",
			"()I"
		);
	}
	jint AccessibilityServiceInfo::getNonInteractiveUiTimeoutMillis()
	{
		return callMethod<jint>(
			"getNonInteractiveUiTimeoutMillis",
			"()I"
		);
	}
	android::content::pm::ResolveInfo AccessibilityServiceInfo::getResolveInfo()
	{
		return callObjectMethod(
			"getResolveInfo",
			"()Landroid/content/pm/ResolveInfo;"
		);
	}
	jstring AccessibilityServiceInfo::getSettingsActivityName()
	{
		return callObjectMethod(
			"getSettingsActivityName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityServiceInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AccessibilityServiceInfo::isAccessibilityTool()
	{
		return callMethod<jboolean>(
			"isAccessibilityTool",
			"()Z"
		);
	}
	jstring AccessibilityServiceInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring AccessibilityServiceInfo::loadSummary(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadSummary",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	void AccessibilityServiceInfo::setInteractiveUiTimeoutMillis(jint arg0)
	{
		callMethod<void>(
			"setInteractiveUiTimeoutMillis",
			"(I)V",
			arg0
		);
	}
	void AccessibilityServiceInfo::setNonInteractiveUiTimeoutMillis(jint arg0)
	{
		callMethod<void>(
			"setNonInteractiveUiTimeoutMillis",
			"(I)V",
			arg0
		);
	}
	jstring AccessibilityServiceInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AccessibilityServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accessibilityservice

