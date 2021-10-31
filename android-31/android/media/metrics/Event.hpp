#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::media::metrics
{
	class Event : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Event(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Event(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::Bundle getMetricsBundle();
		jlong getTimeSinceCreatedMillis();
	};
} // namespace android::media::metrics
