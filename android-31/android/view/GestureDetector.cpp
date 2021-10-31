#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./MotionEvent.hpp"
#include "./GestureDetector.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	GestureDetector::GestureDetector(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GestureDetector::GestureDetector(__JniBaseClass arg0)
		: __JniBaseClass(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.object()
		) {}
	GestureDetector::GestureDetector(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	GestureDetector::GestureDetector(__JniBaseClass arg0, android::os::Handler arg1)
		: __JniBaseClass(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		) {}
	GestureDetector::GestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2)
		: __JniBaseClass(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	GestureDetector::GestureDetector(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2, jboolean arg3)
		: __JniBaseClass(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jboolean GestureDetector::isLongpressEnabled()
	{
		return callMethod<jboolean>(
			"isLongpressEnabled",
			"()Z"
		);
	}
	jboolean GestureDetector::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean GestureDetector::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void GestureDetector::setContextClickListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setContextClickListener",
			"(Landroid/view/GestureDetector$OnContextClickListener;)V",
			arg0.object()
		);
	}
	void GestureDetector::setIsLongpressEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setIsLongpressEnabled",
			"(Z)V",
			arg0
		);
	}
	void GestureDetector::setOnDoubleTapListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDoubleTapListener",
			"(Landroid/view/GestureDetector$OnDoubleTapListener;)V",
			arg0.object()
		);
	}
} // namespace android::view
