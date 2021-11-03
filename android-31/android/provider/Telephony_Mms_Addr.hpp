#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Telephony_Mms_Addr : public JObject
	{
	public:
		// Fields
		static JString ADDRESS();
		static JString CHARSET();
		static JString CONTACT_ID();
		static JString MSG_ID();
		static JString TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Addr(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Addr(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getAddrUriForMessage(JString arg0);
	};
} // namespace android::provider

