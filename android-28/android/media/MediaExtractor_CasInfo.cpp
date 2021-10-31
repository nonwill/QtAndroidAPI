#include "./MediaCas_Session.hpp"
#include "./MediaExtractor_CasInfo.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaExtractor_CasInfo::MediaExtractor_CasInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::MediaCas_Session MediaExtractor_CasInfo::getSession()
	{
		return callObjectMethod(
			"getSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	jint MediaExtractor_CasInfo::getSystemId()
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
} // namespace android::media
