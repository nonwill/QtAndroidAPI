#pragma once

#ifndef ANDROID_NET_WIFI_RTT_RESPONDERLOCATION
#define ANDROID_NET_WIFI_RTT_RESPONDERLOCATION

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class Address;
}
namespace __jni_impl::android::location
{
	class Location;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}

namespace __jni_impl::android::net::wifi::rtt
{
	class ResponderLocation : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALTITUDE_FLOORS();
		static jint ALTITUDE_METERS();
		static jint ALTITUDE_UNDEFINED();
		static QAndroidJniObject CREATOR();
		static jint DATUM_NAD83_MLLW();
		static jint DATUM_NAD83_NAV88();
		static jint DATUM_UNDEFINED();
		static jint DATUM_WGS84();
		static jint LCI_VERSION_1();
		static jint LOCATION_FIXED();
		static jint LOCATION_MOVEMENT_UNKNOWN();
		static jint LOCATION_RESERVED();
		static jint LOCATION_VARIABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jdouble getAltitude();
		jint getAltitudeType();
		jdouble getAltitudeUncertainty();
		QAndroidJniObject getColocatedBssids();
		jint getDatum();
		jint getExpectedToMove();
		jdouble getFloorNumber();
		jdouble getHeightAboveFloorMeters();
		jdouble getHeightAboveFloorUncertaintyMeters();
		jdouble getLatitude();
		jdouble getLatitudeUncertainty();
		jint getLciVersion();
		jdouble getLongitude();
		jdouble getLongitudeUncertainty();
		jstring getMapImageMimeType();
		QAndroidJniObject getMapImageUri();
		jboolean getRegisteredLocationAgreementIndication();
		jint hashCode();
		jboolean isLciSubelementValid();
		jboolean isZaxisSubelementValid();
		QAndroidJniObject toCivicLocationAddress();
		QAndroidJniObject toCivicLocationSparseArray();
		QAndroidJniObject toLocation();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::rtt

#include "../../../location/Address.hpp"
#include "../../../location/Location.hpp"
#include "../../Uri.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../util/SparseArray.hpp"

namespace __jni_impl::android::net::wifi::rtt
{
	// Fields
	jint ResponderLocation::ALTITUDE_FLOORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_FLOORS"
		);
	}
	jint ResponderLocation::ALTITUDE_METERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_METERS"
		);
	}
	jint ResponderLocation::ALTITUDE_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_UNDEFINED"
		);
	}
	QAndroidJniObject ResponderLocation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.ResponderLocation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ResponderLocation::DATUM_NAD83_MLLW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_NAD83_MLLW"
		);
	}
	jint ResponderLocation::DATUM_NAD83_NAV88()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_NAD83_NAV88"
		);
	}
	jint ResponderLocation::DATUM_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_UNDEFINED"
		);
	}
	jint ResponderLocation::DATUM_WGS84()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_WGS84"
		);
	}
	jint ResponderLocation::LCI_VERSION_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LCI_VERSION_1"
		);
	}
	jint ResponderLocation::LOCATION_FIXED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_FIXED"
		);
	}
	jint ResponderLocation::LOCATION_MOVEMENT_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_MOVEMENT_UNKNOWN"
		);
	}
	jint ResponderLocation::LOCATION_RESERVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_RESERVED"
		);
	}
	jint ResponderLocation::LOCATION_VARIABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_VARIABLE"
		);
	}
	
	// Constructors
	void ResponderLocation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.rtt.ResponderLocation",
			"(V)V");
	}
	
	// Methods
	jint ResponderLocation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ResponderLocation::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jdouble ResponderLocation::getAltitude()
	{
		return __thiz.callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	jint ResponderLocation::getAltitudeType()
	{
		return __thiz.callMethod<jint>(
			"getAltitudeType",
			"()I"
		);
	}
	jdouble ResponderLocation::getAltitudeUncertainty()
	{
		return __thiz.callMethod<jdouble>(
			"getAltitudeUncertainty",
			"()D"
		);
	}
	QAndroidJniObject ResponderLocation::getColocatedBssids()
	{
		return __thiz.callObjectMethod(
			"getColocatedBssids",
			"()Ljava/util/List;"
		);
	}
	jint ResponderLocation::getDatum()
	{
		return __thiz.callMethod<jint>(
			"getDatum",
			"()I"
		);
	}
	jint ResponderLocation::getExpectedToMove()
	{
		return __thiz.callMethod<jint>(
			"getExpectedToMove",
			"()I"
		);
	}
	jdouble ResponderLocation::getFloorNumber()
	{
		return __thiz.callMethod<jdouble>(
			"getFloorNumber",
			"()D"
		);
	}
	jdouble ResponderLocation::getHeightAboveFloorMeters()
	{
		return __thiz.callMethod<jdouble>(
			"getHeightAboveFloorMeters",
			"()D"
		);
	}
	jdouble ResponderLocation::getHeightAboveFloorUncertaintyMeters()
	{
		return __thiz.callMethod<jdouble>(
			"getHeightAboveFloorUncertaintyMeters",
			"()D"
		);
	}
	jdouble ResponderLocation::getLatitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	jdouble ResponderLocation::getLatitudeUncertainty()
	{
		return __thiz.callMethod<jdouble>(
			"getLatitudeUncertainty",
			"()D"
		);
	}
	jint ResponderLocation::getLciVersion()
	{
		return __thiz.callMethod<jint>(
			"getLciVersion",
			"()I"
		);
	}
	jdouble ResponderLocation::getLongitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jdouble ResponderLocation::getLongitudeUncertainty()
	{
		return __thiz.callMethod<jdouble>(
			"getLongitudeUncertainty",
			"()D"
		);
	}
	jstring ResponderLocation::getMapImageMimeType()
	{
		return __thiz.callObjectMethod(
			"getMapImageMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ResponderLocation::getMapImageUri()
	{
		return __thiz.callObjectMethod(
			"getMapImageUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean ResponderLocation::getRegisteredLocationAgreementIndication()
	{
		return __thiz.callMethod<jboolean>(
			"getRegisteredLocationAgreementIndication",
			"()Z"
		);
	}
	jint ResponderLocation::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ResponderLocation::isLciSubelementValid()
	{
		return __thiz.callMethod<jboolean>(
			"isLciSubelementValid",
			"()Z"
		);
	}
	jboolean ResponderLocation::isZaxisSubelementValid()
	{
		return __thiz.callMethod<jboolean>(
			"isZaxisSubelementValid",
			"()Z"
		);
	}
	QAndroidJniObject ResponderLocation::toCivicLocationAddress()
	{
		return __thiz.callObjectMethod(
			"toCivicLocationAddress",
			"()Landroid/location/Address;"
		);
	}
	QAndroidJniObject ResponderLocation::toCivicLocationSparseArray()
	{
		return __thiz.callObjectMethod(
			"toCivicLocationSparseArray",
			"()Landroid/util/SparseArray;"
		);
	}
	QAndroidJniObject ResponderLocation::toLocation()
	{
		return __thiz.callObjectMethod(
			"toLocation",
			"()Landroid/location/Location;"
		);
	}
	void ResponderLocation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::rtt

namespace android::net::wifi::rtt
{
	class ResponderLocation : public __jni_impl::android::net::wifi::rtt::ResponderLocation
	{
	public:
		ResponderLocation(QAndroidJniObject obj) { __thiz = obj; }
		ResponderLocation()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::rtt

#endif // ANDROID_NET_WIFI_RTT_RESPONDERLOCATION

