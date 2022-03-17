#pragma once

#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapAkaConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapAkaConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint EapSessionConfig_EapAkaConfig::getAppType() const
	{
		return callMethod<jint>(
			"getAppType",
			"()I"
		);
	}
	inline jint EapSessionConfig_EapAkaConfig::getSubId() const
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	inline jint EapSessionConfig_EapAkaConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers
#include "./EapSessionConfig_EapMethodConfig.hpp"

