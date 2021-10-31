#include "../../math/BigInteger.hpp"
#include "./ECPoint.hpp"
#include "./EllipticCurve.hpp"
#include "./ECParameterSpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QJniObject forward
	ECParameterSpec::ECParameterSpec(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ECParameterSpec::ECParameterSpec(java::security::spec::EllipticCurve arg0, java::security::spec::ECPoint arg1, java::math::BigInteger arg2, jint arg3)
		: __JniBaseClass(
			"java.security.spec.ECParameterSpec",
			"(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jint ECParameterSpec::getCofactor()
	{
		return callMethod<jint>(
			"getCofactor",
			"()I"
		);
	}
	java::security::spec::EllipticCurve ECParameterSpec::getCurve()
	{
		return callObjectMethod(
			"getCurve",
			"()Ljava/security/spec/EllipticCurve;"
		);
	}
	java::security::spec::ECPoint ECParameterSpec::getGenerator()
	{
		return callObjectMethod(
			"getGenerator",
			"()Ljava/security/spec/ECPoint;"
		);
	}
	java::math::BigInteger ECParameterSpec::getOrder()
	{
		return callObjectMethod(
			"getOrder",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec

