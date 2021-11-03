#include "./ContactsContract_SearchSnippets.hpp"

namespace android::provider
{
	// Fields
	jstring ContactsContract_SearchSnippets::DEFERRED_SNIPPETING_KEY()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"DEFERRED_SNIPPETING_KEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_SearchSnippets::SNIPPET()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SearchSnippets",
			"SNIPPET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ContactsContract_SearchSnippets::ContactsContract_SearchSnippets(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ContactsContract_SearchSnippets::ContactsContract_SearchSnippets()
		: JObject(
			"android.provider.ContactsContract$SearchSnippets",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

