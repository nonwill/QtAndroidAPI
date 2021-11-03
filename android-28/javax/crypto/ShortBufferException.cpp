#include "../../JString.hpp"
#include "./ShortBufferException.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	ShortBufferException::ShortBufferException(QAndroidJniObject obj) : java::security::GeneralSecurityException(obj) {}
	
	// Constructors
	ShortBufferException::ShortBufferException()
		: java::security::GeneralSecurityException(
			"javax.crypto.ShortBufferException",
			"()V"
		) {}
	ShortBufferException::ShortBufferException(JString arg0)
		: java::security::GeneralSecurityException(
			"javax.crypto.ShortBufferException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace javax::crypto

