#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Transition.hpp"

namespace android::content
{
	class Context;
}
namespace android::transition
{
	class PathMotion;
}
namespace android::transition
{
	class Transition;
}
namespace android::transition
{
	class Transition_EpicenterCallback;
}
namespace android::transition
{
	class TransitionPropagation;
}
namespace android::transition
{
	class TransitionValues;
}
namespace android::view
{
	class View;
}

namespace android::transition
{
	class TransitionSet : public android::transition::Transition
	{
	public:
		// Fields
		static jint ORDERING_SEQUENTIAL();
		static jint ORDERING_TOGETHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionSet(const char *className, const char *sig, Ts...agv) : android::transition::Transition(className, sig, std::forward<Ts>(agv)...) {}
		TransitionSet(QJniObject obj);
		
		// Constructors
		TransitionSet();
		TransitionSet(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		android::transition::TransitionSet addListener(__JniBaseClass arg0);
		android::transition::TransitionSet addTarget(android::view::View arg0);
		android::transition::TransitionSet addTarget(jint arg0);
		android::transition::TransitionSet addTarget(jclass arg0);
		android::transition::TransitionSet addTarget(jstring arg0);
		android::transition::TransitionSet addTransition(android::transition::Transition arg0);
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		android::transition::TransitionSet clone();
		android::transition::Transition excludeTarget(android::view::View arg0, jboolean arg1);
		android::transition::Transition excludeTarget(jint arg0, jboolean arg1);
		android::transition::Transition excludeTarget(jclass arg0, jboolean arg1);
		android::transition::Transition excludeTarget(jstring arg0, jboolean arg1);
		jint getOrdering();
		android::transition::Transition getTransitionAt(jint arg0);
		jint getTransitionCount();
		android::transition::TransitionSet removeListener(__JniBaseClass arg0);
		android::transition::TransitionSet removeTarget(android::view::View arg0);
		android::transition::TransitionSet removeTarget(jint arg0);
		android::transition::TransitionSet removeTarget(jclass arg0);
		android::transition::TransitionSet removeTarget(jstring arg0);
		android::transition::TransitionSet removeTransition(android::transition::Transition arg0);
		android::transition::TransitionSet setDuration(jlong arg0);
		void setEpicenterCallback(android::transition::Transition_EpicenterCallback arg0);
		android::transition::TransitionSet setInterpolator(__JniBaseClass arg0);
		android::transition::TransitionSet setOrdering(jint arg0);
		void setPathMotion(android::transition::PathMotion arg0);
		void setPropagation(android::transition::TransitionPropagation arg0);
		android::transition::TransitionSet setStartDelay(jlong arg0);
	};
} // namespace android::transition

