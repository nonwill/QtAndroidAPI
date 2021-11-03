#pragma once

#include "./MediaDrmException.hpp"

class JString;

namespace android::media
{
	class DeniedByServerException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeniedByServerException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		DeniedByServerException(QAndroidJniObject obj);
		
		// Constructors
		DeniedByServerException(JString arg0);
		
		// Methods
	};
} // namespace android::media

