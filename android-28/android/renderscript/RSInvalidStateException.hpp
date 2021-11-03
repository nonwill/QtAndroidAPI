#pragma once

#include "./RSRuntimeException.hpp"

class JString;

namespace android::renderscript
{
	class RSInvalidStateException : public android::renderscript::RSRuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSInvalidStateException(const char *className, const char *sig, Ts...agv) : android::renderscript::RSRuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RSInvalidStateException(QAndroidJniObject obj);
		
		// Constructors
		RSInvalidStateException(JString arg0);
		
		// Methods
	};
} // namespace android::renderscript

