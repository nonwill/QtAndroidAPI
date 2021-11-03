#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class PerformanceHintManager_Session;
}

namespace android::os
{
	class PerformanceHintManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PerformanceHintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PerformanceHintManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::PerformanceHintManager_Session createHintSession(jintArray arg0, jlong arg1);
		jlong getPreferredUpdateRateNanos();
	};
} // namespace android::os

