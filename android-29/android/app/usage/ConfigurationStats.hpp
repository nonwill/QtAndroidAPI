#pragma once

#ifndef ANDROID_APP_USAGE_CONFIGURATIONSTATS
#define ANDROID_APP_USAGE_CONFIGURATIONSTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::usage
{
	class ConfigurationStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::app::usage::ConfigurationStats arg0);
		
		// Methods
		QAndroidJniObject getConfiguration();
		jlong getLastTimeActive();
		jlong getTotalTimeActive();
		jint getActivationCount();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getFirstTimeStamp();
		jlong getLastTimeStamp();
	};
} // namespace __jni_impl::android::app::usage

#include "../../content/res/Configuration.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	QAndroidJniObject ConfigurationStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.ConfigurationStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ConfigurationStats::__constructor(__jni_impl::android::app::usage::ConfigurationStats arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.ConfigurationStats",
			"(Landroid/app/usage/ConfigurationStats;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ConfigurationStats::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;");
	}
	jlong ConfigurationStats::getLastTimeActive()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeActive",
			"()J");
	}
	jlong ConfigurationStats::getTotalTimeActive()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeActive",
			"()J");
	}
	jint ConfigurationStats::getActivationCount()
	{
		return __thiz.callMethod<jint>(
			"getActivationCount",
			"()I");
	}
	jint ConfigurationStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ConfigurationStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong ConfigurationStats::getFirstTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getFirstTimeStamp",
			"()J");
	}
	jlong ConfigurationStats::getLastTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeStamp",
			"()J");
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class ConfigurationStats : public __jni_impl::android::app::usage::ConfigurationStats
	{
	public:
		ConfigurationStats(QAndroidJniObject obj) { __thiz = obj; }
		ConfigurationStats(__jni_impl::android::app::usage::ConfigurationStats arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_CONFIGURATIONSTATS

