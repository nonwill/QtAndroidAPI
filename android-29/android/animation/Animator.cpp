#include "../../java/util/ArrayList.hpp"
#include "./Animator.hpp"

namespace android::animation
{
	// Fields
	jlong Animator::DURATION_INFINITE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.animation.Animator",
			"DURATION_INFINITE"
		);
	}
	
	Animator::Animator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Animator::Animator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.Animator",
			"()V"
		);
	}
	
	// Methods
	void Animator::addListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Animator::addPauseListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Animator::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject Animator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/Animator;"
		);
	}
	void Animator::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	jlong Animator::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	QAndroidJniObject Animator::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	QAndroidJniObject Animator::getListeners()
	{
		return __thiz.callObjectMethod(
			"getListeners",
			"()Ljava/util/ArrayList;"
		);
	}
	jlong Animator::getStartDelay()
	{
		return __thiz.callMethod<jlong>(
			"getStartDelay",
			"()J"
		);
	}
	jlong Animator::getTotalDuration()
	{
		return __thiz.callMethod<jlong>(
			"getTotalDuration",
			"()J"
		);
	}
	jboolean Animator::isPaused()
	{
		return __thiz.callMethod<jboolean>(
			"isPaused",
			"()Z"
		);
	}
	jboolean Animator::isRunning()
	{
		return __thiz.callMethod<jboolean>(
			"isRunning",
			"()Z"
		);
	}
	jboolean Animator::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Animator::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void Animator::removeAllListeners()
	{
		__thiz.callMethod<void>(
			"removeAllListeners",
			"()V"
		);
	}
	void Animator::removeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeListener",
			"(Landroid/animation/Animator$AnimatorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Animator::removePauseListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePauseListener",
			"(Landroid/animation/Animator$AnimatorPauseListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Animator::resume()
	{
		__thiz.callMethod<void>(
			"resume",
			"()V"
		);
	}
	QAndroidJniObject Animator::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/Animator;",
			arg0
		);
	}
	void Animator::setInterpolator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void Animator::setStartDelay(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartDelay",
			"(J)V",
			arg0
		);
	}
	void Animator::setTarget(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Animator::setupEndValues()
	{
		__thiz.callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void Animator::setupStartValues()
	{
		__thiz.callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void Animator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
} // namespace android::animation
