#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class View;
}
namespace android::view::animation
{
	class Animation;
}
namespace android::view::animation
{
	class LayoutAnimationController_AnimationParameters;
}
namespace java::util
{
	class Random;
}

namespace android::view::animation
{
	class LayoutAnimationController : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORDER_NORMAL();
		static jint ORDER_RANDOM();
		static jint ORDER_REVERSE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LayoutAnimationController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LayoutAnimationController(QAndroidJniObject obj);
		
		// Constructors
		LayoutAnimationController(android::view::animation::Animation arg0);
		LayoutAnimationController(android::content::Context arg0, __JniBaseClass arg1);
		LayoutAnimationController(android::view::animation::Animation arg0, jfloat arg1);
		
		// Methods
		android::view::animation::Animation getAnimation();
		android::view::animation::Animation getAnimationForView(android::view::View arg0);
		jfloat getDelay();
		__JniBaseClass getInterpolator();
		jint getOrder();
		jboolean isDone();
		void setAnimation(android::view::animation::Animation arg0);
		void setAnimation(android::content::Context arg0, jint arg1);
		void setDelay(jfloat arg0);
		void setInterpolator(__JniBaseClass arg0);
		void setInterpolator(android::content::Context arg0, jint arg1);
		void setOrder(jint arg0);
		void start();
		jboolean willOverlap();
	};
} // namespace android::view::animation
