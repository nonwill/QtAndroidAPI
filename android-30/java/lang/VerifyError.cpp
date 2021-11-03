#include "../../JString.hpp"
#include "./VerifyError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	VerifyError::VerifyError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	VerifyError::VerifyError()
		: java::lang::LinkageError(
			"java.lang.VerifyError",
			"()V"
		) {}
	VerifyError::VerifyError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.VerifyError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

