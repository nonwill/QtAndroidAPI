#include "../net/Uri.hpp"
#include "./CallLog.hpp"

namespace android::provider
{
	// Fields
	jstring CallLog::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CallLog",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri CallLog::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	CallLog::CallLog(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CallLog::CallLog()
		: __JniBaseClass(
			"android.provider.CallLog",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider
