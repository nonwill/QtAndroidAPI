#include "../net/Uri.hpp"
#include "./Contacts_Extensions.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_Extensions::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Extensions",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Extensions::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Extensions",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Contacts_Extensions::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Extensions",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_Extensions::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Extensions",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_Extensions::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Extensions",
			"PERSON_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Contacts_Extensions::Contacts_Extensions(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

