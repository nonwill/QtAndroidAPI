#pragma once

#include "./NetworkInfo_DetailedState.def.hpp"
#include "./NetworkInfo_State.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./NetworkInfo.def.hpp"

namespace android::net
{
	// Fields
	inline JObject NetworkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint NetworkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::NetworkInfo_DetailedState NetworkInfo::getDetailedState() const
	{
		return callObjectMethod(
			"getDetailedState",
			"()Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	inline JString NetworkInfo::getExtraInfo() const
	{
		return callObjectMethod(
			"getExtraInfo",
			"()Ljava/lang/String;"
		);
	}
	inline JString NetworkInfo::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::NetworkInfo_State NetworkInfo::getState() const
	{
		return callObjectMethod(
			"getState",
			"()Landroid/net/NetworkInfo$State;"
		);
	}
	inline jint NetworkInfo::getSubtype() const
	{
		return callMethod<jint>(
			"getSubtype",
			"()I"
		);
	}
	inline JString NetworkInfo::getSubtypeName() const
	{
		return callObjectMethod(
			"getSubtypeName",
			"()Ljava/lang/String;"
		);
	}
	inline jint NetworkInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString NetworkInfo::getTypeName() const
	{
		return callObjectMethod(
			"getTypeName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean NetworkInfo::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	inline jboolean NetworkInfo::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline jboolean NetworkInfo::isConnectedOrConnecting() const
	{
		return callMethod<jboolean>(
			"isConnectedOrConnecting",
			"()Z"
		);
	}
	inline jboolean NetworkInfo::isFailover() const
	{
		return callMethod<jboolean>(
			"isFailover",
			"()Z"
		);
	}
	inline jboolean NetworkInfo::isRoaming() const
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	inline JString NetworkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

