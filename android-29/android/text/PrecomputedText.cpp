#include "../graphics/Rect.hpp"
#include "./PrecomputedText_Params.hpp"
#include "./PrecomputedText.hpp"

namespace android::text
{
	// Fields
	
	PrecomputedText::PrecomputedText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PrecomputedText::create(jstring arg0, android::text::PrecomputedText_Params arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.PrecomputedText",
			"create",
			"(Ljava/lang/CharSequence;Landroid/text/PrecomputedText$Params;)Landroid/text/PrecomputedText;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PrecomputedText::create(const QString &arg0, android::text::PrecomputedText_Params arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.PrecomputedText",
			"create",
			"(Ljava/lang/CharSequence;Landroid/text/PrecomputedText$Params;)Landroid/text/PrecomputedText;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jchar PrecomputedText::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void PrecomputedText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint PrecomputedText::getParagraphCount()
	{
		return __thiz.callMethod<jint>(
			"getParagraphCount",
			"()I"
		);
	}
	jint PrecomputedText::getParagraphEnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphEnd",
			"(I)I",
			arg0
		);
	}
	jint PrecomputedText::getParagraphStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphStart",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText::getParams()
	{
		return __thiz.callObjectMethod(
			"getParams",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	jint PrecomputedText::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint PrecomputedText::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint PrecomputedText::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray PrecomputedText::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jfloat PrecomputedText::getWidth(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint PrecomputedText::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint PrecomputedText::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void PrecomputedText::removeSpan(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void PrecomputedText::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring PrecomputedText::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring PrecomputedText::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text
