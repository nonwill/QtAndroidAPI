#include "./IntentFilter_MalformedMimeTypeException.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException()
		: android::util::AndroidException(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"()V"
		) {}
	IntentFilter_MalformedMimeTypeException::IntentFilter_MalformedMimeTypeException(jstring arg0)
		: android::util::AndroidException(
			"android.content.IntentFilter$MalformedMimeTypeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::content
