#pragma once

#ifndef ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO
#define ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ApplicationErrorReport_BatteryInfo : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject checkinDetails();
		jlong durationMicros();
		QAndroidJniObject usageDetails();
		jint usagePercent();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ApplicationErrorReport_BatteryInfo::checkinDetails()
	{
		return __thiz.getObjectField(
			"checkinDetails",
			"Ljava/lang/String;");
	}
	jlong ApplicationErrorReport_BatteryInfo::durationMicros()
	{
		return __thiz.getField<jlong>(
			"durationMicros");
	}
	QAndroidJniObject ApplicationErrorReport_BatteryInfo::usageDetails()
	{
		return __thiz.getObjectField(
			"usageDetails",
			"Ljava/lang/String;");
	}
	jint ApplicationErrorReport_BatteryInfo::usagePercent()
	{
		return __thiz.getField<jint>(
			"usagePercent");
	}
	
	// Constructors
	void ApplicationErrorReport_BatteryInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"()V");
	}
	void ApplicationErrorReport_BatteryInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void ApplicationErrorReport_BatteryInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ApplicationErrorReport_BatteryInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ApplicationErrorReport_BatteryInfo : public __jni_impl::android::app::ApplicationErrorReport_BatteryInfo
	{
	public:
		ApplicationErrorReport_BatteryInfo(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationErrorReport_BatteryInfo()
		{
			__constructor();
		}
		ApplicationErrorReport_BatteryInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_APPLICATIONERRORREPORT_BATTERYINFO

