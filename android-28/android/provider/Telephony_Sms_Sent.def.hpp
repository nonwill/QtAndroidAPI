#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_Sms_Sent : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Sms_Sent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Sms_Sent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider
