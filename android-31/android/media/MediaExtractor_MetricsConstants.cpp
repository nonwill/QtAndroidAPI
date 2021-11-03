#include "./MediaExtractor_MetricsConstants.hpp"

namespace android::media
{
	// Fields
	jstring MediaExtractor_MetricsConstants::FORMAT()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaExtractor_MetricsConstants::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaExtractor_MetricsConstants::TRACKS()
	{
		return getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"TRACKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MediaExtractor_MetricsConstants::MediaExtractor_MetricsConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

