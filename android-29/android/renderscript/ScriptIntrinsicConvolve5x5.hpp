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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicConvolve5x5(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicConvolve5x5(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicConvolve5x5 create(android::renderscript::RenderScript arg0, android::renderscript::Element arg1);
		void forEach(android::renderscript::Allocation arg0);
		void forEach(android::renderscript::Allocation arg0, android::renderscript::Script_LaunchOptions arg1);
		android::renderscript::Script_FieldID getFieldID_Input();
		android::renderscript::Script_KernelID getKernelID();
		void setCoefficients(jfloatArray arg0);
		void setInput(android::renderscript::Allocation arg0);
	};
} // namespace android::renderscript

