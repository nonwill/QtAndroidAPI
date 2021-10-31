#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/security/GeneralSecurityException.hpp"
#include "../../../java/security/KeyException.hpp"
#include "../../../java/security/InvalidKeyException.hpp"


namespace android::security::keystore
{
	class KeyNotYetValidException : public java::security::InvalidKeyException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyNotYetValidException(const char *className, const char *sig, Ts...agv) : java::security::InvalidKeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyNotYetValidException(QJniObject obj);
		
		// Constructors
		KeyNotYetValidException();
		KeyNotYetValidException(jstring arg0);
		KeyNotYetValidException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

