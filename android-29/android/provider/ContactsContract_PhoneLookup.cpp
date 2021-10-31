#include "../net/Uri.hpp"
#include "./ContactsContract_PhoneLookup.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri ContactsContract_PhoneLookup::CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri ContactsContract_PhoneLookup::ENTERPRISE_CONTENT_FILTER_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"ENTERPRISE_CONTENT_FILTER_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_PhoneLookup::QUERY_PARAMETER_SIP_ADDRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.ContactsContract$PhoneLookup",
			"QUERY_PARAMETER_SIP_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ContactsContract_PhoneLookup::ContactsContract_PhoneLookup(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

