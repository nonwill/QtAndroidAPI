#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssClock : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssClock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssClock(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jdouble getBiasNanos();
		jdouble getBiasUncertaintyNanos();
		jdouble getDriftNanosPerSecond();
		jdouble getDriftUncertaintyNanosPerSecond();
		jlong getFullBiasNanos();
		jint getHardwareClockDiscontinuityCount();
		jint getLeapSecond();
		jlong getTimeNanos();
		jdouble getTimeUncertaintyNanos();
		jboolean hasBiasNanos();
		jboolean hasBiasUncertaintyNanos();
		jboolean hasDriftNanosPerSecond();
		jboolean hasDriftUncertaintyNanosPerSecond();
		jboolean hasFullBiasNanos();
		jboolean hasLeapSecond();
		jboolean hasTimeUncertaintyNanos();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

