#pragma once

#include "./ColorSpace.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./ParcelableColorSpace.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject ParcelableColorSpace::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.ParcelableColorSpace",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ParcelableColorSpace::ParcelableColorSpace(android::graphics::ColorSpace arg0)
		: JObject(
			"android.graphics.ParcelableColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ParcelableColorSpace::isParcelable(android::graphics::ColorSpace arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.ParcelableColorSpace",
			"isParcelable",
			"(Landroid/graphics/ColorSpace;)Z",
			arg0.object()
		);
	}
	inline jint ParcelableColorSpace::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ParcelableColorSpace::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::ColorSpace ParcelableColorSpace::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	inline jint ParcelableColorSpace::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ParcelableColorSpace::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

// Base class headers

