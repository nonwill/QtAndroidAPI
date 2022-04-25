#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JFloatArray;
class JShortArray;
namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class AudioFormat;
}
namespace android::media
{
	class AudioTimestamp;
}
namespace android::media
{
	class MediaSyncEvent;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class AudioRecord : public JObject
	{
	public:
		// Fields
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint READ_BLOCKING();
		static jint READ_NON_BLOCKING();
		static jint RECORDSTATE_RECORDING();
		static jint RECORDSTATE_STOPPED();
		static jint STATE_INITIALIZED();
		static jint STATE_UNINITIALIZED();
		static jint SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioRecord(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		static jint getMinBufferSize(jint arg0, jint arg1, jint arg2);
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1) const;
		JObject getActiveMicrophones() const;
		jint getAudioFormat() const;
		jint getAudioSessionId() const;
		jint getAudioSource() const;
		jint getBufferSizeInFrames() const;
		jint getChannelConfiguration() const;
		jint getChannelCount() const;
		android::media::AudioFormat getFormat() const;
		android::os::PersistableBundle getMetrics() const;
		jint getNotificationMarkerPosition() const;
		jint getPositionNotificationPeriod() const;
		android::media::AudioDeviceInfo getPreferredDevice() const;
		jint getRecordingState() const;
		android::media::AudioDeviceInfo getRoutedDevice() const;
		jint getSampleRate() const;
		jint getState() const;
		jint getTimestamp(android::media::AudioTimestamp arg0, jint arg1) const;
		jint read(java::nio::ByteBuffer arg0, jint arg1) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jint read(JShortArray arg0, jint arg1, jint arg2) const;
		jint read(java::nio::ByteBuffer arg0, jint arg1, jint arg2) const;
		jint read(JByteArray arg0, jint arg1, jint arg2, jint arg3) const;
		jint read(JFloatArray arg0, jint arg1, jint arg2, jint arg3) const;
		jint read(JShortArray arg0, jint arg1, jint arg2, jint arg3) const;
		void release() const;
		void removeOnRoutingChangedListener(JObject arg0) const;
		jint setNotificationMarkerPosition(jint arg0) const;
		jint setPositionNotificationPeriod(jint arg0) const;
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0) const;
		void setRecordPositionUpdateListener(JObject arg0) const;
		void setRecordPositionUpdateListener(JObject arg0, android::os::Handler arg1) const;
		void startRecording() const;
		void startRecording(android::media::MediaSyncEvent arg0) const;
		void stop() const;
	};
} // namespace android::media
