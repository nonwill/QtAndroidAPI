#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Settings_NameValueTable : public __JniBaseClass
	{
	public:
		// Fields
		static jstring NAME();
		static jstring VALUE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings_NameValueTable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Settings_NameValueTable(QJniObject obj);
		
		// Constructors
		Settings_NameValueTable();
		
		// Methods
		static android::net::Uri getUriFor(android::net::Uri arg0, jstring arg1);
	};
} // namespace android::provider

