#include "../bluetooth/BluetoothDevice.hpp"
#include "../os/Parcel.hpp"
#include "./CallAudioState.hpp"

namespace android::telecom
{
	// Fields
	QAndroidJniObject CallAudioState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallAudioState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint CallAudioState::ROUTE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_BLUETOOTH"
		);
	}
	jint CallAudioState::ROUTE_EARPIECE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_EARPIECE"
		);
	}
	jint CallAudioState::ROUTE_SPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_SPEAKER"
		);
	}
	jint CallAudioState::ROUTE_WIRED_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_HEADSET"
		);
	}
	jint CallAudioState::ROUTE_WIRED_OR_EARPIECE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_OR_EARPIECE"
		);
	}
	
	CallAudioState::CallAudioState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CallAudioState::CallAudioState(jboolean &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallAudioState",
			"(ZII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring CallAudioState::audioRouteToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.CallAudioState",
			"audioRouteToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint CallAudioState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CallAudioState::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CallAudioState::getActiveBluetoothDevice()
	{
		return __thiz.callObjectMethod(
			"getActiveBluetoothDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jint CallAudioState::getRoute()
	{
		return __thiz.callMethod<jint>(
			"getRoute",
			"()I"
		);
	}
	QAndroidJniObject CallAudioState::getSupportedBluetoothDevices()
	{
		return __thiz.callObjectMethod(
			"getSupportedBluetoothDevices",
			"()Ljava/util/Collection;"
		);
	}
	jint CallAudioState::getSupportedRouteMask()
	{
		return __thiz.callMethod<jint>(
			"getSupportedRouteMask",
			"()I"
		);
	}
	jboolean CallAudioState::isMuted()
	{
		return __thiz.callMethod<jboolean>(
			"isMuted",
			"()Z"
		);
	}
	jstring CallAudioState::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CallAudioState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom
