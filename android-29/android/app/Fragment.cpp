#include "../animation/Animator.hpp"
#include "./Activity.hpp"
#include "./Fragment_SavedState.hpp"
#include "./FragmentManager.hpp"
#include "./LoaderManager.hpp"
#include "./SharedElementCallback.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../content/res/Configuration.hpp"
#include "../content/res/Resources.hpp"
#include "../os/Bundle.hpp"
#include "../transition/Transition.hpp"
#include "../view/LayoutInflater.hpp"
#include "../view/MenuInflater.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Fragment.hpp"

namespace android::app
{
	// Fields
	
	Fragment::Fragment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Fragment::Fragment()
	{
		__thiz = QAndroidJniObject(
			"android.app.Fragment",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Fragment::instantiate(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Fragment::instantiate(android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Fragment::instantiate(android::content::Context arg0, jstring arg1, android::os::Bundle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Fragment::instantiate(android::content::Context arg0, const QString &arg1, android::os::Bundle arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Fragment",
			"instantiate",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)Landroid/app/Fragment;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void Fragment::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Fragment::dump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean Fragment::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Fragment::getActivity()
	{
		return __thiz.callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	jboolean Fragment::getAllowEnterTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowEnterTransitionOverlap",
			"()Z"
		);
	}
	jboolean Fragment::getAllowReturnTransitionOverlap()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowReturnTransitionOverlap",
			"()Z"
		);
	}
	QAndroidJniObject Fragment::getArguments()
	{
		return __thiz.callObjectMethod(
			"getArguments",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Fragment::getChildFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getChildFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	QAndroidJniObject Fragment::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Fragment::getEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Fragment::getExitTransition()
	{
		return __thiz.callObjectMethod(
			"getExitTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Fragment::getFragmentManager()
	{
		return __thiz.callObjectMethod(
			"getFragmentManager",
			"()Landroid/app/FragmentManager;"
		);
	}
	jobject Fragment::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Fragment::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	QAndroidJniObject Fragment::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	QAndroidJniObject Fragment::getLoaderManager()
	{
		return __thiz.callObjectMethod(
			"getLoaderManager",
			"()Landroid/app/LoaderManager;"
		);
	}
	QAndroidJniObject Fragment::getParentFragment()
	{
		return __thiz.callObjectMethod(
			"getParentFragment",
			"()Landroid/app/Fragment;"
		);
	}
	QAndroidJniObject Fragment::getReenterTransition()
	{
		return __thiz.callObjectMethod(
			"getReenterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Fragment::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	jboolean Fragment::getRetainInstance()
	{
		return __thiz.callMethod<jboolean>(
			"getRetainInstance",
			"()Z"
		);
	}
	QAndroidJniObject Fragment::getReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Fragment::getSharedElementEnterTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementEnterTransition",
			"()Landroid/transition/Transition;"
		);
	}
	QAndroidJniObject Fragment::getSharedElementReturnTransition()
	{
		return __thiz.callObjectMethod(
			"getSharedElementReturnTransition",
			"()Landroid/transition/Transition;"
		);
	}
	jstring Fragment::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Fragment::getString(jint arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Fragment::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Fragment::getTargetFragment()
	{
		return __thiz.callObjectMethod(
			"getTargetFragment",
			"()Landroid/app/Fragment;"
		);
	}
	jint Fragment::getTargetRequestCode()
	{
		return __thiz.callMethod<jint>(
			"getTargetRequestCode",
			"()I"
		);
	}
	jstring Fragment::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jboolean Fragment::getUserVisibleHint()
	{
		return __thiz.callMethod<jboolean>(
			"getUserVisibleHint",
			"()Z"
		);
	}
	QAndroidJniObject Fragment::getView()
	{
		return __thiz.callObjectMethod(
			"getView",
			"()Landroid/view/View;"
		);
	}
	jint Fragment::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Fragment::isAdded()
	{
		return __thiz.callMethod<jboolean>(
			"isAdded",
			"()Z"
		);
	}
	jboolean Fragment::isDetached()
	{
		return __thiz.callMethod<jboolean>(
			"isDetached",
			"()Z"
		);
	}
	jboolean Fragment::isHidden()
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jboolean Fragment::isInLayout()
	{
		return __thiz.callMethod<jboolean>(
			"isInLayout",
			"()Z"
		);
	}
	jboolean Fragment::isRemoving()
	{
		return __thiz.callMethod<jboolean>(
			"isRemoving",
			"()Z"
		);
	}
	jboolean Fragment::isResumed()
	{
		return __thiz.callMethod<jboolean>(
			"isResumed",
			"()Z"
		);
	}
	jboolean Fragment::isStateSaved()
	{
		return __thiz.callMethod<jboolean>(
			"isStateSaved",
			"()Z"
		);
	}
	jboolean Fragment::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void Fragment::onActivityCreated(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onActivityCreated",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onActivityResult(jint arg0, jint arg1, android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"onActivityResult",
			"(IILandroid/content/Intent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Fragment::onAttach(android::app::Activity arg0)
	{
		__thiz.callMethod<void>(
			"onAttach",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onAttach(android::content::Context arg0)
	{
		__thiz.callMethod<void>(
			"onAttach",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onAttachFragment(android::app::Fragment arg0)
	{
		__thiz.callMethod<void>(
			"onAttachFragment",
			"(Landroid/app/Fragment;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Fragment::onContextItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onContextItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onCreate(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCreate",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Fragment::onCreateAnimator(jint arg0, jboolean arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateAnimator",
			"(IZI)Landroid/animation/Animator;",
			arg0,
			arg1,
			arg2
		);
	}
	void Fragment::onCreateContextMenu(__JniBaseClass arg0, android::view::View arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Fragment::onCreateOptionsMenu(__JniBaseClass arg0, android::view::MenuInflater arg1)
	{
		__thiz.callMethod<void>(
			"onCreateOptionsMenu",
			"(Landroid/view/Menu;Landroid/view/MenuInflater;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Fragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Fragment::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void Fragment::onDestroyOptionsMenu()
	{
		__thiz.callMethod<void>(
			"onDestroyOptionsMenu",
			"()V"
		);
	}
	void Fragment::onDestroyView()
	{
		__thiz.callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	void Fragment::onDetach()
	{
		__thiz.callMethod<void>(
			"onDetach",
			"()V"
		);
	}
	QAndroidJniObject Fragment::onGetLayoutInflater(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onGetLayoutInflater",
			"(Landroid/os/Bundle;)Landroid/view/LayoutInflater;",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onHiddenChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onHiddenChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onInflate(__JniBaseClass arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onInflate",
			"(Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Fragment::onInflate(android::app::Activity arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onInflate",
			"(Landroid/app/Activity;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Fragment::onInflate(android::content::Context arg0, __JniBaseClass arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onInflate",
			"(Landroid/content/Context;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Fragment::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onMultiWindowModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onMultiWindowModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Fragment::onOptionsItemSelected(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onOptionsItemSelected",
			"(Landroid/view/MenuItem;)Z",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onOptionsMenuClosed(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onOptionsMenuClosed",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(Z)V",
			arg0
		);
	}
	void Fragment::onPictureInPictureModeChanged(jboolean arg0, android::content::res::Configuration arg1)
	{
		__thiz.callMethod<void>(
			"onPictureInPictureModeChanged",
			"(ZLandroid/content/res/Configuration;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Fragment::onPrepareOptionsMenu(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onPrepareOptionsMenu",
			"(Landroid/view/Menu;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onRequestPermissionsResult(jint arg0, jarray arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"onRequestPermissionsResult",
			"(I[Ljava/lang/String;[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Fragment::onResume()
	{
		__thiz.callMethod<void>(
			"onResume",
			"()V"
		);
	}
	void Fragment::onSaveInstanceState(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onSaveInstanceState",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::onStart()
	{
		__thiz.callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void Fragment::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
	void Fragment::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	void Fragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Fragment::onViewStateRestored(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onViewStateRestored",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::postponeEnterTransition()
	{
		__thiz.callMethod<void>(
			"postponeEnterTransition",
			"()V"
		);
	}
	void Fragment::registerForContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"registerForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::requestPermissions(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"requestPermissions",
			"([Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Fragment::setAllowEnterTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowEnterTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setAllowReturnTransitionOverlap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowReturnTransitionOverlap",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setArguments(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setArguments",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setEnterSharedElementCallback(android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setEnterSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setEnterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setExitSharedElementCallback(android::app::SharedElementCallback arg0)
	{
		__thiz.callMethod<void>(
			"setExitSharedElementCallback",
			"(Landroid/app/SharedElementCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setExitTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setExitTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setHasOptionsMenu(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHasOptionsMenu",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setInitialSavedState(android::app::Fragment_SavedState arg0)
	{
		__thiz.callMethod<void>(
			"setInitialSavedState",
			"(Landroid/app/Fragment$SavedState;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setMenuVisibility(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMenuVisibility",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setReenterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReenterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setRetainInstance(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRetainInstance",
			"(Z)V",
			arg0
		);
	}
	void Fragment::setReturnTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setSharedElementEnterTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementEnterTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setSharedElementReturnTransition(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"setSharedElementReturnTransition",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::setTargetFragment(android::app::Fragment arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTargetFragment",
			"(Landroid/app/Fragment;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Fragment::setUserVisibleHint(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUserVisibleHint",
			"(Z)V",
			arg0
		);
	}
	jboolean Fragment::shouldShowRequestPermissionRationale(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Fragment::shouldShowRequestPermissionRationale(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowRequestPermissionRationale",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Fragment::startActivity(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Fragment::startActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Fragment::startActivityForResult(android::content::Intent arg0, jint arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startActivityForResult",
			"(Landroid/content/Intent;ILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Fragment::startIntentSenderForResult(android::content::IntentSender arg0, jint arg1, android::content::Intent arg2, jint arg3, jint arg4, jint arg5, android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"startIntentSenderForResult",
			"(Landroid/content/IntentSender;ILandroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void Fragment::startPostponedEnterTransition()
	{
		__thiz.callMethod<void>(
			"startPostponedEnterTransition",
			"()V"
		);
	}
	jstring Fragment::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Fragment::unregisterForContextMenu(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"unregisterForContextMenu",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app
