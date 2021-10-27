#include "../../content/res/Resources.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	DrawableContainer_DrawableContainerState::DrawableContainer_DrawableContainerState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DrawableContainer_DrawableContainerState::addChild(android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callMethod<jint>(
			"addChild",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean DrawableContainer_DrawableContainerState::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::canConstantState()
	{
		return __thiz.callMethod<jboolean>(
			"canConstantState",
			"()Z"
		);
	}
	jint DrawableContainer_DrawableContainerState::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject DrawableContainer_DrawableContainerState::getChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint DrawableContainer_DrawableContainerState::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jarray DrawableContainer_DrawableContainerState::getChildren()
	{
		return __thiz.callObjectMethod(
			"getChildren",
			"()[Landroid/graphics/drawable/Drawable;"
		).object<jarray>();
	}
	jint DrawableContainer_DrawableContainerState::getConstantHeight()
	{
		return __thiz.callMethod<jint>(
			"getConstantHeight",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getConstantMinimumHeight",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getConstantMinimumWidth",
			"()I"
		);
	}
	QAndroidJniObject DrawableContainer_DrawableContainerState::getConstantPadding()
	{
		return __thiz.callObjectMethod(
			"getConstantPadding",
			"()Landroid/graphics/Rect;"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantWidth()
	{
		return __thiz.callMethod<jint>(
			"getConstantWidth",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getEnterFadeDuration()
	{
		return __thiz.callMethod<jint>(
			"getEnterFadeDuration",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getExitFadeDuration()
	{
		return __thiz.callMethod<jint>(
			"getExitFadeDuration",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void DrawableContainer_DrawableContainerState::growArray(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"growArray",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean DrawableContainer_DrawableContainerState::isConstantSize()
	{
		return __thiz.callMethod<jboolean>(
			"isConstantSize",
			"()Z"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void DrawableContainer_DrawableContainerState::setConstantSize(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setConstantSize",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setEnterFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setExitFadeDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setVariablePadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVariablePadding",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable
