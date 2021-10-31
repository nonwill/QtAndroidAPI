#include "./AbstractInputMethodService.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractInputMethodService_AbstractInputMethodSessionImpl::AbstractInputMethodService_AbstractInputMethodSessionImpl(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AbstractInputMethodService_AbstractInputMethodSessionImpl::AbstractInputMethodService_AbstractInputMethodSessionImpl(android::inputmethodservice::AbstractInputMethodService arg0)
		: __JniBaseClass(
			"android.inputmethodservice.AbstractInputMethodService$AbstractInputMethodSessionImpl",
			"(Landroid/inputmethodservice/AbstractInputMethodService;)V",
			arg0.object()
		) {}
	
	// Methods
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchGenericMotionEvent(jint arg0, android::view::MotionEvent arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"dispatchGenericMotionEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchKeyEvent(jint arg0, android::view::KeyEvent arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"dispatchKeyEvent",
			"(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::dispatchTrackballEvent(jint arg0, android::view::MotionEvent arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"dispatchTrackballEvent",
			"(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean AbstractInputMethodService_AbstractInputMethodSessionImpl::isRevoked()
	{
		return callMethod<jboolean>(
			"isRevoked",
			"()Z"
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::revokeSelf()
	{
		callMethod<void>(
			"revokeSelf",
			"()V"
		);
	}
	void AbstractInputMethodService_AbstractInputMethodSessionImpl::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::inputmethodservice
