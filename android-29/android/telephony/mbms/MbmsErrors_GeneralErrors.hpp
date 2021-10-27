#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::mbms
{
	class MbmsErrors_GeneralErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CARRIER_CHANGE_NOT_ALLOWED();
		static jint ERROR_IN_E911();
		static jint ERROR_MIDDLEWARE_NOT_YET_READY();
		static jint ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE();
		static jint ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE();
		static jint ERROR_OUT_OF_MEMORY();
		static jint ERROR_UNABLE_TO_READ_SIM();
		
		MbmsErrors_GeneralErrors(QAndroidJniObject obj);
		// Constructors
		MbmsErrors_GeneralErrors() = default;
		
		// Methods
	};
} // namespace android::telephony::mbms

