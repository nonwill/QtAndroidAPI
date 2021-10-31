#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Type_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Type_Builder::Type_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Type_Builder::Type_Builder(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
		: __JniBaseClass(
			"android.renderscript.Type$Builder",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::renderscript::Type Type_Builder::create()
	{
		return callObjectMethod(
			"create",
			"()Landroid/renderscript/Type;"
		);
	}
	android::renderscript::Type_Builder Type_Builder::setFaces(jboolean arg0)
	{
		return callObjectMethod(
			"setFaces",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setMipmaps(jboolean arg0)
	{
		return callObjectMethod(
			"setMipmaps",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setX(jint arg0)
	{
		return callObjectMethod(
			"setX",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setY(jint arg0)
	{
		return callObjectMethod(
			"setY",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setYuvFormat(jint arg0)
	{
		return callObjectMethod(
			"setYuvFormat",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	android::renderscript::Type_Builder Type_Builder::setZ(jint arg0)
	{
		return callObjectMethod(
			"setZ",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
} // namespace android::renderscript
