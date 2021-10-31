#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/inputmethod/CompletionInfo.hpp"
#include "./Filter.hpp"
#include "./AutoCompleteTextView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	AutoCompleteTextView::AutoCompleteTextView(QAndroidJniObject obj) : android::widget::EditText(obj) {}
	
	// Constructors
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	AutoCompleteTextView::AutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3, android::content::res::Resources_Theme arg4)
		: android::widget::EditText(
			"android.widget.AutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;IILandroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	void AutoCompleteTextView::clearListSelection()
	{
		callMethod<void>(
			"clearListSelection",
			"()V"
		);
	}
	void AutoCompleteTextView::dismissDropDown()
	{
		callMethod<void>(
			"dismissDropDown",
			"()V"
		);
	}
	jboolean AutoCompleteTextView::enoughToFilter()
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	__JniBaseClass AutoCompleteTextView::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	jstring AutoCompleteTextView::getCompletionHint()
	{
		return callObjectMethod(
			"getCompletionHint",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AutoCompleteTextView::getDropDownAnchor()
	{
		return callMethod<jint>(
			"getDropDownAnchor",
			"()I"
		);
	}
	android::graphics::drawable::Drawable AutoCompleteTextView::getDropDownBackground()
	{
		return callObjectMethod(
			"getDropDownBackground",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AutoCompleteTextView::getDropDownHeight()
	{
		return callMethod<jint>(
			"getDropDownHeight",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownHorizontalOffset()
	{
		return callMethod<jint>(
			"getDropDownHorizontalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownVerticalOffset()
	{
		return callMethod<jint>(
			"getDropDownVerticalOffset",
			"()I"
		);
	}
	jint AutoCompleteTextView::getDropDownWidth()
	{
		return callMethod<jint>(
			"getDropDownWidth",
			"()I"
		);
	}
	__JniBaseClass AutoCompleteTextView::getItemClickListener()
	{
		return callObjectMethod(
			"getItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	__JniBaseClass AutoCompleteTextView::getItemSelectedListener()
	{
		return callObjectMethod(
			"getItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getListSelection()
	{
		return callMethod<jint>(
			"getListSelection",
			"()I"
		);
	}
	__JniBaseClass AutoCompleteTextView::getOnItemClickListener()
	{
		return callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	__JniBaseClass AutoCompleteTextView::getOnItemSelectedListener()
	{
		return callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AutoCompleteTextView::getThreshold()
	{
		return callMethod<jint>(
			"getThreshold",
			"()I"
		);
	}
	__JniBaseClass AutoCompleteTextView::getValidator()
	{
		return callObjectMethod(
			"getValidator",
			"()Landroid/widget/AutoCompleteTextView$Validator;"
		);
	}
	jboolean AutoCompleteTextView::isPerformingCompletion()
	{
		return callMethod<jboolean>(
			"isPerformingCompletion",
			"()Z"
		);
	}
	jboolean AutoCompleteTextView::isPopupShowing()
	{
		return callMethod<jboolean>(
			"isPopupShowing",
			"()Z"
		);
	}
	void AutoCompleteTextView::onCommitCompletion(android::view::inputmethod::CompletionInfo arg0)
	{
		callMethod<void>(
			"onCommitCompletion",
			"(Landroid/view/inputmethod/CompletionInfo;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::onFilterComplete(jint arg0)
	{
		callMethod<void>(
			"onFilterComplete",
			"(I)V",
			arg0
		);
	}
	jboolean AutoCompleteTextView::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AutoCompleteTextView::onKeyPreIme(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyPreIme",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AutoCompleteTextView::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void AutoCompleteTextView::onWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void AutoCompleteTextView::performCompletion()
	{
		callMethod<void>(
			"performCompletion",
			"()V"
		);
	}
	void AutoCompleteTextView::performValidation()
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void AutoCompleteTextView::setAdapter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setCompletionHint(jstring arg0)
	{
		callMethod<void>(
			"setCompletionHint",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownAnchor(jint arg0)
	{
		callMethod<void>(
			"setDropDownAnchor",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setDropDownBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setDropDownBackgroundResource(jint arg0)
	{
		callMethod<void>(
			"setDropDownBackgroundResource",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHeight(jint arg0)
	{
		callMethod<void>(
			"setDropDownHeight",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownHorizontalOffset(jint arg0)
	{
		callMethod<void>(
			"setDropDownHorizontalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownVerticalOffset(jint arg0)
	{
		callMethod<void>(
			"setDropDownVerticalOffset",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setDropDownWidth(jint arg0)
	{
		callMethod<void>(
			"setDropDownWidth",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setListSelection(jint arg0)
	{
		callMethod<void>(
			"setListSelection",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setOnClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnDismissListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/AutoCompleteTextView$OnDismissListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnItemClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setOnItemSelectedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::setText(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;Z)V",
			arg0,
			arg1
		);
	}
	void AutoCompleteTextView::setThreshold(jint arg0)
	{
		callMethod<void>(
			"setThreshold",
			"(I)V",
			arg0
		);
	}
	void AutoCompleteTextView::setValidator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setValidator",
			"(Landroid/widget/AutoCompleteTextView$Validator;)V",
			arg0.object()
		);
	}
	void AutoCompleteTextView::showDropDown()
	{
		callMethod<void>(
			"showDropDown",
			"()V"
		);
	}
} // namespace android::widget

