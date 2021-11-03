#pragma once

#include "./BadPaddingException.hpp"

class JString;

namespace javax::crypto
{
	class AEADBadTagException : public javax::crypto::BadPaddingException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AEADBadTagException(const char *className, const char *sig, Ts...agv) : javax::crypto::BadPaddingException(className, sig, std::forward<Ts>(agv)...) {}
		AEADBadTagException(QAndroidJniObject obj);
		
		// Constructors
		AEADBadTagException();
		AEADBadTagException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

