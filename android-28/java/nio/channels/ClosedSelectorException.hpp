#pragma once

#include "./ClosedSelectorException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline ClosedSelectorException::ClosedSelectorException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ClosedSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

