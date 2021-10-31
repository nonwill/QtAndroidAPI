#include "../../Canvas.hpp"
#include "../../Outline.hpp"
#include "../../Paint.hpp"
#include "./Shape.hpp"

namespace android::graphics::drawable::shapes
{
	// Fields
	
	// QAndroidJniObject forward
	Shape::Shape(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Shape::Shape()
		: __JniBaseClass(
			"android.graphics.drawable.shapes.Shape",
			"()V"
		) {}
	
	// Methods
	android::graphics::drawable::shapes::Shape Shape::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	void Shape::draw(android::graphics::Canvas arg0, android::graphics::Paint arg1)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jfloat Shape::getHeight()
	{
		return callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	void Shape::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jfloat Shape::getWidth()
	{
		return callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jboolean Shape::hasAlpha()
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	void Shape::resize(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"resize",
			"(FF)V",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable::shapes

