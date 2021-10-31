#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./IdentityCredentialException.hpp"


namespace android::security::identity
{
	class InvalidRequestMessageException : public android::security::identity::IdentityCredentialException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidRequestMessageException(const char *className, const char *sig, Ts...agv) : android::security::identity::IdentityCredentialException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidRequestMessageException(QAndroidJniObject obj);
		
		// Constructors
		InvalidRequestMessageException(jstring arg0);
		InvalidRequestMessageException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::identity
