#include "../../../JObject.hpp"
#include "../../math/BigInteger.hpp"
#include "./ECFieldFp.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	ECFieldFp::ECFieldFp(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ECFieldFp::ECFieldFp(java::math::BigInteger arg0)
		: JObject(
			"java.security.spec.ECFieldFp",
			"(Ljava/math/BigInteger;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ECFieldFp::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ECFieldFp::getFieldSize()
	{
		return callMethod<jint>(
			"getFieldSize",
			"()I"
		);
	}
	java::math::BigInteger ECFieldFp::getP()
	{
		return callObjectMethod(
			"getP",
			"()Ljava/math/BigInteger;"
		);
	}
	jint ECFieldFp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security::spec

