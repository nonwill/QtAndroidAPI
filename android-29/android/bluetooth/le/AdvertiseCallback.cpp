#include "./AdvertiseSettings.hpp"
#include "./AdvertiseCallback.hpp"

namespace android::bluetooth::le
{
	// Fields
	jint AdvertiseCallback::ADVERTISE_FAILED_ALREADY_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_ALREADY_STARTED"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_DATA_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_DATA_TOO_LARGE"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_FEATURE_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_INTERNAL_ERROR"
		);
	}
	jint AdvertiseCallback::ADVERTISE_FAILED_TOO_MANY_ADVERTISERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.le.AdvertiseCallback",
			"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS"
		);
	}
	
	AdvertiseCallback::AdvertiseCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdvertiseCallback::AdvertiseCallback()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.le.AdvertiseCallback",
			"()V"
		);
	}
	
	// Methods
	void AdvertiseCallback::onStartFailure(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStartFailure",
			"(I)V",
			arg0
		);
	}
	void AdvertiseCallback::onStartSuccess(android::bluetooth::le::AdvertiseSettings arg0)
	{
		__thiz.callMethod<void>(
			"onStartSuccess",
			"(Landroid/bluetooth/le/AdvertiseSettings;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::bluetooth::le
