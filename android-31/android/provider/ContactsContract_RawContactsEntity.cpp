#include "../net/Uri.hpp"
#include "./ContactsContract_RawContactsEntity.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_RawContactsEntity::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_RawContactsEntity::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_RawContactsEntity::DATA_ID()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"DATA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_RawContactsEntity::PROFILE_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$RawContactsEntity",
			"PROFILE_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_RawContactsEntity::ContactsContract_RawContactsEntity(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

