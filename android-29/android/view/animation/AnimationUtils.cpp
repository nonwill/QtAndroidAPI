#include "../../content/Context.hpp"
#include "./Animation.hpp"
#include "./LayoutAnimationController.hpp"
#include "./AnimationUtils.hpp"

namespace android::view::animation
{
	// Fields
	
	AnimationUtils::AnimationUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimationUtils::AnimationUtils()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnimationUtils",
			"()V"
		);
	}
	
	// Methods
	jlong AnimationUtils::currentAnimationTimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.view.animation.AnimationUtils",
			"currentAnimationTimeMillis",
			"()J"
		);
	}
	QAndroidJniObject AnimationUtils::loadAnimation(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/Animation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AnimationUtils::loadInterpolator(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadInterpolator",
			"(Landroid/content/Context;I)Landroid/view/animation/Interpolator;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AnimationUtils::loadLayoutAnimation(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"loadLayoutAnimation",
			"(Landroid/content/Context;I)Landroid/view/animation/LayoutAnimationController;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AnimationUtils::makeInAnimation(android::content::Context arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AnimationUtils::makeInChildBottomAnimation(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeInChildBottomAnimation",
			"(Landroid/content/Context;)Landroid/view/animation/Animation;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimationUtils::makeOutAnimation(android::content::Context arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.animation.AnimationUtils",
			"makeOutAnimation",
			"(Landroid/content/Context;Z)Landroid/view/animation/Animation;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::animation
