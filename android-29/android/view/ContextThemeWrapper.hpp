#pragma once

#ifndef ANDROID_VIEW_CONTEXTTHEMEWRAPPER
#define ANDROID_VIEW_CONTEXTTHEMEWRAPPER

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}

namespace __jni_impl::android::view
{
	class ContextThemeWrapper : public __jni_impl::android::content::ContextWrapper
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::res::Resources_Theme arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jint arg1);
		
		// Methods
		void applyOverrideConfiguration(__jni_impl::android::content::res::Configuration arg0);
		QAndroidJniObject getAssets();
		QAndroidJniObject getResources();
		jobject getSystemService(jstring arg0);
		jobject getSystemService(const QString &arg0);
		QAndroidJniObject getTheme();
		void setTheme(__jni_impl::android::content::res::Resources_Theme arg0);
		void setTheme(jint arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../content/res/AssetManager.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../content/res/Resources_Theme.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ContextThemeWrapper::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ContextThemeWrapper",
			"()V"
		);
	}
	void ContextThemeWrapper::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::res::Resources_Theme arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContextThemeWrapper::__constructor(__jni_impl::android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ContextThemeWrapper",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void ContextThemeWrapper::applyOverrideConfiguration(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"applyOverrideConfiguration",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContextThemeWrapper::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	QAndroidJniObject ContextThemeWrapper::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jobject ContextThemeWrapper::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ContextThemeWrapper::getSystemService(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject ContextThemeWrapper::getTheme()
	{
		return __thiz.callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	void ContextThemeWrapper::setTheme(__jni_impl::android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextThemeWrapper::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ContextThemeWrapper : public __jni_impl::android::view::ContextThemeWrapper
	{
	public:
		ContextThemeWrapper(QAndroidJniObject obj) { __thiz = obj; }
		ContextThemeWrapper()
		{
			__constructor();
		}
		ContextThemeWrapper(__jni_impl::android::content::Context arg0, __jni_impl::android::content::res::Resources_Theme arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ContextThemeWrapper(__jni_impl::android::content::Context arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_CONTEXTTHEMEWRAPPER

