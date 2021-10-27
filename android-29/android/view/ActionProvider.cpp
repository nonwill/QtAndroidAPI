#include "../content/Context.hpp"
#include "./View.hpp"
#include "./ActionProvider.hpp"

namespace android::view
{
	// Fields
	
	ActionProvider::ActionProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActionProvider::ActionProvider(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ActionProvider",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ActionProvider::hasSubMenu()
	{
		return __thiz.callMethod<jboolean>(
			"hasSubMenu",
			"()Z"
		);
	}
	jboolean ActionProvider::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	QAndroidJniObject ActionProvider::onCreateActionView()
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject ActionProvider::onCreateActionView(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateActionView",
			"(Landroid/view/MenuItem;)Landroid/view/View;",
			arg0.__jniObject().object()
		);
	}
	jboolean ActionProvider::onPerformDefaultAction()
	{
		return __thiz.callMethod<jboolean>(
			"onPerformDefaultAction",
			"()Z"
		);
	}
	void ActionProvider::onPrepareSubMenu(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareSubMenu",
			"(Landroid/view/SubMenu;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ActionProvider::overridesItemVisibility()
	{
		return __thiz.callMethod<jboolean>(
			"overridesItemVisibility",
			"()Z"
		);
	}
	void ActionProvider::refreshVisibility()
	{
		__thiz.callMethod<void>(
			"refreshVisibility",
			"()V"
		);
	}
	void ActionProvider::setVisibilityListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setVisibilityListener",
			"(Landroid/view/ActionProvider$VisibilityListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view
