#pragma once

#include "./UsageEvents_Event.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./UsageEvents.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject UsageEvents::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.UsageEvents",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UsageEvents::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UsageEvents::getNextEvent(android::app::usage::UsageEvents_Event arg0) const
	{
		return callMethod<jboolean>(
			"getNextEvent",
			"(Landroid/app/usage/UsageEvents$Event;)Z",
			arg0.object()
		);
	}
	inline jboolean UsageEvents::hasNextEvent() const
	{
		return callMethod<jboolean>(
			"hasNextEvent",
			"()Z"
		);
	}
	inline void UsageEvents::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
