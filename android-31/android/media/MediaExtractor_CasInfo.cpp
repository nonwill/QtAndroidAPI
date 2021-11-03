#include "../../JByteArray.hpp"
#include "./MediaCas_Session.hpp"
#include "./MediaExtractor_CasInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaExtractor_CasInfo::MediaExtractor_CasInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray MediaExtractor_CasInfo::getPrivateData()
	{
		return callObjectMethod(
			"getPrivateData",
			"()[B"
		);
	}
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

