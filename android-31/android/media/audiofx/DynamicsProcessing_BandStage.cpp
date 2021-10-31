#include "./DynamicsProcessing_BandStage.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(QAndroidJniObject obj) : android::media::audiofx::DynamicsProcessing_Stage(obj) {}
	
	// Constructors
	DynamicsProcessing_BandStage::DynamicsProcessing_BandStage(jboolean arg0, jboolean arg1, jint arg2)
		: android::media::audiofx::DynamicsProcessing_Stage(
			"android.media.audiofx.DynamicsProcessing$BandStage",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint DynamicsProcessing_BandStage::getBandCount()
	{
		return callMethod<jint>(
			"getBandCount",
			"()I"
		);
	}
	jstring DynamicsProcessing_BandStage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::audiofx

