#include "../../java/security/cert/X509Certificate.hpp"
#include "./FileIntegrityManager.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	FileIntegrityManager::FileIntegrityManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean FileIntegrityManager::isApkVeritySupported()
	{
		return callMethod<jboolean>(
			"isApkVeritySupported",
			"()Z"
		);
	}
	jboolean FileIntegrityManager::isAppSourceCertificateTrusted(java::security::cert::X509Certificate arg0)
	{
		return callMethod<jboolean>(
			"isAppSourceCertificateTrusted",
			"(Ljava/security/cert/X509Certificate;)Z",
			arg0.object()
		);
	}
} // namespace android::security

