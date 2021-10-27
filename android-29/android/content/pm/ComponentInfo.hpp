#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PackageItemInfo.hpp"

namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ComponentInfo : public __jni_impl::android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		QAndroidJniObject applicationInfo();
		jint descriptionRes();
		jboolean directBootAware();
		jboolean enabled();
		jboolean exported();
		jstring processName();
		jstring splitName();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::ComponentInfo arg0);
		
		// Methods
		jint getBannerResource();
		jint getIconResource();
		jint getLogoResource();
		jboolean isEnabled();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "./ApplicationInfo.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ComponentInfo::applicationInfo()
	{
		return __thiz.getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	jint ComponentInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes"
		);
	}
	jboolean ComponentInfo::directBootAware()
	{
		return __thiz.getField<jboolean>(
			"directBootAware"
		);
	}
	jboolean ComponentInfo::enabled()
	{
		return __thiz.getField<jboolean>(
			"enabled"
		);
	}
	jboolean ComponentInfo::exported()
	{
		return __thiz.getField<jboolean>(
			"exported"
		);
	}
	jstring ComponentInfo::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentInfo::splitName()
	{
		return __thiz.getObjectField(
			"splitName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ComponentInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ComponentInfo",
			"()V"
		);
	}
	void ComponentInfo::__constructor(__jni_impl::android::content::pm::ComponentInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ComponentInfo",
			"(Landroid/content/pm/ComponentInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ComponentInfo::getBannerResource()
	{
		return __thiz.callMethod<jint>(
			"getBannerResource",
			"()I"
		);
	}
	jint ComponentInfo::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jint ComponentInfo::getLogoResource()
	{
		return __thiz.callMethod<jint>(
			"getLogoResource",
			"()I"
		);
	}
	jboolean ComponentInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void ComponentInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ComponentInfo : public __jni_impl::android::content::pm::ComponentInfo
	{
	public:
		ComponentInfo(QAndroidJniObject obj) { __thiz = obj; }
		ComponentInfo()
		{
			__constructor();
		}
		ComponentInfo(__jni_impl::android::content::pm::ComponentInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

