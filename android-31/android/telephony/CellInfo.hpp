#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentity;
}
namespace android::telephony
{
	class CellSignalStrength;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellInfo : public JObject
	{
	public:
		// Fields
		static jint CONNECTION_NONE();
		static jint CONNECTION_PRIMARY_SERVING();
		static jint CONNECTION_SECONDARY_SERVING();
		static jint CONNECTION_UNKNOWN();
		static JObject CREATOR();
		static jint UNAVAILABLE();
		static jlong UNAVAILABLE_LONG();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CellInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getCellConnectionStatus();
		android::telephony::CellIdentity getCellIdentity();
		android::telephony::CellSignalStrength getCellSignalStrength();
		jlong getTimeStamp();
		jlong getTimestampMillis();
		jint hashCode();
		jboolean isRegistered();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

