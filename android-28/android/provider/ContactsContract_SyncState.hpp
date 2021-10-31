#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class ContentProviderClient;
}
namespace android::content
{
	class ContentProviderOperation;
}
namespace android::net
{
	class Uri;
}
namespace android::util
{
	class Pair;
}

namespace android::provider
{
	class ContactsContract_SyncState : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_SyncState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_SyncState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jbyteArray get(android::content::ContentProviderClient arg0, android::accounts::Account arg1);
		static android::util::Pair getWithUri(android::content::ContentProviderClient arg0, android::accounts::Account arg1);
		static android::content::ContentProviderOperation newSetOperation(android::accounts::Account arg0, jbyteArray arg1);
		static void set(android::content::ContentProviderClient arg0, android::accounts::Account arg1, jbyteArray arg2);
	};
} // namespace android::provider

