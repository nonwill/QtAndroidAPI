#include "./NumericShaper_Range.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./NumericShaper.hpp"

namespace java::awt::font
{
	// Fields
	jint NumericShaper::ALL_RANGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ALL_RANGES"
		);
	}
	jint NumericShaper::ARABIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ARABIC"
		);
	}
	jint NumericShaper::BENGALI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"BENGALI"
		);
	}
	jint NumericShaper::DEVANAGARI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"DEVANAGARI"
		);
	}
	jint NumericShaper::EASTERN_ARABIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EASTERN_ARABIC"
		);
	}
	jint NumericShaper::ETHIOPIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ETHIOPIC"
		);
	}
	jint NumericShaper::EUROPEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EUROPEAN"
		);
	}
	jint NumericShaper::GUJARATI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GUJARATI"
		);
	}
	jint NumericShaper::GURMUKHI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GURMUKHI"
		);
	}
	jint NumericShaper::KANNADA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KANNADA"
		);
	}
	jint NumericShaper::KHMER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KHMER"
		);
	}
	jint NumericShaper::LAO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"LAO"
		);
	}
	jint NumericShaper::MALAYALAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MALAYALAM"
		);
	}
	jint NumericShaper::MONGOLIAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MONGOLIAN"
		);
	}
	jint NumericShaper::MYANMAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MYANMAR"
		);
	}
	jint NumericShaper::ORIYA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ORIYA"
		);
	}
	jint NumericShaper::TAMIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TAMIL"
		);
	}
	jint NumericShaper::TELUGU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TELUGU"
		);
	}
	jint NumericShaper::THAI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"THAI"
		);
	}
	jint NumericShaper::TIBETAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TIBETAN"
		);
	}
	
	NumericShaper::NumericShaper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NumericShaper::getContextualShaper(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;)Ljava/awt/font/NumericShaper;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(II)Ljava/awt/font/NumericShaper;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(__JniBaseClass arg0, java::awt::font::NumericShaper_Range arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NumericShaper::getShaper(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	QAndroidJniObject NumericShaper::getShaper(java::awt::font::NumericShaper_Range arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.__jniObject().object()
		);
	}
	jboolean NumericShaper::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject NumericShaper::getRangeSet()
	{
		return __thiz.callObjectMethod(
			"getRangeSet",
			"()Ljava/util/Set;"
		);
	}
	jint NumericShaper::getRanges()
	{
		return __thiz.callMethod<jint>(
			"getRanges",
			"()I"
		);
	}
	jint NumericShaper::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NumericShaper::isContextual()
	{
		return __thiz.callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"shape",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"shape",
			"([CIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2, java::awt::font::NumericShaper_Range arg3)
	{
		__thiz.callMethod<void>(
			"shape",
			"([CIILjava/awt/font/NumericShaper$Range;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jstring NumericShaper::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::awt::font
