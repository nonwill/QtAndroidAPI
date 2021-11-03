#include "./MediaDataSource.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaDataSource::MediaDataSource(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaDataSource::MediaDataSource()
		: JObject(
			"android.media.MediaDataSource",
			"()V"
		) {}
	
	// Methods
	jlong MediaDataSource::getSize()
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jint MediaDataSource::readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return callMethod<jint>(
			"readAt",
			"(J[BII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media

