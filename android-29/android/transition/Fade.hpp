#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Transition.hpp"
#include "./Visibility.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::content
{
	class Context;
}
namespace android::transition
{
	class TransitionValues;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class Fade : public android::transition::Visibility
	{
	public:
		// Fields
		static jint IN();
		static jint OUT();
		
		Fade(QAndroidJniObject obj);
		// Constructors
		Fade();
		Fade(jint &arg0);
		Fade(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
		void captureStartValues(android::transition::TransitionValues arg0);
		QAndroidJniObject onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		QAndroidJniObject onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
	};
} // namespace android::transition

