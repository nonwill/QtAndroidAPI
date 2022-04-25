#pragma once

#include "../../../JObject.hpp"

namespace android::media::audiofx
{
	class Visualizer_MeasurementPeakRms : public JObject
	{
	public:
		// Fields
		jint mPeak();
		jint mRms();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Visualizer_MeasurementPeakRms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Visualizer_MeasurementPeakRms(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Visualizer_MeasurementPeakRms();
		
		// Methods
	};
} // namespace android::media::audiofx
