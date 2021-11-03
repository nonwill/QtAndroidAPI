#include "../net/Uri.hpp"
#include "./ContactsContract_Groups.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_Groups::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_Groups::CONTENT_SUMMARY_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_SUMMARY_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring ContactsContract_Groups::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri ContactsContract_Groups::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$Groups",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	ContactsContract_Groups::ContactsContract_Groups(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject ContactsContract_Groups::newEntityIterator(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.provider.ContactsContract$Groups",
			"newEntityIterator",
			"(Landroid/database/Cursor;)Landroid/content/EntityIterator;",
			arg0.object()
		);
	}
} // namespace android::provider

