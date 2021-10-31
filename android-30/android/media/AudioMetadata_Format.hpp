#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioMetadata_Format : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass KEY_ATMOS_PRESENT();
		static __JniBaseClass KEY_AUDIO_ENCODING();
		static __JniBaseClass KEY_BIT_RATE();
		static __JniBaseClass KEY_BIT_WIDTH();
		static __JniBaseClass KEY_CHANNEL_MASK();
		static __JniBaseClass KEY_MIME();
		static __JniBaseClass KEY_SAMPLE_RATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioMetadata_Format(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioMetadata_Format(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

