#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::location
{
	class GnssMeasurementRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssMeasurementRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jboolean isFullTracking() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

