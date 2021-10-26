#pragma once

#ifndef ANDROID_DRM_PROCESSEDDATA
#define ANDROID_DRM_PROCESSEDDATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class ProcessedData : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getAccountId();
		jstring getSubscriptionId();
		jbyteArray getData();
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void ProcessedData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.ProcessedData",
			"(V)V");
	}
	
	// Methods
	jstring ProcessedData::getAccountId()
	{
		return __thiz.callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ProcessedData::getSubscriptionId()
	{
		return __thiz.callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ProcessedData::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class ProcessedData : public __jni_impl::android::drm::ProcessedData
	{
	public:
		ProcessedData(QAndroidJniObject obj) { __thiz = obj; }
		ProcessedData()
		{
			__constructor();
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_PROCESSEDDATA

