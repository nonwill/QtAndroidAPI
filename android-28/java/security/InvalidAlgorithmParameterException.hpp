#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


namespace java::security
{
	class InvalidAlgorithmParameterException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidAlgorithmParameterException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidAlgorithmParameterException(QAndroidJniObject obj);
		
		// Constructors
		InvalidAlgorithmParameterException();
		InvalidAlgorithmParameterException(jstring arg0);
		InvalidAlgorithmParameterException(jthrowable arg0);
		InvalidAlgorithmParameterException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security
