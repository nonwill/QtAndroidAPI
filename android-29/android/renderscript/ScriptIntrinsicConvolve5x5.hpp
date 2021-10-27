#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

namespace android::renderscript
{
	class Allocation;
}
namespace android::renderscript
{
	class Element;
}
namespace android::renderscript
{
	class RenderScript;
}
namespace android::renderscript
{
	class Script_FieldID;
}
namespace android::renderscript
{
	class Script_KernelID;
}
namespace android::renderscript
{
	class Script_LaunchOptions;
}

namespace android::renderscript
{
	class ScriptIntrinsicConvolve5x5 : public android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		ScriptIntrinsicConvolve5x5(QAndroidJniObject obj);
		// Constructors
		ScriptIntrinsicConvolve5x5() = default;
		
		// Methods
		static QAndroidJniObject create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1);
		QAndroidJniObject getFieldID_Input();
		QAndroidJniObject getKernelID();
		void setCoefficients(jfloatArray arg0);
		void setInput(android::renderscript::Allocation arg0);
	};
} // namespace android::renderscript

