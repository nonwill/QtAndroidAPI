#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class SignalStrength : public __JniBaseClass
	{
	public:
		// Fields
		static jint INVALID();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalStrength(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SignalStrength(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCdmaDbm();
		jint getCdmaEcio();
		__JniBaseClass getCellSignalStrengths();
		__JniBaseClass getCellSignalStrengths(jclass arg0);
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoSnr();
		jint getGsmBitErrorRate();
		jint getGsmSignalStrength();
		jint getLevel();
		jint hashCode();
		jboolean isGsm();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

