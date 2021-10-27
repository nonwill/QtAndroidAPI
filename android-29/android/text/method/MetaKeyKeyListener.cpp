#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./MetaKeyKeyListener.hpp"

namespace android::text::method
{
	// Fields
	jint MetaKeyKeyListener::META_ALT_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_ALT_LOCKED"
		);
	}
	jint MetaKeyKeyListener::META_ALT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_ALT_ON"
		);
	}
	jint MetaKeyKeyListener::META_CAP_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_CAP_LOCKED"
		);
	}
	jint MetaKeyKeyListener::META_SHIFT_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_SHIFT_ON"
		);
	}
	jint MetaKeyKeyListener::META_SYM_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_SYM_LOCKED"
		);
	}
	jint MetaKeyKeyListener::META_SYM_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_SYM_ON"
		);
	}
	
	MetaKeyKeyListener::MetaKeyKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MetaKeyKeyListener::MetaKeyKeyListener()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.MetaKeyKeyListener",
			"()V"
		);
	}
	
	// Methods
	jlong MetaKeyKeyListener::adjustMetaAfterKeypress(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"adjustMetaAfterKeypress",
			"(J)J",
			arg0
		);
	}
	void MetaKeyKeyListener::adjustMetaAfterKeypress(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.MetaKeyKeyListener",
			"adjustMetaAfterKeypress",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	void MetaKeyKeyListener::clearMetaKeyState(__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.MetaKeyKeyListener",
			"clearMetaKeyState",
			"(Landroid/text/Editable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint MetaKeyKeyListener::getMetaState(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint MetaKeyKeyListener::getMetaState(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint MetaKeyKeyListener::getMetaState(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(J)I",
			arg0
		);
	}
	jint MetaKeyKeyListener::getMetaState(jstring arg0, android::view::KeyEvent arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;Landroid/view/KeyEvent;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint MetaKeyKeyListener::getMetaState(const QString &arg0, android::view::KeyEvent arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;Landroid/view/KeyEvent;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint MetaKeyKeyListener::getMetaState(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint MetaKeyKeyListener::getMetaState(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint MetaKeyKeyListener::getMetaState(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(JI)I",
			arg0,
			arg1
		);
	}
	jint MetaKeyKeyListener::getMetaState(jstring arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;ILandroid/view/KeyEvent;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint MetaKeyKeyListener::getMetaState(const QString &arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;ILandroid/view/KeyEvent;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong MetaKeyKeyListener::handleKeyDown(jlong arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"handleKeyDown",
			"(JILandroid/view/KeyEvent;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jlong MetaKeyKeyListener::handleKeyUp(jlong arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"handleKeyUp",
			"(JILandroid/view/KeyEvent;)J",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean MetaKeyKeyListener::isMetaTracker(jstring arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.MetaKeyKeyListener",
			"isMetaTracker",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean MetaKeyKeyListener::isMetaTracker(const QString &arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.MetaKeyKeyListener",
			"isMetaTracker",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jboolean MetaKeyKeyListener::isSelectingMetaTracker(jstring arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.MetaKeyKeyListener",
			"isSelectingMetaTracker",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Z",
			arg0,
			arg1
		);
	}
	jboolean MetaKeyKeyListener::isSelectingMetaTracker(const QString &arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.MetaKeyKeyListener",
			"isSelectingMetaTracker",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jlong MetaKeyKeyListener::resetLockedMeta(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"resetLockedMeta",
			"(J)J",
			arg0
		);
	}
	void MetaKeyKeyListener::resetMetaState(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.MetaKeyKeyListener",
			"resetMetaState",
			"(Landroid/text/Spannable;)V",
			arg0.__jniObject().object()
		);
	}
	jlong MetaKeyKeyListener::clearMetaKeyState(jlong arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"clearMetaKeyState",
			"(JI)J",
			arg0,
			arg1
		);
	}
	void MetaKeyKeyListener::clearMetaKeyState(android::view::View arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"clearMetaKeyState",
			"(Landroid/view/View;Landroid/text/Editable;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean MetaKeyKeyListener::onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean MetaKeyKeyListener::onKeyUp(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
} // namespace android::text::method

