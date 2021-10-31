#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class TelephonyManager_CellInfoCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_MODEM_ERROR();
		static jint ERROR_TIMEOUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager_CellInfoCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_CellInfoCallback(QJniObject obj);
		
		// Constructors
		TelephonyManager_CellInfoCallback();
		
		// Methods
		void onCellInfo(__JniBaseClass arg0);
		void onError(jint arg0, jthrowable arg1);
	};
} // namespace android::telephony

