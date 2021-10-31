#include "./invoke/MethodHandles_Lookup.hpp"
#include "../util/Optional.hpp"
#include "./Double.hpp"

namespace java::lang
{
	// Fields
	jint Double::BYTES()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"BYTES"
		);
	}
	jint Double::MAX_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"MAX_EXPONENT"
		);
	}
	jdouble Double::MAX_VALUE()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MAX_VALUE"
		);
	}
	jint Double::MIN_EXPONENT()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"MIN_EXPONENT"
		);
	}
	jdouble Double::MIN_NORMAL()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_NORMAL"
		);
	}
	jdouble Double::MIN_VALUE()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"MIN_VALUE"
		);
	}
	jdouble Double::NEGATIVE_INFINITY()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"NEGATIVE_INFINITY"
		);
	}
	jdouble Double::NaN()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"NaN"
		);
	}
	jdouble Double::POSITIVE_INFINITY()
	{
		return getStaticField<jdouble>(
			"java.lang.Double",
			"POSITIVE_INFINITY"
		);
	}
	jint Double::SIZE()
	{
		return getStaticField<jint>(
			"java.lang.Double",
			"SIZE"
		);
	}
	jclass Double::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Double",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// QJniObject forward
	Double::Double(QJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Double::Double(jdouble arg0)
		: java::lang::Number(
			"java.lang.Double",
			"(D)V",
			arg0
		) {}
	Double::Double(jstring arg0)
		: java::lang::Number(
			"java.lang.Double",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint Double::compare(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jint>(
			"java.lang.Double",
			"compare",
			"(DD)I",
			arg0,
			arg1
		);
	}
	jlong Double::doubleToLongBits(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToLongBits",
			"(D)J",
			arg0
		);
	}
	jlong Double::doubleToRawLongBits(jdouble arg0)
	{
		return callStaticMethod<jlong>(
			"java.lang.Double",
			"doubleToRawLongBits",
			"(D)J",
			arg0
		);
	}
	jint Double::hashCode(jdouble arg0)
	{
		return callStaticMethod<jint>(
			"java.lang.Double",
			"hashCode",
			"(D)I",
			arg0
		);
	}
	jboolean Double::isFinite(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isFinite",
			"(D)Z",
			arg0
		);
	}
	jboolean Double::isInfinite(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isInfinite",
			"(D)Z",
			arg0
		);
	}
	jboolean Double::isNaN(jdouble arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Double",
			"isNaN",
			"(D)Z",
			arg0
		);
	}
	jdouble Double::longBitsToDouble(jlong arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"longBitsToDouble",
			"(J)D",
			arg0
		);
	}
	jdouble Double::max(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"max",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Double::min(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"min",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jdouble Double::parseDouble(jstring arg0)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"parseDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble Double::sum(jdouble arg0, jdouble arg1)
	{
		return callStaticMethod<jdouble>(
			"java.lang.Double",
			"sum",
			"(DD)D",
			arg0,
			arg1
		);
	}
	jstring Double::toHexString(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"toHexString",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Double::toString(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"toString",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	java::lang::Double Double::valueOf(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(D)Ljava/lang/Double;",
			arg0
		);
	}
	java::lang::Double Double::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Double",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0
		);
	}
	jbyte Double::byteValue()
	{
		return callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Double::compareTo(java::lang::Double arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Double;)I",
			arg0.object()
		);
	}
	jint Double::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	java::util::Optional Double::describeConstable()
	{
		return callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Double::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Double::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Double::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Double::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Double::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Double::isInfinite()
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Double::isNaN()
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jlong Double::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	java::lang::Double Double::resolveConstantDesc(java::lang::invoke::MethodHandles_Lookup arg0)
	{
		return callObjectMethod(
			"resolveConstantDesc",
			"(Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/Double;",
			arg0.object()
		);
	}
	jshort Double::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Double::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

