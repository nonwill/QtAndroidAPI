#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class TelephonyScanManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyScanManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyScanManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TelephonyScanManager();
		
		// Methods
	};
} // namespace android::telephony
