#pragma once

#include "../../JString.hpp"
#include "./MediaPlayer_NoDrmSchemeException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaPlayer_NoDrmSchemeException::MediaPlayer_NoDrmSchemeException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$NoDrmSchemeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"

