#pragma once

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"
#include "Script.hpp"
#include "ScriptIntrinsic.hpp"

namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class Script_LaunchOptions;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsicConvolve5x5 : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		void forEach(__jni_impl::android::renderscript::Allocation arg0);
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1);
		QAndroidJniObject getFieldID_Input();
		QAndroidJniObject getKernelID();
		void setCoefficients(jfloatArray arg0);
		void setInput(__jni_impl::android::renderscript::Allocation arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "Allocation.hpp"
#include "Element.hpp"
#include "RenderScript.hpp"
#include "Script_FieldID.hpp"
#include "Script_KernelID.hpp"
#include "Script_LaunchOptions.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicConvolve5x5::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicConvolve5x5",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScriptIntrinsicConvolve5x5::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicConvolve5x5",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicConvolve5x5;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicConvolve5x5::forEach(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicConvolve5x5::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Script_LaunchOptions arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicConvolve5x5::getFieldID_Input()
	{
		return __thiz.callObjectMethod(
			"getFieldID_Input",
			"()Landroid/renderscript/Script$FieldID;"
		);
	}
	QAndroidJniObject ScriptIntrinsicConvolve5x5::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicConvolve5x5::setCoefficients(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setCoefficients",
			"([F)V",
			arg0
		);
	}
	void ScriptIntrinsicConvolve5x5::setInput(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicConvolve5x5 : public __jni_impl::android::renderscript::ScriptIntrinsicConvolve5x5
	{
	public:
		ScriptIntrinsicConvolve5x5(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicConvolve5x5()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

