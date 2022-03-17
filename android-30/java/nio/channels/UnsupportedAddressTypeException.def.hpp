#pragma once

#include "../../lang/IllegalArgumentException.def.hpp"

namespace java::nio::channels
{
	class UnsupportedAddressTypeException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedAddressTypeException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedAddressTypeException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		UnsupportedAddressTypeException();
		
		// Methods
	};
} // namespace java::nio::channels

