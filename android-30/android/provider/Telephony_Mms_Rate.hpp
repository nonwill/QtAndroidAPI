#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms_Rate : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static jstring SENT_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Rate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Rate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider
