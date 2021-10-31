#include "./EapSessionConfig_EapAkaConfig.hpp"
#include "./EapSessionConfig_EapAkaPrimeConfig.hpp"
#include "./EapSessionConfig_EapMsChapV2Config.hpp"
#include "./EapSessionConfig_EapSimConfig.hpp"
#include "./EapSessionConfig_EapTtlsConfig.hpp"
#include "./EapSessionConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// QAndroidJniObject forward
	EapSessionConfig::EapSessionConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::net::eap::EapSessionConfig_EapAkaConfig EapSessionConfig::getEapAkaConfig()
	{
		return callObjectMethod(
			"getEapAkaConfig",
			"()Landroid/net/eap/EapSessionConfig$EapAkaConfig;"
		);
	}
	android::net::eap::EapSessionConfig_EapAkaPrimeConfig EapSessionConfig::getEapAkaPrimeConfig()
	{
		return callObjectMethod(
			"getEapAkaPrimeConfig",
			"()Landroid/net/eap/EapSessionConfig$EapAkaPrimeConfig;"
		);
	}
	jbyteArray EapSessionConfig::getEapIdentity()
	{
		return callObjectMethod(
			"getEapIdentity",
			"()[B"
		).object<jbyteArray>();
	}
	android::net::eap::EapSessionConfig_EapMsChapV2Config EapSessionConfig::getEapMsChapV2Config()
	{
		return callObjectMethod(
			"getEapMsChapV2Config",
			"()Landroid/net/eap/EapSessionConfig$EapMsChapV2Config;"
		);
	}
	android::net::eap::EapSessionConfig_EapSimConfig EapSessionConfig::getEapSimConfig()
	{
		return callObjectMethod(
			"getEapSimConfig",
			"()Landroid/net/eap/EapSessionConfig$EapSimConfig;"
		);
	}
	android::net::eap::EapSessionConfig_EapTtlsConfig EapSessionConfig::getEapTtlsConfig()
	{
		return callObjectMethod(
			"getEapTtlsConfig",
			"()Landroid/net/eap/EapSessionConfig$EapTtlsConfig;"
		);
	}
	jint EapSessionConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap
