#include "./Canvas_EdgeType.hpp"

namespace android::graphics
{
	// Fields
	android::graphics::Canvas_EdgeType Canvas_EdgeType::AA()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"AA",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	android::graphics::Canvas_EdgeType Canvas_EdgeType::BW()
	{
		return getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"BW",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	
	// QJniObject forward
	Canvas_EdgeType::Canvas_EdgeType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Canvas_EdgeType Canvas_EdgeType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;",
			arg0
		);
	}
	jarray Canvas_EdgeType::values()
	{
		return callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"values",
			"()[Landroid/graphics/Canvas$EdgeType;"
		).object<jarray>();
	}
} // namespace android::graphics

