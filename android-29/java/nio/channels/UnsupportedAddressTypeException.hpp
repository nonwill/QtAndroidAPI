#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::channels
{
	class UnsupportedAddressTypeException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		UnsupportedAddressTypeException(QAndroidJniObject obj);
		// Constructors
		UnsupportedAddressTypeException();
		
		// Methods
	};
} // namespace java::nio::channels

