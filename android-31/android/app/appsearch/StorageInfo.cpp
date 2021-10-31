#include "./StorageInfo.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	StorageInfo::StorageInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint StorageInfo::getAliveDocumentsCount()
	{
		return callMethod<jint>(
			"getAliveDocumentsCount",
			"()I"
		);
	}
	jint StorageInfo::getAliveNamespacesCount()
	{
		return callMethod<jint>(
			"getAliveNamespacesCount",
			"()I"
		);
	}
	jlong StorageInfo::getSizeBytes()
	{
		return callMethod<jlong>(
			"getSizeBytes",
			"()J"
		);
	}
} // namespace android::app::appsearch
