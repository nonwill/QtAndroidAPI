#pragma once

#include "./CellSignalStrength.def.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class CellSignalStrengthWcdma : public android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellSignalStrengthWcdma(const char *className, const char *sig, Ts...agv) : android::telephony::CellSignalStrength(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrengthWcdma(QAndroidJniObject obj) : android::telephony::CellSignalStrength(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAsuLevel() const;
		jint getDbm() const;
		jint getLevel() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

