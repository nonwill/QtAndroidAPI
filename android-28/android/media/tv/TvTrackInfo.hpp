#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::media::tv
{
	class TvTrackInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_AUDIO();
		static jint TYPE_SUBTITLE();
		static jint TYPE_VIDEO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvTrackInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvTrackInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getAudioChannelCount();
		jint getAudioSampleRate();
		JString getDescription();
		android::os::Bundle getExtra();
		JString getId();
		JString getLanguage();
		jint getType();
		jbyte getVideoActiveFormatDescription();
		jfloat getVideoFrameRate();
		jint getVideoHeight();
		jfloat getVideoPixelAspectRatio();
		jint getVideoWidth();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::tv

