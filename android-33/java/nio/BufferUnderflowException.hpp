#pragma once

#include "./BufferUnderflowException.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	inline BufferUnderflowException::BufferUnderflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferUnderflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio;
#endif
