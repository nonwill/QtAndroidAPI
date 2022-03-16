#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;

namespace android::location
{
	class GnssStatus : public JObject
	{
	public:
		// Fields
		static jint CONSTELLATION_BEIDOU();
		static jint CONSTELLATION_GALILEO();
		static jint CONSTELLATION_GLONASS();
		static jint CONSTELLATION_GPS();
		static jint CONSTELLATION_IRNSS();
		static jint CONSTELLATION_QZSS();
		static jint CONSTELLATION_SBAS();
		static jint CONSTELLATION_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssStatus(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jfloat getAzimuthDegrees(jint arg0) const;
		jfloat getCarrierFrequencyHz(jint arg0) const;
		jfloat getCn0DbHz(jint arg0) const;
		jint getConstellationType(jint arg0) const;
		jfloat getElevationDegrees(jint arg0) const;
		jint getSatelliteCount() const;
		jint getSvid(jint arg0) const;
		jboolean hasAlmanacData(jint arg0) const;
		jboolean hasCarrierFrequencyHz(jint arg0) const;
		jboolean hasEphemerisData(jint arg0) const;
		jboolean usedInFix(jint arg0) const;
	};
} // namespace android::location

