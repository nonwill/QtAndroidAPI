#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;

namespace android::util
{
	class NoSuchPropertyException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchPropertyException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchPropertyException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		NoSuchPropertyException(JString arg0);
		
		// Methods
	};
} // namespace android::util

