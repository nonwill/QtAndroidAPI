#include "./MenuInflater.hpp"
#include "./View.hpp"
#include "./ActionMode.hpp"

namespace android::view
{
	// Fields
	jint ActionMode::DEFAULT_HIDE_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ActionMode",
			"DEFAULT_HIDE_DURATION"
		);
	}
	jint ActionMode::TYPE_FLOATING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ActionMode",
			"TYPE_FLOATING"
		);
	}
	jint ActionMode::TYPE_PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.ActionMode",
			"TYPE_PRIMARY"
		);
	}
	
	ActionMode::ActionMode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionMode::ActionMode()
	{
		__thiz = QAndroidJniObject(
			"android.view.ActionMode",
			"()V"
		);
	}
	
	// Methods
	void ActionMode::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	QAndroidJniObject ActionMode::getCustomView()
	{
		return __thiz.callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject ActionMode::getMenu()
	{
		return __thiz.callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	QAndroidJniObject ActionMode::getMenuInflater()
	{
		return __thiz.callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	jstring ActionMode::getSubtitle()
	{
		return __thiz.callObjectMethod(
			"getSubtitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jobject ActionMode::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring ActionMode::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ActionMode::getTitleOptionalHint()
	{
		return __thiz.callMethod<jboolean>(
			"getTitleOptionalHint",
			"()Z"
		);
	}
	jint ActionMode::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	void ActionMode::hide(jlong arg0)
	{
		__thiz.callMethod<void>(
			"hide",
			"(J)V",
			arg0
		);
	}
	void ActionMode::invalidate()
	{
		__thiz.callMethod<void>(
			"invalidate",
			"()V"
		);
	}
	void ActionMode::invalidateContentRect()
	{
		__thiz.callMethod<void>(
			"invalidateContentRect",
			"()V"
		);
	}
	jboolean ActionMode::isTitleOptional()
	{
		return __thiz.callMethod<jboolean>(
			"isTitleOptional",
			"()Z"
		);
	}
	void ActionMode::onWindowFocusChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	void ActionMode::setCustomView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setCustomView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ActionMode::setSubtitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(I)V",
			arg0
		);
	}
	void ActionMode::setSubtitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ActionMode::setSubtitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSubtitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ActionMode::setTag(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTag",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ActionMode::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void ActionMode::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ActionMode::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ActionMode::setTitleOptionalHint(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setTitleOptionalHint",
			"(Z)V",
			arg0
		);
	}
	void ActionMode::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
} // namespace android::view
