#include "../content/Context.hpp"
#include "./MultiAutoCompleteTextView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(QAndroidJniObject obj) : android::widget::AutoCompleteTextView(obj) {}
	
	// Constructors
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	MultiAutoCompleteTextView::MultiAutoCompleteTextView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::AutoCompleteTextView(
			"android.widget.MultiAutoCompleteTextView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean MultiAutoCompleteTextView::enoughToFilter()
	{
		return callMethod<jboolean>(
			"enoughToFilter",
			"()Z"
		);
	}
	jstring MultiAutoCompleteTextView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void MultiAutoCompleteTextView::performValidation()
	{
		callMethod<void>(
			"performValidation",
			"()V"
		);
	}
	void MultiAutoCompleteTextView::setTokenizer(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTokenizer",
			"(Landroid/widget/MultiAutoCompleteTextView$Tokenizer;)V",
			arg0.object()
		);
	}
} // namespace android::widget
