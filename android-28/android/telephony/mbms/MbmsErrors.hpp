#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_MIDDLEWARE_LOST();
		static jint ERROR_MIDDLEWARE_NOT_BOUND();
		static jint ERROR_NO_UNIQUE_MIDDLEWARE();
		static jint SUCCESS();
		static jint UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsErrors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms
