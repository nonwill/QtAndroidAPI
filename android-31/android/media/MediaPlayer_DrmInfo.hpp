#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaPlayer_DrmInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_DrmInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_DrmInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getPssh();
		jarray getSupportedSchemes();
	};
} // namespace android::media

