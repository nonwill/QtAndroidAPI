#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./ColorStateListDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	ColorStateListDrawable::ColorStateListDrawable(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	ColorStateListDrawable::ColorStateListDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ColorStateListDrawable",
			"()V"
		) {}
	ColorStateListDrawable::ColorStateListDrawable(android::content::res::ColorStateList arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ColorStateListDrawable",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		) {}
	
	// Methods
	void ColorStateListDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean ColorStateListDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void ColorStateListDrawable::clearAlpha()
	{
		callMethod<void>(
			"clearAlpha",
			"()V"
		);
	}
	void ColorStateListDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint ColorStateListDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint ColorStateListDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter ColorStateListDrawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::content::res::ColorStateList ColorStateListDrawable::getColorStateList()
	{
		return callObjectMethod(
			"getColorStateList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState ColorStateListDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable ColorStateListDrawable::getCurrent()
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ColorStateListDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	jboolean ColorStateListDrawable::hasFocusStateSpecified()
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void ColorStateListDrawable::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean ColorStateListDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable ColorStateListDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ColorStateListDrawable::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ColorStateListDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ColorStateListDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void ColorStateListDrawable::setColorStateList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setColorStateList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ColorStateListDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void ColorStateListDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ColorStateListDrawable::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1)
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

