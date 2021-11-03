#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Rational.hpp"

namespace android::util
{
	// Fields
	android::util::Rational Rational::NEGATIVE_INFINITY()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"NEGATIVE_INFINITY",
			"Landroid/util/Rational;"
		);
	}
	android::util::Rational Rational::NaN()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"NaN",
			"Landroid/util/Rational;"
		);
	}
	android::util::Rational Rational::POSITIVE_INFINITY()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"POSITIVE_INFINITY",
			"Landroid/util/Rational;"
		);
	}
	android::util::Rational Rational::ZERO()
	{
		return getStaticObjectField(
			"android.util.Rational",
			"ZERO",
			"Landroid/util/Rational;"
		);
	}
	
	// QJniObject forward
	Rational::Rational(QJniObject obj) : java::lang::Number(obj) {}
	
	// Constructors
	Rational::Rational(jint arg0, jint arg1)
		: java::lang::Number(
			"android.util.Rational",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::util::Rational Rational::parseRational(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Rational",
			"parseRational",
			"(Ljava/lang/String;)Landroid/util/Rational;",
			arg0.object<jstring>()
		);
	}
	jint Rational::compareTo(android::util::Rational arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/util/Rational;)I",
			arg0.object()
		);
	}
	jint Rational::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jdouble Rational::doubleValue()
	{
		return callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Rational::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Rational::floatValue()
	{
		return callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Rational::getDenominator()
	{
		return callMethod<jint>(
			"getDenominator",
			"()I"
		);
	}
	jint Rational::getNumerator()
	{
		return callMethod<jint>(
			"getNumerator",
			"()I"
		);
	}
	jint Rational::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Rational::intValue()
	{
		return callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jboolean Rational::isFinite()
	{
		return callMethod<jboolean>(
			"isFinite",
			"()Z"
		);
	}
	jboolean Rational::isInfinite()
	{
		return callMethod<jboolean>(
			"isInfinite",
			"()Z"
		);
	}
	jboolean Rational::isNaN()
	{
		return callMethod<jboolean>(
			"isNaN",
			"()Z"
		);
	}
	jboolean Rational::isZero()
	{
		return callMethod<jboolean>(
			"isZero",
			"()Z"
		);
	}
	jlong Rational::longValue()
	{
		return callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Rational::shortValue()
	{
		return callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	JString Rational::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

