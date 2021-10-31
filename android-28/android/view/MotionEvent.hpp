#pragma once

#include "../../__JniBaseClass.hpp"
#include "./InputEvent.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class MotionEvent_PointerCoords;
}
namespace android::view
{
	class MotionEvent_PointerProperties;
}

namespace android::view
{
	class MotionEvent : public android::view::InputEvent
	{
	public:
		// Fields
		static jint ACTION_BUTTON_PRESS();
		static jint ACTION_BUTTON_RELEASE();
		static jint ACTION_CANCEL();
		static jint ACTION_DOWN();
		static jint ACTION_HOVER_ENTER();
		static jint ACTION_HOVER_EXIT();
		static jint ACTION_HOVER_MOVE();
		static jint ACTION_MASK();
		static jint ACTION_MOVE();
		static jint ACTION_OUTSIDE();
		static jint ACTION_POINTER_1_DOWN();
		static jint ACTION_POINTER_1_UP();
		static jint ACTION_POINTER_2_DOWN();
		static jint ACTION_POINTER_2_UP();
		static jint ACTION_POINTER_3_DOWN();
		static jint ACTION_POINTER_3_UP();
		static jint ACTION_POINTER_DOWN();
		static jint ACTION_POINTER_ID_MASK();
		static jint ACTION_POINTER_ID_SHIFT();
		static jint ACTION_POINTER_INDEX_MASK();
		static jint ACTION_POINTER_INDEX_SHIFT();
		static jint ACTION_POINTER_UP();
		static jint ACTION_SCROLL();
		static jint ACTION_UP();
		static jint AXIS_BRAKE();
		static jint AXIS_DISTANCE();
		static jint AXIS_GAS();
		static jint AXIS_GENERIC_1();
		static jint AXIS_GENERIC_10();
		static jint AXIS_GENERIC_11();
		static jint AXIS_GENERIC_12();
		static jint AXIS_GENERIC_13();
		static jint AXIS_GENERIC_14();
		static jint AXIS_GENERIC_15();
		static jint AXIS_GENERIC_16();
		static jint AXIS_GENERIC_2();
		static jint AXIS_GENERIC_3();
		static jint AXIS_GENERIC_4();
		static jint AXIS_GENERIC_5();
		static jint AXIS_GENERIC_6();
		static jint AXIS_GENERIC_7();
		static jint AXIS_GENERIC_8();
		static jint AXIS_GENERIC_9();
		static jint AXIS_HAT_X();
		static jint AXIS_HAT_Y();
		static jint AXIS_HSCROLL();
		static jint AXIS_LTRIGGER();
		static jint AXIS_ORIENTATION();
		static jint AXIS_PRESSURE();
		static jint AXIS_RELATIVE_X();
		static jint AXIS_RELATIVE_Y();
		static jint AXIS_RTRIGGER();
		static jint AXIS_RUDDER();
		static jint AXIS_RX();
		static jint AXIS_RY();
		static jint AXIS_RZ();
		static jint AXIS_SCROLL();
		static jint AXIS_SIZE();
		static jint AXIS_THROTTLE();
		static jint AXIS_TILT();
		static jint AXIS_TOOL_MAJOR();
		static jint AXIS_TOOL_MINOR();
		static jint AXIS_TOUCH_MAJOR();
		static jint AXIS_TOUCH_MINOR();
		static jint AXIS_VSCROLL();
		static jint AXIS_WHEEL();
		static jint AXIS_X();
		static jint AXIS_Y();
		static jint AXIS_Z();
		static jint BUTTON_BACK();
		static jint BUTTON_FORWARD();
		static jint BUTTON_PRIMARY();
		static jint BUTTON_SECONDARY();
		static jint BUTTON_STYLUS_PRIMARY();
		static jint BUTTON_STYLUS_SECONDARY();
		static jint BUTTON_TERTIARY();
		static __JniBaseClass CREATOR();
		static jint EDGE_BOTTOM();
		static jint EDGE_LEFT();
		static jint EDGE_RIGHT();
		static jint EDGE_TOP();
		static jint FLAG_WINDOW_IS_OBSCURED();
		static jint INVALID_POINTER_ID();
		static jint TOOL_TYPE_ERASER();
		static jint TOOL_TYPE_FINGER();
		static jint TOOL_TYPE_MOUSE();
		static jint TOOL_TYPE_STYLUS();
		static jint TOOL_TYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MotionEvent(const char *className, const char *sig, Ts...agv) : android::view::InputEvent(className, sig, std::forward<Ts>(agv)...) {}
		MotionEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring actionToString(jint arg0);
		static jint axisFromString(jstring arg0);
		static jstring axisToString(jint arg0);
		static android::view::MotionEvent obtain(android::view::MotionEvent arg0);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jint arg5);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jintArray arg4, jarray arg5, jint arg6, jfloat arg7, jfloat arg8, jint arg9, jint arg10, jint arg11, jint arg12);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jint arg8, jfloat arg9, jfloat arg10, jint arg11, jint arg12);
		static android::view::MotionEvent obtain(jlong arg0, jlong arg1, jint arg2, jint arg3, jarray arg4, jarray arg5, jint arg6, jint arg7, jfloat arg8, jfloat arg9, jint arg10, jint arg11, jint arg12, jint arg13);
		static android::view::MotionEvent obtainNoHistory(android::view::MotionEvent arg0);
		void addBatch(jlong arg0, jarray arg1, jint arg2);
		void addBatch(jlong arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jint arg5);
		jint findPointerIndex(jint arg0);
		jint getAction();
		jint getActionButton();
		jint getActionIndex();
		jint getActionMasked();
		jfloat getAxisValue(jint arg0);
		jfloat getAxisValue(jint arg0, jint arg1);
		jint getButtonState();
		jint getDeviceId();
		jlong getDownTime();
		jint getEdgeFlags();
		jlong getEventTime();
		jint getFlags();
		jfloat getHistoricalAxisValue(jint arg0, jint arg1);
		jfloat getHistoricalAxisValue(jint arg0, jint arg1, jint arg2);
		jlong getHistoricalEventTime(jint arg0);
		jfloat getHistoricalOrientation(jint arg0);
		jfloat getHistoricalOrientation(jint arg0, jint arg1);
		void getHistoricalPointerCoords(jint arg0, jint arg1, android::view::MotionEvent_PointerCoords arg2);
		jfloat getHistoricalPressure(jint arg0);
		jfloat getHistoricalPressure(jint arg0, jint arg1);
		jfloat getHistoricalSize(jint arg0);
		jfloat getHistoricalSize(jint arg0, jint arg1);
		jfloat getHistoricalToolMajor(jint arg0);
		jfloat getHistoricalToolMajor(jint arg0, jint arg1);
		jfloat getHistoricalToolMinor(jint arg0);
		jfloat getHistoricalToolMinor(jint arg0, jint arg1);
		jfloat getHistoricalTouchMajor(jint arg0);
		jfloat getHistoricalTouchMajor(jint arg0, jint arg1);
		jfloat getHistoricalTouchMinor(jint arg0);
		jfloat getHistoricalTouchMinor(jint arg0, jint arg1);
		jfloat getHistoricalX(jint arg0);
		jfloat getHistoricalX(jint arg0, jint arg1);
		jfloat getHistoricalY(jint arg0);
		jfloat getHistoricalY(jint arg0, jint arg1);
		jint getHistorySize();
		jint getMetaState();
		jfloat getOrientation();
		jfloat getOrientation(jint arg0);
		void getPointerCoords(jint arg0, android::view::MotionEvent_PointerCoords arg1);
		jint getPointerCount();
		jint getPointerId(jint arg0);
		void getPointerProperties(jint arg0, android::view::MotionEvent_PointerProperties arg1);
		jfloat getPressure();
		jfloat getPressure(jint arg0);
		jfloat getRawX();
		jfloat getRawY();
		jfloat getSize();
		jfloat getSize(jint arg0);
		jint getSource();
		jfloat getToolMajor();
		jfloat getToolMajor(jint arg0);
		jfloat getToolMinor();
		jfloat getToolMinor(jint arg0);
		jint getToolType(jint arg0);
		jfloat getTouchMajor();
		jfloat getTouchMajor(jint arg0);
		jfloat getTouchMinor();
		jfloat getTouchMinor(jint arg0);
		jfloat getX();
		jfloat getX(jint arg0);
		jfloat getXPrecision();
		jfloat getY();
		jfloat getY(jint arg0);
		jfloat getYPrecision();
		jboolean isButtonPressed(jint arg0);
		void offsetLocation(jfloat arg0, jfloat arg1);
		void recycle();
		void setAction(jint arg0);
		void setEdgeFlags(jint arg0);
		void setLocation(jfloat arg0, jfloat arg1);
		void setSource(jint arg0);
		jstring toString();
		void transform(android::graphics::Matrix arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

