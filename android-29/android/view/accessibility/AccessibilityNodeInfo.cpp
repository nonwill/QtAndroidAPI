#include "../../graphics/Rect.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../View.hpp"
#include "./AccessibilityNodeInfo_AccessibilityAction.hpp"
#include "./AccessibilityNodeInfo_CollectionInfo.hpp"
#include "./AccessibilityNodeInfo_CollectionItemInfo.hpp"
#include "./AccessibilityNodeInfo_RangeInfo.hpp"
#include "./AccessibilityNodeInfo_TouchDelegateInfo.hpp"
#include "./AccessibilityWindowInfo.hpp"
#include "./AccessibilityNodeInfo.hpp"

namespace android::view::accessibility
{
	// Fields
	jint AccessibilityNodeInfo::ACTION_ACCESSIBILITY_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ACCESSIBILITY_FOCUS"
		);
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_COLUMN_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_COLUMN_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_HTML_ELEMENT_STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_HTML_ELEMENT_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_X()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_X",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_MOVE_WINDOW_Y()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_MOVE_WINDOW_Y",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_PROGRESS_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_PROGRESS_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_ROW_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_ROW_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_END_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_END_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SELECTION_START_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SELECTION_START_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_ACCESSIBILITY_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_ACCESSIBILITY_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLEAR_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLEAR_SELECTION"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CLICK"
		);
	}
	jint AccessibilityNodeInfo::ACTION_COLLAPSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COLLAPSE"
		);
	}
	jint AccessibilityNodeInfo::ACTION_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_COPY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_CUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_CUT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_DISMISS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_DISMISS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_EXPAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_EXPAND"
		);
	}
	jint AccessibilityNodeInfo::ACTION_FOCUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_FOCUS"
		);
	}
	jint AccessibilityNodeInfo::ACTION_LONG_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_LONG_CLICK"
		);
	}
	jint AccessibilityNodeInfo::ACTION_NEXT_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_NEXT_HTML_ELEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_NEXT_HTML_ELEMENT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PASTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PASTE"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY"
		);
	}
	jint AccessibilityNodeInfo::ACTION_PREVIOUS_HTML_ELEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_PREVIOUS_HTML_ELEMENT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SCROLL_BACKWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_BACKWARD"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SCROLL_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SCROLL_FORWARD"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SELECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SELECT"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SET_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_SELECTION"
		);
	}
	jint AccessibilityNodeInfo::ACTION_SET_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"ACTION_SET_TEXT"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.accessibility.AccessibilityNodeInfo",
			"EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::FOCUS_ACCESSIBILITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_ACCESSIBILITY"
		);
	}
	jint AccessibilityNodeInfo::FOCUS_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"FOCUS_INPUT"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_CHARACTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_CHARACTER"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_LINE"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PAGE"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_PARAGRAPH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_PARAGRAPH"
		);
	}
	jint AccessibilityNodeInfo::MOVEMENT_GRANULARITY_WORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.accessibility.AccessibilityNodeInfo",
			"MOVEMENT_GRANULARITY_WORD"
		);
	}
	
	AccessibilityNodeInfo::AccessibilityNodeInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AccessibilityNodeInfo::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain(android::view::View arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain(android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::obtain(android::view::View arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.accessibility.AccessibilityNodeInfo",
			"obtain",
			"(Landroid/view/View;I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::addAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0)
	{
		__thiz.callMethod<void>(
			"addAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::addAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"addAction",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::addChild(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"addChild",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::addChild(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"addChild",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean AccessibilityNodeInfo::canOpenPopup()
	{
		return __thiz.callMethod<jboolean>(
			"canOpenPopup",
			"()Z"
		);
	}
	jint AccessibilityNodeInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findAccessibilityNodeInfosByText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findAccessibilityNodeInfosByText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByText",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByViewId",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findAccessibilityNodeInfosByViewId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findAccessibilityNodeInfosByViewId",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::findFocus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"findFocus",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::focusSearch(jint arg0)
	{
		return __thiz.callObjectMethod(
			"focusSearch",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getActionList()
	{
		return __thiz.callObjectMethod(
			"getActionList",
			"()Ljava/util/List;"
		);
	}
	jint AccessibilityNodeInfo::getActions()
	{
		return __thiz.callMethod<jint>(
			"getActions",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getAvailableExtraData()
	{
		return __thiz.callObjectMethod(
			"getAvailableExtraData",
			"()Ljava/util/List;"
		);
	}
	void AccessibilityNodeInfo::getBoundsInParent(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::getBoundsInScreen(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"getBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getChild(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(I)Landroid/view/accessibility/AccessibilityNodeInfo;",
			arg0
		);
	}
	jint AccessibilityNodeInfo::getChildCount()
	{
		return __thiz.callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AccessibilityNodeInfo::getCollectionInfo()
	{
		return __thiz.callObjectMethod(
			"getCollectionInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getCollectionItemInfo()
	{
		return __thiz.callObjectMethod(
			"getCollectionItemInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;"
		);
	}
	jstring AccessibilityNodeInfo::getContentDescription()
	{
		return __thiz.callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getDrawingOrder()
	{
		return __thiz.callMethod<jint>(
			"getDrawingOrder",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getError()
	{
		return __thiz.callObjectMethod(
			"getError",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AccessibilityNodeInfo::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring AccessibilityNodeInfo::getHintText()
	{
		return __thiz.callObjectMethod(
			"getHintText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getLabelFor()
	{
		return __thiz.callObjectMethod(
			"getLabelFor",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getLabeledBy()
	{
		return __thiz.callObjectMethod(
			"getLabeledBy",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jint AccessibilityNodeInfo::getLiveRegion()
	{
		return __thiz.callMethod<jint>(
			"getLiveRegion",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getMaxTextLength()
	{
		return __thiz.callMethod<jint>(
			"getMaxTextLength",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getMovementGranularities()
	{
		return __thiz.callMethod<jint>(
			"getMovementGranularities",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring AccessibilityNodeInfo::getPaneTitle()
	{
		return __thiz.callObjectMethod(
			"getPaneTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AccessibilityNodeInfo::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getRangeInfo()
	{
		return __thiz.callObjectMethod(
			"getRangeInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;"
		);
	}
	jstring AccessibilityNodeInfo::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AccessibilityNodeInfo::getTextSelectionEnd()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionEnd",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::getTextSelectionStart()
	{
		return __thiz.callMethod<jint>(
			"getTextSelectionStart",
			"()I"
		);
	}
	jstring AccessibilityNodeInfo::getTooltipText()
	{
		return __thiz.callObjectMethod(
			"getTooltipText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AccessibilityNodeInfo::getTouchDelegateInfo()
	{
		return __thiz.callObjectMethod(
			"getTouchDelegateInfo",
			"()Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getTraversalAfter()
	{
		return __thiz.callObjectMethod(
			"getTraversalAfter",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	QAndroidJniObject AccessibilityNodeInfo::getTraversalBefore()
	{
		return __thiz.callObjectMethod(
			"getTraversalBefore",
			"()Landroid/view/accessibility/AccessibilityNodeInfo;"
		);
	}
	jstring AccessibilityNodeInfo::getViewIdResourceName()
	{
		return __thiz.callObjectMethod(
			"getViewIdResourceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AccessibilityNodeInfo::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/view/accessibility/AccessibilityWindowInfo;"
		);
	}
	jint AccessibilityNodeInfo::getWindowId()
	{
		return __thiz.callMethod<jint>(
			"getWindowId",
			"()I"
		);
	}
	jint AccessibilityNodeInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AccessibilityNodeInfo::isAccessibilityFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isAccessibilityFocused",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isCheckable()
	{
		return __thiz.callMethod<jboolean>(
			"isCheckable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isChecked()
	{
		return __thiz.callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isContentInvalid()
	{
		return __thiz.callMethod<jboolean>(
			"isContentInvalid",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isContextClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isContextClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isDismissable()
	{
		return __thiz.callMethod<jboolean>(
			"isDismissable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isEditable()
	{
		return __thiz.callMethod<jboolean>(
			"isEditable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isHeading()
	{
		return __thiz.callMethod<jboolean>(
			"isHeading",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isImportantForAccessibility()
	{
		return __thiz.callMethod<jboolean>(
			"isImportantForAccessibility",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isLongClickable()
	{
		return __thiz.callMethod<jboolean>(
			"isLongClickable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isMultiLine()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiLine",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isPassword()
	{
		return __thiz.callMethod<jboolean>(
			"isPassword",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScreenReaderFocusable()
	{
		return __thiz.callMethod<jboolean>(
			"isScreenReaderFocusable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isScrollable()
	{
		return __thiz.callMethod<jboolean>(
			"isScrollable",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isSelected()
	{
		return __thiz.callMethod<jboolean>(
			"isSelected",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isShowingHintText()
	{
		return __thiz.callMethod<jboolean>(
			"isShowingHintText",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isTextEntryKey()
	{
		return __thiz.callMethod<jboolean>(
			"isTextEntryKey",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::isVisibleToUser()
	{
		return __thiz.callMethod<jboolean>(
			"isVisibleToUser",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"performAction",
			"(I)Z",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::performAction(jint arg0, android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"performAction",
			"(ILandroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jboolean AccessibilityNodeInfo::refresh()
	{
		return __thiz.callMethod<jboolean>(
			"refresh",
			"()Z"
		);
	}
	jboolean AccessibilityNodeInfo::refreshWithExtraData(jstring arg0, android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"refreshWithExtraData",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AccessibilityNodeInfo::refreshWithExtraData(const QString &arg0, android::os::Bundle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"refreshWithExtraData",
			"(Ljava/lang/String;Landroid/os/Bundle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean AccessibilityNodeInfo::removeAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAction",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$AccessibilityAction;)Z",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::removeAction(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAction",
			"(I)V",
			arg0
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessibilityNodeInfo::removeChild(android::view::View arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"removeChild",
			"(Landroid/view/View;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setAccessibilityFocused(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAccessibilityFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setAvailableExtraData(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAvailableExtraData",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInParent(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setBoundsInParent",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setBoundsInScreen(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setBoundsInScreen",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setCanOpenPopup(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCanOpenPopup",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCheckable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCheckable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setClassName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setClassName",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setCollectionInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0)
	{
		__thiz.callMethod<void>(
			"setCollectionInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setCollectionItemInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0)
	{
		__thiz.callMethod<void>(
			"setCollectionItemInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$CollectionItemInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setContentDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setContentDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setContentInvalid(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContentInvalid",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setContextClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setContextClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setDismissable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDismissable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setDrawingOrder(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDrawingOrder",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setEditable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEditable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setError",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocusable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setFocused(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFocused",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHeading(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHeading",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHintText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setHintText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setHintText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setHintText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setImportantForAccessibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setImportantForAccessibility",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setInputType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInputType",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLabelFor(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setLabelFor(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLabelFor",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setLabeledBy(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setLabeledBy",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setLiveRegion(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLiveRegion",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setLongClickable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLongClickable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMaxTextLength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMaxTextLength",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMovementGranularities(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMovementGranularities",
			"(I)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setMultiLine(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMultiLine",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPackageName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPackageName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPackageName",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setPaneTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setPaneTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPaneTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setParent(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setParent",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setParent(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setParent",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setPassword(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setRangeInfo(android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0)
	{
		__thiz.callMethod<void>(
			"setRangeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$RangeInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setScreenReaderFocusable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScreenReaderFocusable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setScrollable(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setScrollable",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSelected",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setShowingHintText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowingHintText",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setSource(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setSource(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSource",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setTextEntryKey(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTextEntryKey",
			"(Z)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setTextSelection(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTextSelection",
			"(II)V",
			arg0,
			arg1
		);
	}
	void AccessibilityNodeInfo::setTooltipText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setTooltipText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTooltipText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setTouchDelegateInfo(android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0)
	{
		__thiz.callMethod<void>(
			"setTouchDelegateInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo$TouchDelegateInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setTraversalAfter(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTraversalAfter",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void AccessibilityNodeInfo::setTraversalBefore(android::view::View arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTraversalBefore",
			"(Landroid/view/View;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AccessibilityNodeInfo::setViewIdResourceName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setViewIdResourceName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AccessibilityNodeInfo::setViewIdResourceName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setViewIdResourceName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AccessibilityNodeInfo::setVisibleToUser(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setVisibleToUser",
			"(Z)V",
			arg0
		);
	}
	jstring AccessibilityNodeInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AccessibilityNodeInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::accessibility
