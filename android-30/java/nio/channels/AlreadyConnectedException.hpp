#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class AlreadyConnectedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlreadyConnectedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		AlreadyConnectedException(QAndroidJniObject obj);
		
		// Constructors
		AlreadyConnectedException();
		
		// Methods
	};
} // namespace java::nio::channels
