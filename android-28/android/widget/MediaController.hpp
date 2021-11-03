#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
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
	class View;
}

namespace android::widget
{
	class MediaController : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		MediaController(QJniObject obj);
		
		// Constructors
		MediaController(android::content::Context arg0);
		MediaController(android::content::Context arg0, JObject arg1);
		MediaController(android::content::Context arg0, jboolean arg1);
		
		// Methods
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		jstring getAccessibilityClassName();
		void hide();
		jboolean isShowing();
		void onFinishInflate();
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		jboolean onTrackballEvent(android::view::MotionEvent arg0);
		void setAnchorView(android::view::View arg0);
		void setEnabled(jboolean arg0);
		void setMediaPlayer(JObject arg0);
		void setPrevNextListeners(JObject arg0, JObject arg1);
		void show();
		void show(jint arg0);
	};
} // namespace android::widget

