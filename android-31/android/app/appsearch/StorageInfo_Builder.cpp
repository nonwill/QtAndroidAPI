#include "./StorageInfo.hpp"
#include "./StorageInfo_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	StorageInfo_Builder::StorageInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StorageInfo_Builder::StorageInfo_Builder()
		: __JniBaseClass(
			"android.app.appsearch.StorageInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::appsearch::StorageInfo StorageInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/StorageInfo;"
		);
	}
	android::app::appsearch::StorageInfo_Builder StorageInfo_Builder::setAliveDocumentsCount(jint arg0)
	{
		return callObjectMethod(
			"setAliveDocumentsCount",
			"(I)Landroid/app/appsearch/StorageInfo$Builder;",
			arg0
		);
	}
	android::app::appsearch::StorageInfo_Builder StorageInfo_Builder::setAliveNamespacesCount(jint arg0)
	{
		return callObjectMethod(
			"setAliveNamespacesCount",
			"(I)Landroid/app/appsearch/StorageInfo$Builder;",
			arg0
		);
	}
	android::app::appsearch::StorageInfo_Builder StorageInfo_Builder::setSizeBytes(jlong arg0)
	{
		return callObjectMethod(
			"setSizeBytes",
			"(J)Landroid/app/appsearch/StorageInfo$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch
