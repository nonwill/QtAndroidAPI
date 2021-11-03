#pragma once

#include "./ProgressBar.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class MotionEvent;
}
class JString;

namespace android::widget
{
	class AbsSeekBar : public android::widget::ProgressBar
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AbsSeekBar(const char *className, const char *sig, Ts...agv) : android::widget::ProgressBar(className, sig, std::forward<Ts>(agv)...) {}
		AbsSeekBar(QJniObject obj);
		
		// Constructors
		AbsSeekBar(android::content::Context arg0);
		AbsSeekBar(android::content::Context arg0, JObject arg1);
		AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2);
		AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		JString getAccessibilityClassName();
		jint getKeyProgressIncrement();
		jboolean getSplitTrack();
		android::graphics::drawable::Drawable getThumb();
		jint getThumbOffset();
		android::content::res::ColorStateList getThumbTintList();
		android::graphics::PorterDuff_Mode getThumbTintMode();
		android::graphics::drawable::Drawable getTickMark();
		android::content::res::ColorStateList getTickMarkTintList();
		android::graphics::PorterDuff_Mode getTickMarkTintMode();
		void jumpDrawablesToCurrentState();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		void onRtlPropertiesChanged(jint arg0);
		jboolean onTouchEvent(android::view::MotionEvent arg0);
		void setKeyProgressIncrement(jint arg0);
		void setMax(jint arg0);
		void setMin(jint arg0);
		void setSplitTrack(jboolean arg0);
		void setThumb(android::graphics::drawable::Drawable arg0);
		void setThumbOffset(jint arg0);
		void setThumbTintList(android::content::res::ColorStateList arg0);
		void setThumbTintMode(android::graphics::PorterDuff_Mode arg0);
		void setTickMark(android::graphics::drawable::Drawable arg0);
		void setTickMarkTintList(android::content::res::ColorStateList arg0);
		void setTickMarkTintMode(android::graphics::PorterDuff_Mode arg0);
	};
} // namespace android::widget

