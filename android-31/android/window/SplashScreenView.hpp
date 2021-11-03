#pragma once

#include "../widget/FrameLayout.hpp"

namespace android::view
{
	class View;
}
namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}

namespace android::window
{
	class SplashScreenView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SplashScreenView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		SplashScreenView(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::time::Duration getIconAnimationDuration();
		java::time::Instant getIconAnimationStart();
		android::view::View getIconView();
		void remove();
		void setAlpha(jfloat arg0);
	};
} // namespace android::window

