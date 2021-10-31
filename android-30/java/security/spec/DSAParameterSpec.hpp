#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DSAParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DSAParameterSpec(QJniObject obj);
		
		// Constructors
		DSAParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		
		// Methods
		java::math::BigInteger getG();
		java::math::BigInteger getP();
		java::math::BigInteger getQ();
	};
} // namespace java::security::spec

