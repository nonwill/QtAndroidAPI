#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class CallLog : public JObject
	{
	public:
		// Fields
		static JString AUTHORITY();
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallLog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallLog(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CallLog();
		
		// Methods
	};
} // namespace android::provider
