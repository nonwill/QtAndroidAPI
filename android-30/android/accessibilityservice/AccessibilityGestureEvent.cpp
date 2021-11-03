#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./AccessibilityGestureEvent.hpp"

namespace android::accessibilityservice
{
	// Fields
	JObject AccessibilityGestureEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityGestureEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AccessibilityGestureEvent::AccessibilityGestureEvent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AccessibilityGestureEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AccessibilityGestureEvent::getDisplayId()
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint AccessibilityGestureEvent::getGestureId()
	{
		return callMethod<jint>(
			"getGestureId",
			"()I"
		);
	}
	JString AccessibilityGestureEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AccessibilityGestureEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accessibilityservice

