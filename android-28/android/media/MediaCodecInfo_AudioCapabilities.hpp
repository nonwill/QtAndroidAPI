#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_AudioCapabilities : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_AudioCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_AudioCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getBitrateRange();
		jint getMaxInputChannelCount();
		JArray getSupportedSampleRateRanges();
		JIntArray getSupportedSampleRates();
		jboolean isSampleRateSupported(jint arg0);
	};
} // namespace android::media

