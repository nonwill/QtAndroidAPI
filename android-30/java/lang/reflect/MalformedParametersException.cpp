#include "./MalformedParametersException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	MalformedParametersException::MalformedParametersException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MalformedParametersException::MalformedParametersException()
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParametersException",
			"()V"
		) {}
	MalformedParametersException::MalformedParametersException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.MalformedParametersException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang::reflect

