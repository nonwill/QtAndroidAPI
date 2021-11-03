#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class IllegalFormatPrecisionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalFormatPrecisionException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatPrecisionException(QAndroidJniObject obj);
		
		// Constructors
		IllegalFormatPrecisionException(jint arg0);
		
		// Methods
		JString getMessage();
		jint getPrecision();
	};
} // namespace java::util

