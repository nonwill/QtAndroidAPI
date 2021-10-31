#include "./Visualizer_MeasurementPeakRms.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Visualizer_MeasurementPeakRms::mPeak()
	{
		return getField<jint>(
			"mPeak"
		);
	}
	jint Visualizer_MeasurementPeakRms::mRms()
	{
		return getField<jint>(
			"mRms"
		);
	}
	
	// QAndroidJniObject forward
	Visualizer_MeasurementPeakRms::Visualizer_MeasurementPeakRms(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Visualizer_MeasurementPeakRms::Visualizer_MeasurementPeakRms()
		: __JniBaseClass(
			"android.media.audiofx.Visualizer$MeasurementPeakRms",
			"()V"
		) {}
	
	// Methods
} // namespace android::media::audiofx

