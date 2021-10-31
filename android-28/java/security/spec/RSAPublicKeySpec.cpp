#include "../../math/BigInteger.hpp"
#include "./RSAPublicKeySpec.hpp"

namespace java::security::spec
{
	// Fields
	
	// QAndroidJniObject forward
	RSAPublicKeySpec::RSAPublicKeySpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RSAPublicKeySpec::RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1)
		: __JniBaseClass(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;)V",
			arg0.object(),
			arg1.object()
		) {}
	RSAPublicKeySpec::RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"java.security.spec.RSAPublicKeySpec",
			"(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	java::math::BigInteger RSAPublicKeySpec::getModulus()
	{
		return callObjectMethod(
			"getModulus",
			"()Ljava/math/BigInteger;"
		);
	}
	__JniBaseClass RSAPublicKeySpec::getParams()
	{
		return callObjectMethod(
			"getParams",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	java::math::BigInteger RSAPublicKeySpec::getPublicExponent()
	{
		return callObjectMethod(
			"getPublicExponent",
			"()Ljava/math/BigInteger;"
		);
	}
} // namespace java::security::spec
