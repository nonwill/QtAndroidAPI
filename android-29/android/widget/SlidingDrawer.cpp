#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./SlidingDrawer.hpp"

namespace android::widget
{
	// Fields
	jint SlidingDrawer::ORIENTATION_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_HORIZONTAL"
		);
	}
	jint SlidingDrawer::ORIENTATION_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_VERTICAL"
		);
	}
	
	SlidingDrawer::SlidingDrawer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SlidingDrawer::SlidingDrawer(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	SlidingDrawer::SlidingDrawer(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	SlidingDrawer::SlidingDrawer(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void SlidingDrawer::animateClose()
	{
		__thiz.callMethod<void>(
			"animateClose",
			"()V"
		);
	}
	void SlidingDrawer::animateOpen()
	{
		__thiz.callMethod<void>(
			"animateOpen",
			"()V"
		);
	}
	void SlidingDrawer::animateToggle()
	{
		__thiz.callMethod<void>(
			"animateToggle",
			"()V"
		);
	}
	void SlidingDrawer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring SlidingDrawer::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject SlidingDrawer::getContent()
	{
		return __thiz.callObjectMethod(
			"getContent",
			"()Landroid/view/View;"
		);
	}
	QAndroidJniObject SlidingDrawer::getHandle()
	{
		return __thiz.callObjectMethod(
			"getHandle",
			"()Landroid/view/View;"
		);
	}
	jboolean SlidingDrawer::isMoving()
	{
		return __thiz.callMethod<jboolean>(
			"isMoving",
			"()Z"
		);
	}
	jboolean SlidingDrawer::isOpened()
	{
		return __thiz.callMethod<jboolean>(
			"isOpened",
			"()Z"
		);
	}
	void SlidingDrawer::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	jboolean SlidingDrawer::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean SlidingDrawer::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void SlidingDrawer::open()
	{
		__thiz.callMethod<void>(
			"open",
			"()V"
		);
	}
	void SlidingDrawer::setOnDrawerCloseListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrawerCloseListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SlidingDrawer::setOnDrawerOpenListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrawerOpenListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SlidingDrawer::setOnDrawerScrollListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnDrawerScrollListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V",
			arg0.__jniObject().object()
		);
	}
	void SlidingDrawer::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V"
		);
	}
	void SlidingDrawer::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::widget
