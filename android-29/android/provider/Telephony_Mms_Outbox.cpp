#include "../net/Uri.hpp"
#include "./Telephony_Mms_Outbox.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject Telephony_Mms_Outbox::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Outbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Outbox::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Mms$Outbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Telephony_Mms_Outbox::Telephony_Mms_Outbox(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::provider
