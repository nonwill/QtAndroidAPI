#include "./DrmUtils_ExtendedMetadataParser.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmUtils_ExtendedMetadataParser::DrmUtils_ExtendedMetadataParser(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring DrmUtils_ExtendedMetadataParser::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	JObject DrmUtils_ExtendedMetadataParser::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmUtils_ExtendedMetadataParser::keyIterator()
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::drm

