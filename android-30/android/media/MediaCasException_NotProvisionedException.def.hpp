#pragma once

#include "./MediaCasException.def.hpp"

namespace android::media
{
	class MediaCasException_NotProvisionedException : public android::media::MediaCasException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasException_NotProvisionedException(const char *className, const char *sig, Ts...agv) : android::media::MediaCasException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasException_NotProvisionedException(QAndroidJniObject obj) : android::media::MediaCasException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media
