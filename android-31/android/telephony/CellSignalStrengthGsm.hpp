#pragma once

#include "../../JObject.hpp"
#include "./CellSignalStrength.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class CellSignalStrengthGsm : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CellSignalStrengthGsm(const char *className, const char *sig, Ts...agv) : android::telephony::CellSignalStrength(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrengthGsm(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getBitErrorRate();
		jint getDbm();
		jint getLevel();
		jint getRssi();
		jint getTimingAdvance();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

