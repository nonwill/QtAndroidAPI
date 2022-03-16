#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class AudioFormat;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::media
{
	class AudioRecordingConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioRecordingConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecordingConfiguration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::media::AudioDeviceInfo getAudioDevice() const;
		jint getClientAudioSessionId() const;
		jint getClientAudioSource() const;
		android::media::AudioFormat getClientFormat() const;
		android::media::AudioFormat getFormat() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

