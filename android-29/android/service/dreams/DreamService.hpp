#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::view
{
	class ActionMode;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class SearchEvent;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup_LayoutParams;
}
namespace android::view
{
	class Window;
}
namespace android::view
{
	class WindowManager_LayoutParams;
}
namespace android::view::accessibility
{
	class AccessibilityEvent;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::service::dreams
{
	class DreamService : public android::app::Service
	{
	public:
		// Fields
		static jstring DREAM_META_DATA();
		static jstring SERVICE_INTERFACE();
		
		DreamService(QAndroidJniObject obj);
		// Constructors
		DreamService();
		
		// Methods
		void addContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		jboolean dispatchGenericMotionEvent(android::view::MotionEvent arg0);
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jboolean dispatchKeyShortcutEvent(android::view::KeyEvent arg0);
		jboolean dispatchPopulateAccessibilityEvent(android::view::accessibility::AccessibilityEvent arg0);
		jboolean dispatchTouchEvent(android::view::MotionEvent arg0);
		jboolean dispatchTrackballEvent(android::view::MotionEvent arg0);
		QAndroidJniObject findViewById(jint arg0);
		void finish();
		QAndroidJniObject getWindow();
		QAndroidJniObject getWindowManager();
		jboolean isFullscreen();
		jboolean isInteractive();
		jboolean isScreenBright();
		void onActionModeFinished(android::view::ActionMode arg0);
		void onActionModeStarted(android::view::ActionMode arg0);
		void onAttachedToWindow();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onContentChanged();
		void onCreate();
		jboolean onCreatePanelMenu(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject onCreatePanelView(jint arg0);
		void onDestroy();
		void onDetachedFromWindow();
		void onDreamingStarted();
		void onDreamingStopped();
		jboolean onMenuItemSelected(jint arg0, __JniBaseClass arg1);
		jboolean onMenuOpened(jint arg0, __JniBaseClass arg1);
		void onPanelClosed(jint arg0, __JniBaseClass arg1);
		jboolean onPreparePanel(jint arg0, android::view::View arg1, __JniBaseClass arg2);
		jboolean onSearchRequested();
		jboolean onSearchRequested(android::view::SearchEvent arg0);
		void onWakeUp();
		void onWindowAttributesChanged(android::view::WindowManager_LayoutParams arg0);
		void onWindowFocusChanged(jboolean arg0);
		QAndroidJniObject onWindowStartingActionMode(__JniBaseClass arg0);
		QAndroidJniObject onWindowStartingActionMode(__JniBaseClass arg0, jint arg1);
		QAndroidJniObject requireViewById(jint arg0);
		void setContentView(android::view::View arg0);
		void setContentView(jint arg0);
		void setContentView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1);
		void setFullscreen(jboolean arg0);
		void setInteractive(jboolean arg0);
		void setScreenBright(jboolean arg0);
		void wakeUp();
	};
} // namespace android::service::dreams

