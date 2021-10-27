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
		
		AlreadyConnectedException(QAndroidJniObject obj);
		// Constructors
		AlreadyConnectedException();
		
		// Methods
	};
} // namespace java::nio::channels

