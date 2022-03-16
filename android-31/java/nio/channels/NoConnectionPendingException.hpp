#pragma once

#include "./NoConnectionPendingException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline NoConnectionPendingException::NoConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NoConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

