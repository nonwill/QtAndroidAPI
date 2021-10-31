#include "../os/Parcel.hpp"
#include "./TimedMetaData.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	TimedMetaData::TimedMetaData(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray TimedMetaData::getMetaData()
	{
		return callObjectMethod(
			"getMetaData",
			"()[B"
		).object<jbyteArray>();
	}
	jlong TimedMetaData::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media
