#include "./NoConnectionPendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	NoConnectionPendingException::NoConnectionPendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NoConnectionPendingException::NoConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NoConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels
