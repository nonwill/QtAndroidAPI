#pragma once

#include "../../JString.hpp"
#include "./MediaDrm_SessionException.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaDrm_SessionException::ERROR_RESOURCE_CONTENTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	inline jint MediaDrm_SessionException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	inline MediaDrm_SessionException::MediaDrm_SessionException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint MediaDrm_SessionException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

