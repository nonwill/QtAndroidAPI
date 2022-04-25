#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class MbmsErrors_StreamingErrors : public JObject
	{
	public:
		// Fields
		static jint ERROR_CONCURRENT_SERVICE_LIMIT_REACHED();
		static jint ERROR_DUPLICATE_START_STREAM();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MbmsErrors_StreamingErrors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_StreamingErrors(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms
