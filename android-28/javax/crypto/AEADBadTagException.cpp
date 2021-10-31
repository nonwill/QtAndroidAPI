#include "./AEADBadTagException.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	AEADBadTagException::AEADBadTagException(QJniObject obj) : javax::crypto::BadPaddingException(obj) {}
	
	// Constructors
	AEADBadTagException::AEADBadTagException()
		: javax::crypto::BadPaddingException(
			"javax.crypto.AEADBadTagException",
			"()V"
		) {}
	AEADBadTagException::AEADBadTagException(jstring arg0)
		: javax::crypto::BadPaddingException(
			"javax.crypto.AEADBadTagException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::crypto

