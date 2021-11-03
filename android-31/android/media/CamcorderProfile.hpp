#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class EncoderProfiles;
}
class JString;

namespace android::media
{
	class CamcorderProfile : public JObject
	{
	public:
		// Fields
		static jint QUALITY_1080P();
		static jint QUALITY_2160P();
		static jint QUALITY_2K();
		static jint QUALITY_480P();
		static jint QUALITY_4KDCI();
		static jint QUALITY_720P();
		static jint QUALITY_8KUHD();
		static jint QUALITY_CIF();
		static jint QUALITY_HIGH();
		static jint QUALITY_HIGH_SPEED_1080P();
		static jint QUALITY_HIGH_SPEED_2160P();
		static jint QUALITY_HIGH_SPEED_480P();
		static jint QUALITY_HIGH_SPEED_4KDCI();
		static jint QUALITY_HIGH_SPEED_720P();
		static jint QUALITY_HIGH_SPEED_CIF();
		static jint QUALITY_HIGH_SPEED_HIGH();
		static jint QUALITY_HIGH_SPEED_LOW();
		static jint QUALITY_HIGH_SPEED_VGA();
		static jint QUALITY_LOW();
		static jint QUALITY_QCIF();
		static jint QUALITY_QHD();
		static jint QUALITY_QVGA();
		static jint QUALITY_TIME_LAPSE_1080P();
		static jint QUALITY_TIME_LAPSE_2160P();
		static jint QUALITY_TIME_LAPSE_2K();
		static jint QUALITY_TIME_LAPSE_480P();
		static jint QUALITY_TIME_LAPSE_4KDCI();
		static jint QUALITY_TIME_LAPSE_720P();
		static jint QUALITY_TIME_LAPSE_8KUHD();
		static jint QUALITY_TIME_LAPSE_CIF();
		static jint QUALITY_TIME_LAPSE_HIGH();
		static jint QUALITY_TIME_LAPSE_LOW();
		static jint QUALITY_TIME_LAPSE_QCIF();
		static jint QUALITY_TIME_LAPSE_QHD();
		static jint QUALITY_TIME_LAPSE_QVGA();
		static jint QUALITY_TIME_LAPSE_VGA();
		static jint QUALITY_VGA();
		jint audioBitRate();
		jint audioChannels();
		jint audioCodec();
		jint audioSampleRate();
		jint duration();
		jint fileFormat();
		jint quality();
		jint videoBitRate();
		jint videoCodec();
		jint videoFrameHeight();
		jint videoFrameRate();
		jint videoFrameWidth();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CamcorderProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CamcorderProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::CamcorderProfile get(jint arg0);
		static android::media::CamcorderProfile get(jint arg0, jint arg1);
		static android::media::EncoderProfiles getAll(JString arg0, jint arg1);
		static jboolean hasProfile(jint arg0);
		static jboolean hasProfile(jint arg0, jint arg1);
	};
} // namespace android::media

