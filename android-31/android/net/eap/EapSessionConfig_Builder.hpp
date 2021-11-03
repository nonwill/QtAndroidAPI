#pragma once

#include "../../../JObject.hpp"

namespace android::net::eap
{
	class EapSessionConfig;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::net::eap
{
	class EapSessionConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_Builder(QJniObject obj);
		
		// Constructors
		EapSessionConfig_Builder();
		
		// Methods
		android::net::eap::EapSessionConfig build();
		android::net::eap::EapSessionConfig_Builder setEapAkaConfig(jint arg0, jint arg1);
		android::net::eap::EapSessionConfig_Builder setEapAkaPrimeConfig(jint arg0, jint arg1, jstring arg2, jboolean arg3);
		android::net::eap::EapSessionConfig_Builder setEapIdentity(jbyteArray arg0);
		android::net::eap::EapSessionConfig_Builder setEapMsChapV2Config(jstring arg0, jstring arg1);
		android::net::eap::EapSessionConfig_Builder setEapSimConfig(jint arg0, jint arg1);
		android::net::eap::EapSessionConfig_Builder setEapTtlsConfig(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1);
	};
} // namespace android::net::eap

