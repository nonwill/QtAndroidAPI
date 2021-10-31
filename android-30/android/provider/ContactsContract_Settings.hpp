#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Settings : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Settings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Settings(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

