#include "./KeyEvent.hpp"
#include "../../JObject.hpp"
#include "./KeyEvent_DispatcherState.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	KeyEvent_DispatcherState::KeyEvent_DispatcherState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyEvent_DispatcherState::KeyEvent_DispatcherState()
		: JObject(
			"android.view.KeyEvent$DispatcherState",
			"()V"
		) {}
	
	// Methods
	void KeyEvent_DispatcherState::handleUpEvent(android::view::KeyEvent arg0)
	{
		callMethod<void>(
			"handleUpEvent",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	jboolean KeyEvent_DispatcherState::isTracking(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"isTracking",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void KeyEvent_DispatcherState::performedLongPress(android::view::KeyEvent arg0)
	{
		callMethod<void>(
			"performedLongPress",
			"(Landroid/view/KeyEvent;)V",
			arg0.object()
		);
	}
	void KeyEvent_DispatcherState::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void KeyEvent_DispatcherState::reset(JObject arg0)
	{
		callMethod<void>(
			"reset",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void KeyEvent_DispatcherState::startTracking(android::view::KeyEvent arg0, JObject arg1)
	{
		callMethod<void>(
			"startTracking",
			"(Landroid/view/KeyEvent;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
} // namespace android::view

