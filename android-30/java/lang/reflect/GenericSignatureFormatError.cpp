#include "../../../JString.hpp"
#include "./GenericSignatureFormatError.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	GenericSignatureFormatError::GenericSignatureFormatError(QAndroidJniObject obj) : java::lang::ClassFormatError(obj) {}
	
	// Constructors
	GenericSignatureFormatError::GenericSignatureFormatError()
		: java::lang::ClassFormatError(
			"java.lang.reflect.GenericSignatureFormatError",
			"()V"
		) {}
	GenericSignatureFormatError::GenericSignatureFormatError(JString arg0)
		: java::lang::ClassFormatError(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang::reflect

