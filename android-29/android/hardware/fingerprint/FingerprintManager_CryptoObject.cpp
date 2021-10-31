#include "../../../java/security/Signature.hpp"
#include "../../../javax/crypto/Cipher.hpp"
#include "../../../javax/crypto/Mac.hpp"
#include "./FingerprintManager_CryptoObject.hpp"

namespace android::hardware::fingerprint
{
	// Fields
	
	// QAndroidJniObject forward
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(java::security::Signature arg0)
		: __JniBaseClass(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljava/security/Signature;)V",
			arg0.object()
		) {}
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(javax::crypto::Cipher arg0)
		: __JniBaseClass(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Cipher;)V",
			arg0.object()
		) {}
	FingerprintManager_CryptoObject::FingerprintManager_CryptoObject(javax::crypto::Mac arg0)
		: __JniBaseClass(
			"android.hardware.fingerprint.FingerprintManager$CryptoObject",
			"(Ljavax/crypto/Mac;)V",
			arg0.object()
		) {}
	
	// Methods
	javax::crypto::Cipher FingerprintManager_CryptoObject::getCipher()
	{
		return callObjectMethod(
			"getCipher",
			"()Ljavax/crypto/Cipher;"
		);
	}
	javax::crypto::Mac FingerprintManager_CryptoObject::getMac()
	{
		return callObjectMethod(
			"getMac",
			"()Ljavax/crypto/Mac;"
		);
	}
	java::security::Signature FingerprintManager_CryptoObject::getSignature()
	{
		return callObjectMethod(
			"getSignature",
			"()Ljava/security/Signature;"
		);
	}
} // namespace android::hardware::fingerprint

