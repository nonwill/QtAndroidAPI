#include "./invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"
#include "./Float.hpp"

namespace java::lang
{
	// Fields
	jint Float::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"BYTES"
		);
	}
	jint Float::MAX_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"MAX_EXPONENT"
		);
	}
	jfloat Float::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MAX_VALUE"
		);
	}
	jint Float::MIN_EXPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"MIN_EXPONENT"
		);
	}
	jfloat Float::MIN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_NORMAL"
		);
	}
	jfloat Float::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"MIN_VALUE"
		);
	}
	jfloat Float::NEGATIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"NEGATIVE_INFINITY"
		);
	}
	jfloat Float::NaN()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"NaN"
		);
	}
	jfloat Float::POSITIVE_INFINITY()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"java.lang.Float",
			"POSITIVE_INFINITY"
		);
	}
	jint Float::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Float",
			"SIZE"
		);
	}
	jclass Float::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Float",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	Float::Float(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Float::Float(jdouble &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(D)V",
			arg0
		);
	}
	Float::Float(jfloat &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(F)V",
			arg0
		);
	}
	Float::Float(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Float::Float(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Float",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Float::compare(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"compare",
			"(FF)I",
			arg0,
			arg1
		);
	}
	jint Float::floatToIntBits(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"floatToIntBits",
			"(F)I",
			arg0
		);
	}
	jint Float::floatToRawIntBits(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"floatToRawIntBits",
			"(F)I",
			arg0
		);
	}
	jint Float::hashCode(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Float",
			"hashCode",
			"(F)I",
			arg0
		);
	}
	jfloat Float::intBitsToFloat(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"intBitsToFloat",
			"(I)F",
			arg0
		);
	}
	jboolean Float::isFinite(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isFinite",
			"(F)Z",
			arg0
		);
	}
	jboolean Float::isInfinite(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isInfinite",
			"(F)Z",
			arg0
		);
	}
	jboolean Float::isNaN(jfloat arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Float",
			"isNaN",
			"(F)Z",
			arg0
		);
	}
	jfloat Float::max(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"max",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jfloat Float::min(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"min",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jfloat Float::parseFloat(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Float::parseFloat(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"parseFloat",
			"(Ljava/lang/String;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jfloat Float::sum(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"java.lang.Float",
			"sum",
			"(FF)F",
			arg0,
			arg1
		);
	}
	jstring Float::toHexString(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"toHexString",
			"(F)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Float::toString(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"toString",
			"(F)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Float::valueOf(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(F)Ljava/lang/Float;",
			arg0
		);
	}
	QAndroidJniObject Float::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0
		);
	}
	QAndroidJniObject Float::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Float",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyte Float::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Float::compareTo(java::lang::Float arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Float;)I",
			arg0.__jniObject().object()
		);
	}
	jint Float::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Float::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Float::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Float::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Float::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Float::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Float::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Float::isInfinite()
	{
		return __thiz.callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Float::isNaN()
	{
		return __thiz.callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Float::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	QAndroidJniObject Float::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return __thiz.callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Float;",
			arg0.__jniObject().object()
		);
	}
	jshort Float::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Float::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

