#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class View;
}

namespace android::widget
{
	class SlidingDrawer : public android::view::ViewGroup
	{
	public:
		// Fields
		static jint ORIENTATION_HORIZONTAL();
		static jint ORIENTATION_VERTICAL();
		
		SlidingDrawer(QAndroidJniObject obj);
		// Constructors
		SlidingDrawer(android::content::Context &arg0, __JniBaseClass &arg1);
		SlidingDrawer(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		SlidingDrawer(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		SlidingDrawer() = default;
		
		// Methods
		void animateClose();
		void animateOpen();
		void animateToggle();
		void close();
		jstring getAccessibilityClassName();
		QAndroidJniObject getContent();
		QAndroidJniObject getHandle();
		jboolean isMoving();
		jboolean isOpened();
		void lock();
		jboolean onInterceptTouchEvent(android::view::MotionEvent arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void open();
		void setOnDrawerCloseListener(__JniBaseClass arg0);
		void setOnDrawerOpenListener(__JniBaseClass arg0);
		void setOnDrawerScrollListener(__JniBaseClass arg0);
		void toggle();
		void unlock();
	};
} // namespace android::widget

