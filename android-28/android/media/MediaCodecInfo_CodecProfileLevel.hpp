#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::media
{
	class MediaCodecInfo_CodecProfileLevel : public JObject
	{
	public:
		// Fields
		static jint AACObjectELD();
		static jint AACObjectERLC();
		static jint AACObjectERScalable();
		static jint AACObjectHE();
		static jint AACObjectHE_PS();
		static jint AACObjectLC();
		static jint AACObjectLD();
		static jint AACObjectLTP();
		static jint AACObjectMain();
		static jint AACObjectSSR();
		static jint AACObjectScalable();
		static jint AACObjectXHE();
		static jint AVCLevel1();
		static jint AVCLevel11();
		static jint AVCLevel12();
		static jint AVCLevel13();
		static jint AVCLevel1b();
		static jint AVCLevel2();
		static jint AVCLevel21();
		static jint AVCLevel22();
		static jint AVCLevel3();
		static jint AVCLevel31();
		static jint AVCLevel32();
		static jint AVCLevel4();
		static jint AVCLevel41();
		static jint AVCLevel42();
		static jint AVCLevel5();
		static jint AVCLevel51();
		static jint AVCLevel52();
		static jint AVCProfileBaseline();
		static jint AVCProfileConstrainedBaseline();
		static jint AVCProfileConstrainedHigh();
		static jint AVCProfileExtended();
		static jint AVCProfileHigh();
		static jint AVCProfileHigh10();
		static jint AVCProfileHigh422();
		static jint AVCProfileHigh444();
		static jint AVCProfileMain();
		static jint DolbyVisionLevelFhd24();
		static jint DolbyVisionLevelFhd30();
		static jint DolbyVisionLevelFhd60();
		static jint DolbyVisionLevelHd24();
		static jint DolbyVisionLevelHd30();
		static jint DolbyVisionLevelUhd24();
		static jint DolbyVisionLevelUhd30();
		static jint DolbyVisionLevelUhd48();
		static jint DolbyVisionLevelUhd60();
		static jint DolbyVisionProfileDvavPen();
		static jint DolbyVisionProfileDvavPer();
		static jint DolbyVisionProfileDvavSe();
		static jint DolbyVisionProfileDvheDen();
		static jint DolbyVisionProfileDvheDer();
		static jint DolbyVisionProfileDvheDtb();
		static jint DolbyVisionProfileDvheDth();
		static jint DolbyVisionProfileDvheDtr();
		static jint DolbyVisionProfileDvheSt();
		static jint DolbyVisionProfileDvheStn();
		static jint H263Level10();
		static jint H263Level20();
		static jint H263Level30();
		static jint H263Level40();
		static jint H263Level45();
		static jint H263Level50();
		static jint H263Level60();
		static jint H263Level70();
		static jint H263ProfileBackwardCompatible();
		static jint H263ProfileBaseline();
		static jint H263ProfileH320Coding();
		static jint H263ProfileHighCompression();
		static jint H263ProfileHighLatency();
		static jint H263ProfileISWV2();
		static jint H263ProfileISWV3();
		static jint H263ProfileInterlace();
		static jint H263ProfileInternet();
		static jint HEVCHighTierLevel1();
		static jint HEVCHighTierLevel2();
		static jint HEVCHighTierLevel21();
		static jint HEVCHighTierLevel3();
		static jint HEVCHighTierLevel31();
		static jint HEVCHighTierLevel4();
		static jint HEVCHighTierLevel41();
		static jint HEVCHighTierLevel5();
		static jint HEVCHighTierLevel51();
		static jint HEVCHighTierLevel52();
		static jint HEVCHighTierLevel6();
		static jint HEVCHighTierLevel61();
		static jint HEVCHighTierLevel62();
		static jint HEVCMainTierLevel1();
		static jint HEVCMainTierLevel2();
		static jint HEVCMainTierLevel21();
		static jint HEVCMainTierLevel3();
		static jint HEVCMainTierLevel31();
		static jint HEVCMainTierLevel4();
		static jint HEVCMainTierLevel41();
		static jint HEVCMainTierLevel5();
		static jint HEVCMainTierLevel51();
		static jint HEVCMainTierLevel52();
		static jint HEVCMainTierLevel6();
		static jint HEVCMainTierLevel61();
		static jint HEVCMainTierLevel62();
		static jint HEVCProfileMain();
		static jint HEVCProfileMain10();
		static jint HEVCProfileMain10HDR10();
		static jint HEVCProfileMainStill();
		static jint MPEG2LevelH14();
		static jint MPEG2LevelHL();
		static jint MPEG2LevelHP();
		static jint MPEG2LevelLL();
		static jint MPEG2LevelML();
		static jint MPEG2Profile422();
		static jint MPEG2ProfileHigh();
		static jint MPEG2ProfileMain();
		static jint MPEG2ProfileSNR();
		static jint MPEG2ProfileSimple();
		static jint MPEG2ProfileSpatial();
		static jint MPEG4Level0();
		static jint MPEG4Level0b();
		static jint MPEG4Level1();
		static jint MPEG4Level2();
		static jint MPEG4Level3();
		static jint MPEG4Level3b();
		static jint MPEG4Level4();
		static jint MPEG4Level4a();
		static jint MPEG4Level5();
		static jint MPEG4Level6();
		static jint MPEG4ProfileAdvancedCoding();
		static jint MPEG4ProfileAdvancedCore();
		static jint MPEG4ProfileAdvancedRealTime();
		static jint MPEG4ProfileAdvancedScalable();
		static jint MPEG4ProfileAdvancedSimple();
		static jint MPEG4ProfileBasicAnimated();
		static jint MPEG4ProfileCore();
		static jint MPEG4ProfileCoreScalable();
		static jint MPEG4ProfileHybrid();
		static jint MPEG4ProfileMain();
		static jint MPEG4ProfileNbit();
		static jint MPEG4ProfileScalableTexture();
		static jint MPEG4ProfileSimple();
		static jint MPEG4ProfileSimpleFBA();
		static jint MPEG4ProfileSimpleFace();
		static jint MPEG4ProfileSimpleScalable();
		static jint VP8Level_Version0();
		static jint VP8Level_Version1();
		static jint VP8Level_Version2();
		static jint VP8Level_Version3();
		static jint VP8ProfileMain();
		static jint VP9Level1();
		static jint VP9Level11();
		static jint VP9Level2();
		static jint VP9Level21();
		static jint VP9Level3();
		static jint VP9Level31();
		static jint VP9Level4();
		static jint VP9Level41();
		static jint VP9Level5();
		static jint VP9Level51();
		static jint VP9Level52();
		static jint VP9Level6();
		static jint VP9Level61();
		static jint VP9Level62();
		static jint VP9Profile0();
		static jint VP9Profile1();
		static jint VP9Profile2();
		static jint VP9Profile2HDR();
		static jint VP9Profile3();
		static jint VP9Profile3HDR();
		jint level();
		jint profile();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_CodecProfileLevel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_CodecProfileLevel(QJniObject obj);
		
		// Constructors
		MediaCodecInfo_CodecProfileLevel();
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
	};
} // namespace android::media

