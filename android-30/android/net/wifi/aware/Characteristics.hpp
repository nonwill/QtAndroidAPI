#pragma once

#include "../../../os/Parcel.def.hpp"
#include "./Characteristics.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject Characteristics::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_SK_128()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_SK_128"
		);
	}
	inline jint Characteristics::WIFI_AWARE_CIPHER_SUITE_NCS_SK_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.Characteristics",
			"WIFI_AWARE_CIPHER_SUITE_NCS_SK_256"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Characteristics::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Characteristics::getMaxMatchFilterLength() const
	{
		return callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	inline jint Characteristics::getMaxServiceNameLength() const
	{
		return callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	inline jint Characteristics::getMaxServiceSpecificInfoLength() const
	{
		return callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	inline jint Characteristics::getSupportedCipherSuites() const
	{
		return callMethod<jint>(
			"getSupportedCipherSuites",
			"()I"
		);
	}
	inline void Characteristics::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

