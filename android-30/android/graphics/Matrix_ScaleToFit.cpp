#include "./Matrix_ScaleToFit.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::CENTER()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"CENTER",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::END()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"END",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::FILL()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"FILL",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::START()
	{
		return getStaticObjectField(
			"android.graphics.Matrix$ScaleToFit",
			"START",
			"Landroid/graphics/Matrix$ScaleToFit;"
		);
	}
	
	// QAndroidJniObject forward
	Matrix_ScaleToFit::Matrix_ScaleToFit(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Matrix_ScaleToFit Matrix_ScaleToFit::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;",
			arg0
		);
	}
	jarray Matrix_ScaleToFit::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Matrix$ScaleToFit",
			"values",
			"()[Landroid/graphics/Matrix$ScaleToFit;"
		).object<jarray>();
	}
} // namespace android::graphics
