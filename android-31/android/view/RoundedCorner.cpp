#include "../graphics/Point.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RoundedCorner.hpp"

namespace android::view
{
	// Fields
	JObject RoundedCorner::CREATOR()
	{
		return getStaticObjectField(
			"android.view.RoundedCorner",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RoundedCorner::POSITION_BOTTOM_LEFT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_BOTTOM_LEFT"
		);
	}
	jint RoundedCorner::POSITION_BOTTOM_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_BOTTOM_RIGHT"
		);
	}
	jint RoundedCorner::POSITION_TOP_LEFT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_TOP_LEFT"
		);
	}
	jint RoundedCorner::POSITION_TOP_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_TOP_RIGHT"
		);
	}
	
	// QAndroidJniObject forward
	RoundedCorner::RoundedCorner(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RoundedCorner::RoundedCorner(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.RoundedCorner",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint RoundedCorner::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RoundedCorner::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::Point RoundedCorner::getCenter()
	{
		return callObjectMethod(
			"getCenter",
			"()Landroid/graphics/Point;"
		);
	}
	jint RoundedCorner::getPosition()
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jint RoundedCorner::getRadius()
	{
		return callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	jint RoundedCorner::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString RoundedCorner::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RoundedCorner::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

