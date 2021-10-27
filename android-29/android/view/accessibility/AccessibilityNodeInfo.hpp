#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_AccessibilityAction;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_CollectionItemInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_RangeInfo;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo_TouchDelegateInfo;
}
namespace android::view::accessibility
{
	class AccessibilityWindowInfo;
}

namespace android::view::accessibility
{
	class AccessibilityNodeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACTION_ACCESSIBILITY_FOCUS();
		static jstring ACTION_ARGUMENT_COLUMN_INT();
		static jstring ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN();
		static jstring ACTION_ARGUMENT_HTML_ELEMENT_STRING();
		static jstring ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT();
		static jstring ACTION_ARGUMENT_MOVE_WINDOW_X();
		static jstring ACTION_ARGUMENT_MOVE_WINDOW_Y();
		static jstring ACTION_ARGUMENT_PROGRESS_VALUE();
		static jstring ACTION_ARGUMENT_ROW_INT();
		static jstring ACTION_ARGUMENT_SELECTION_END_INT();
		static jstring ACTION_ARGUMENT_SELECTION_START_INT();
		static jstring ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE();
		static jint ACTION_CLEAR_ACCESSIBILITY_FOCUS();
		static jint ACTION_CLEAR_FOCUS();
		static jint ACTION_CLEAR_SELECTION();
		static jint ACTION_CLICK();
		static jint ACTION_COLLAPSE();
		static jint ACTION_COPY();
		static jint ACTION_CUT();
		static jint ACTION_DISMISS();
		static jint ACTION_EXPAND();
		static jint ACTION_FOCUS();
		static jint ACTION_LONG_CLICK();
		static jint ACTION_NEXT_AT_MOVEMENT_GRANULARITY();
		static jint ACTION_NEXT_HTML_ELEMENT();
		static jint ACTION_PASTE();
		static jint ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY();
		static jint ACTION_PREVIOUS_HTML_ELEMENT();
		static jint ACTION_SCROLL_BACKWARD();
		static jint ACTION_SCROLL_FORWARD();
		static jint ACTION_SELECT();
		static jint ACTION_SET_SELECTION();
		static jint ACTION_SET_TEXT();
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_LENGTH();
		static jstring EXTRA_DATA_TEXT_CHARACTER_LOCATION_ARG_START_INDEX();
		static jstring EXTRA_DATA_TEXT_CHARACTER_LOCATION_KEY();
		static jint FOCUS_ACCESSIBILITY();
		static jint FOCUS_INPUT();
		static jint MOVEMENT_GRANULARITY_CHARACTER();
		static jint MOVEMENT_GRANULARITY_LINE();
		static jint MOVEMENT_GRANULARITY_PAGE();
		static jint MOVEMENT_GRANULARITY_PARAGRAPH();
		static jint MOVEMENT_GRANULARITY_WORD();
		
		AccessibilityNodeInfo(QAndroidJniObject obj);
		// Constructors
		AccessibilityNodeInfo() = default;
		
		// Methods
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(android::view::View arg0);
		static QAndroidJniObject obtain(android::view::accessibility::AccessibilityNodeInfo arg0);
		static QAndroidJniObject obtain(android::view::View arg0, jint arg1);
		void addAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0);
		void addAction(jint arg0);
		void addChild(android::view::View arg0);
		void addChild(android::view::View arg0, jint arg1);
		jboolean canOpenPopup();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject findAccessibilityNodeInfosByText(jstring arg0);
		QAndroidJniObject findAccessibilityNodeInfosByText(const QString &arg0);
		QAndroidJniObject findAccessibilityNodeInfosByViewId(jstring arg0);
		QAndroidJniObject findAccessibilityNodeInfosByViewId(const QString &arg0);
		QAndroidJniObject findFocus(jint arg0);
		QAndroidJniObject focusSearch(jint arg0);
		QAndroidJniObject getActionList();
		jint getActions();
		QAndroidJniObject getAvailableExtraData();
		void getBoundsInParent(android::graphics::Rect arg0);
		void getBoundsInScreen(android::graphics::Rect arg0);
		QAndroidJniObject getChild(jint arg0);
		jint getChildCount();
		jstring getClassName();
		QAndroidJniObject getCollectionInfo();
		QAndroidJniObject getCollectionItemInfo();
		jstring getContentDescription();
		jint getDrawingOrder();
		jstring getError();
		QAndroidJniObject getExtras();
		jstring getHintText();
		jint getInputType();
		QAndroidJniObject getLabelFor();
		QAndroidJniObject getLabeledBy();
		jint getLiveRegion();
		jint getMaxTextLength();
		jint getMovementGranularities();
		jstring getPackageName();
		jstring getPaneTitle();
		QAndroidJniObject getParent();
		QAndroidJniObject getRangeInfo();
		jstring getText();
		jint getTextSelectionEnd();
		jint getTextSelectionStart();
		jstring getTooltipText();
		QAndroidJniObject getTouchDelegateInfo();
		QAndroidJniObject getTraversalAfter();
		QAndroidJniObject getTraversalBefore();
		jstring getViewIdResourceName();
		QAndroidJniObject getWindow();
		jint getWindowId();
		jint hashCode();
		jboolean isAccessibilityFocused();
		jboolean isCheckable();
		jboolean isChecked();
		jboolean isClickable();
		jboolean isContentInvalid();
		jboolean isContextClickable();
		jboolean isDismissable();
		jboolean isEditable();
		jboolean isEnabled();
		jboolean isFocusable();
		jboolean isFocused();
		jboolean isHeading();
		jboolean isImportantForAccessibility();
		jboolean isLongClickable();
		jboolean isMultiLine();
		jboolean isPassword();
		jboolean isScreenReaderFocusable();
		jboolean isScrollable();
		jboolean isSelected();
		jboolean isShowingHintText();
		jboolean isTextEntryKey();
		jboolean isVisibleToUser();
		jboolean performAction(jint arg0);
		jboolean performAction(jint arg0, android::os::Bundle arg1);
		void recycle();
		jboolean refresh();
		jboolean refreshWithExtraData(jstring arg0, android::os::Bundle arg1);
		jboolean refreshWithExtraData(const QString &arg0, android::os::Bundle arg1);
		jboolean removeAction(android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction arg0);
		void removeAction(jint arg0);
		jboolean removeChild(android::view::View arg0);
		jboolean removeChild(android::view::View arg0, jint arg1);
		void setAccessibilityFocused(jboolean arg0);
		void setAvailableExtraData(__JniBaseClass arg0);
		void setBoundsInParent(android::graphics::Rect arg0);
		void setBoundsInScreen(android::graphics::Rect arg0);
		void setCanOpenPopup(jboolean arg0);
		void setCheckable(jboolean arg0);
		void setChecked(jboolean arg0);
		void setClassName(jstring arg0);
		void setClassName(const QString &arg0);
		void setClickable(jboolean arg0);
		void setCollectionInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionInfo arg0);
		void setCollectionItemInfo(android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo arg0);
		void setContentDescription(jstring arg0);
		void setContentDescription(const QString &arg0);
		void setContentInvalid(jboolean arg0);
		void setContextClickable(jboolean arg0);
		void setDismissable(jboolean arg0);
		void setDrawingOrder(jint arg0);
		void setEditable(jboolean arg0);
		void setEnabled(jboolean arg0);
		void setError(jstring arg0);
		void setError(const QString &arg0);
		void setFocusable(jboolean arg0);
		void setFocused(jboolean arg0);
		void setHeading(jboolean arg0);
		void setHintText(jstring arg0);
		void setHintText(const QString &arg0);
		void setImportantForAccessibility(jboolean arg0);
		void setInputType(jint arg0);
		void setLabelFor(android::view::View arg0);
		void setLabelFor(android::view::View arg0, jint arg1);
		void setLabeledBy(android::view::View arg0);
		void setLabeledBy(android::view::View arg0, jint arg1);
		void setLiveRegion(jint arg0);
		void setLongClickable(jboolean arg0);
		void setMaxTextLength(jint arg0);
		void setMovementGranularities(jint arg0);
		void setMultiLine(jboolean arg0);
		void setPackageName(jstring arg0);
		void setPackageName(const QString &arg0);
		void setPaneTitle(jstring arg0);
		void setPaneTitle(const QString &arg0);
		void setParent(android::view::View arg0);
		void setParent(android::view::View arg0, jint arg1);
		void setPassword(jboolean arg0);
		void setRangeInfo(android::view::accessibility::AccessibilityNodeInfo_RangeInfo arg0);
		void setScreenReaderFocusable(jboolean arg0);
		void setScrollable(jboolean arg0);
		void setSelected(jboolean arg0);
		void setShowingHintText(jboolean arg0);
		void setSource(android::view::View arg0);
		void setSource(android::view::View arg0, jint arg1);
		void setText(jstring arg0);
		void setText(const QString &arg0);
		void setTextEntryKey(jboolean arg0);
		void setTextSelection(jint arg0, jint arg1);
		void setTooltipText(jstring arg0);
		void setTooltipText(const QString &arg0);
		void setTouchDelegateInfo(android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo arg0);
		void setTraversalAfter(android::view::View arg0);
		void setTraversalAfter(android::view::View arg0, jint arg1);
		void setTraversalBefore(android::view::View arg0);
		void setTraversalBefore(android::view::View arg0, jint arg1);
		void setViewIdResourceName(jstring arg0);
		void setViewIdResourceName(const QString &arg0);
		void setVisibleToUser(jboolean arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::accessibility

