#include "../../os/Parcel.hpp"
#include "./WpsInfo.hpp"

namespace android::net::wifi
{
	// Fields
	jstring WpsInfo::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass WpsInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.WpsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WpsInfo::DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"DISPLAY"
		);
	}
	jint WpsInfo::INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"INVALID"
		);
	}
	jint WpsInfo::KEYPAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"KEYPAD"
		);
	}
	jint WpsInfo::LABEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"LABEL"
		);
	}
	jint WpsInfo::PBC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"PBC"
		);
	}
	jstring WpsInfo::pin()
	{
		return getObjectField(
			"pin",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WpsInfo::setup()
	{
		return getField<jint>(
			"setup"
		);
	}
	
	// QAndroidJniObject forward
	WpsInfo::WpsInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WpsInfo::WpsInfo()
		: __JniBaseClass(
			"android.net.wifi.WpsInfo",
			"()V"
		) {}
	WpsInfo::WpsInfo(android::net::wifi::WpsInfo &arg0)
		: __JniBaseClass(
			"android.net.wifi.WpsInfo",
			"(Landroid/net/wifi/WpsInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WpsInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring WpsInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WpsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

