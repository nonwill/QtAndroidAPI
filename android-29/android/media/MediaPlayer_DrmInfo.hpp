#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaPlayer_DrmInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_DrmInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_DrmInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getPssh();
		jarray getSupportedSchemes();
	};
} // namespace android::media

