#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./WifiEnterpriseConfig.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject WifiEnterpriseConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiEnterpriseConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WifiEnterpriseConfig::WifiEnterpriseConfig()
		: JObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"()V"
		) {}
	inline WifiEnterpriseConfig::WifiEnterpriseConfig(android::net::wifi::WifiEnterpriseConfig &arg0)
		: JObject(
			"android.net.wifi.WifiEnterpriseConfig",
			"(Landroid/net/wifi/WifiEnterpriseConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WifiEnterpriseConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WifiEnterpriseConfig::getAltSubjectMatch() const
	{
		return callObjectMethod(
			"getAltSubjectMatch",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getAnonymousIdentity() const
	{
		return callObjectMethod(
			"getAnonymousIdentity",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::X509Certificate WifiEnterpriseConfig::getCaCertificate() const
	{
		return callObjectMethod(
			"getCaCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JArray WifiEnterpriseConfig::getCaCertificates() const
	{
		return callObjectMethod(
			"getCaCertificates",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	inline java::security::cert::X509Certificate WifiEnterpriseConfig::getClientCertificate() const
	{
		return callObjectMethod(
			"getClientCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JArray WifiEnterpriseConfig::getClientCertificateChain() const
	{
		return callObjectMethod(
			"getClientCertificateChain",
			"()[Ljava/security/cert/X509Certificate;"
		);
	}
	inline JString WifiEnterpriseConfig::getDomainSuffixMatch() const
	{
		return callObjectMethod(
			"getDomainSuffixMatch",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiEnterpriseConfig::getEapMethod() const
	{
		return callMethod<jint>(
			"getEapMethod",
			"()I"
		);
	}
	inline JString WifiEnterpriseConfig::getIdentity() const
	{
		return callObjectMethod(
			"getIdentity",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline jint WifiEnterpriseConfig::getPhase2Method() const
	{
		return callMethod<jint>(
			"getPhase2Method",
			"()I"
		);
	}
	inline JString WifiEnterpriseConfig::getPlmn() const
	{
		return callObjectMethod(
			"getPlmn",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getRealm() const
	{
		return callObjectMethod(
			"getRealm",
			"()Ljava/lang/String;"
		);
	}
	inline JString WifiEnterpriseConfig::getSubjectMatch() const
	{
		return callObjectMethod(
			"getSubjectMatch",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiEnterpriseConfig::setAltSubjectMatch(JString arg0) const
	{
		callMethod<void>(
			"setAltSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setAnonymousIdentity(JString arg0) const
	{
		callMethod<void>(
			"setAnonymousIdentity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setCaCertificate(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setCaCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	inline void WifiEnterpriseConfig::setCaCertificates(JArray arg0) const
	{
		callMethod<void>(
			"setCaCertificates",
			"([Ljava/security/cert/X509Certificate;)V",
			arg0.object<jarray>()
		);
	}
	inline void WifiEnterpriseConfig::setClientKeyEntry(JObject arg0, java::security::cert::X509Certificate arg1) const
	{
		callMethod<void>(
			"setClientKeyEntry",
			"(Ljava/security/PrivateKey;Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WifiEnterpriseConfig::setClientKeyEntryWithCertificateChain(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"setClientKeyEntryWithCertificateChain",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline void WifiEnterpriseConfig::setDomainSuffixMatch(JString arg0) const
	{
		callMethod<void>(
			"setDomainSuffixMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setEapMethod(jint arg0) const
	{
		callMethod<void>(
			"setEapMethod",
			"(I)V",
			arg0
		);
	}
	inline void WifiEnterpriseConfig::setIdentity(JString arg0) const
	{
		callMethod<void>(
			"setIdentity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setPassword(JString arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setPhase2Method(jint arg0) const
	{
		callMethod<void>(
			"setPhase2Method",
			"(I)V",
			arg0
		);
	}
	inline void WifiEnterpriseConfig::setPlmn(JString arg0) const
	{
		callMethod<void>(
			"setPlmn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setRealm(JString arg0) const
	{
		callMethod<void>(
			"setRealm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void WifiEnterpriseConfig::setSubjectMatch(JString arg0) const
	{
		callMethod<void>(
			"setSubjectMatch",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString WifiEnterpriseConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WifiEnterpriseConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

