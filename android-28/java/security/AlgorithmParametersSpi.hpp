#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class AlgorithmParametersSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlgorithmParametersSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlgorithmParametersSpi(QAndroidJniObject obj);
		
		// Constructors
		AlgorithmParametersSpi();
		
		// Methods
	};
} // namespace java::security

