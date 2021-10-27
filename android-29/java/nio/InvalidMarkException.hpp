#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"


namespace java::nio
{
	class InvalidMarkException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		InvalidMarkException(QAndroidJniObject obj);
		// Constructors
		InvalidMarkException();
		
		// Methods
	};
} // namespace java::nio

