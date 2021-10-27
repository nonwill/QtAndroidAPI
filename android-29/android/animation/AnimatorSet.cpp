#include "./Animator.hpp"
#include "./AnimatorSet_Builder.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./AnimatorSet.hpp"

namespace android::animation
{
	// Fields
	
	AnimatorSet::AnimatorSet(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimatorSet::AnimatorSet()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorSet",
			"()V"
		);
	}
	
	// Methods
	void AnimatorSet::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject AnimatorSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/AnimatorSet;"
		);
	}
	void AnimatorSet::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	QAndroidJniObject AnimatorSet::getChildAnimations()
	{
		return __thiz.callObjectMethod(
			"getChildAnimations",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong AnimatorSet::getCurrentPlayTime()
	{
		return __thiz.callMethod<jlong>(
			"getCurrentPlayTime",
			"()J"
		);
	}
	jlong AnimatorSet::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject AnimatorSet::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jlong AnimatorSet::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong AnimatorSet::getTotalDuration()
	{
		return __thiz.callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jboolean AnimatorSet::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean AnimatorSet::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void AnimatorSet::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	QAndroidJniObject AnimatorSet::play(android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"play",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
	void AnimatorSet::playSequentially(jarray arg0)
	{
		__thiz.callMethod<void>(
			"playSequentially",
			"([Landroid/animation/Animator;)V",
			arg0
		);
	}
	void AnimatorSet::playSequentially(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"playSequentially",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorSet::playTogether(jarray arg0)
	{
		__thiz.callMethod<void>(
			"playTogether",
			"([Landroid/animation/Animator;)V",
			arg0
		);
	}
	void AnimatorSet::playTogether(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"playTogether",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorSet::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	void AnimatorSet::reverse()
	{
		__thiz.callMethod<void>(
			"reverse",
			"()V"
		);
	}
	void AnimatorSet::setCurrentPlayTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject AnimatorSet::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/AnimatorSet;",
			arg0
		);
	}
	void AnimatorSet::setInterpolator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorSet::setStartDelay(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void AnimatorSet::setTarget(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AnimatorSet::setupEndValues()
	{
		__thiz.callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void AnimatorSet::setupStartValues()
	{
		__thiz.callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void AnimatorSet::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	jstring AnimatorSet::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::animation
