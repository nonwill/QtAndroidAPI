#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class Criteria : public JObject
	{
	public:
		// Fields
		static jint ACCURACY_COARSE();
		static jint ACCURACY_FINE();
		static jint ACCURACY_HIGH();
		static jint ACCURACY_LOW();
		static jint ACCURACY_MEDIUM();
		static JObject CREATOR();
		static jint NO_REQUIREMENT();
		static jint POWER_HIGH();
		static jint POWER_LOW();
		static jint POWER_MEDIUM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Criteria(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Criteria(QAndroidJniObject obj);
		
		// Constructors
		Criteria();
		Criteria(android::location::Criteria &arg0);
		
		// Methods
		jint describeContents();
		jint getAccuracy();
		jint getBearingAccuracy();
		jint getHorizontalAccuracy();
		jint getPowerRequirement();
		jint getSpeedAccuracy();
		jint getVerticalAccuracy();
		jboolean isAltitudeRequired();
		jboolean isBearingRequired();
		jboolean isCostAllowed();
		jboolean isSpeedRequired();
		void setAccuracy(jint arg0);
		void setAltitudeRequired(jboolean arg0);
		void setBearingAccuracy(jint arg0);
		void setBearingRequired(jboolean arg0);
		void setCostAllowed(jboolean arg0);
		void setHorizontalAccuracy(jint arg0);
		void setPowerRequirement(jint arg0);
		void setSpeedAccuracy(jint arg0);
		void setSpeedRequired(jboolean arg0);
		void setVerticalAccuracy(jint arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

