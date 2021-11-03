#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::media
{
	class AudioDeviceInfo;
}
namespace android::media
{
	class MediaDataSource;
}
namespace android::media
{
	class MediaDrm_KeyRequest;
}
namespace android::media
{
	class MediaPlayer_DrmInfo;
}
namespace android::media
{
	class MediaTimestamp;
}
namespace android::media
{
	class PlaybackParams;
}
namespace android::media
{
	class SyncParams;
}
namespace android::media
{
	class VolumeShaper;
}
namespace android::media
{
	class VolumeShaper_Configuration;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::view
{
	class Surface;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;
namespace java::util
{
	class UUID;
}

namespace android::media
{
	class MediaPlayer : public JObject
	{
	public:
		// Fields
		static jint MEDIA_ERROR_IO();
		static jint MEDIA_ERROR_MALFORMED();
		static jint MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK();
		static jint MEDIA_ERROR_SERVER_DIED();
		static jint MEDIA_ERROR_TIMED_OUT();
		static jint MEDIA_ERROR_UNKNOWN();
		static jint MEDIA_ERROR_UNSUPPORTED();
		static jint MEDIA_INFO_AUDIO_NOT_PLAYING();
		static jint MEDIA_INFO_BAD_INTERLEAVING();
		static jint MEDIA_INFO_BUFFERING_END();
		static jint MEDIA_INFO_BUFFERING_START();
		static jint MEDIA_INFO_METADATA_UPDATE();
		static jint MEDIA_INFO_NOT_SEEKABLE();
		static jint MEDIA_INFO_STARTED_AS_NEXT();
		static jint MEDIA_INFO_SUBTITLE_TIMED_OUT();
		static jint MEDIA_INFO_UNKNOWN();
		static jint MEDIA_INFO_UNSUPPORTED_SUBTITLE();
		static jint MEDIA_INFO_VIDEO_NOT_PLAYING();
		static jint MEDIA_INFO_VIDEO_RENDERING_START();
		static jint MEDIA_INFO_VIDEO_TRACK_LAGGING();
		static JString MEDIA_MIMETYPE_TEXT_SUBRIP();
		static jint PREPARE_DRM_STATUS_PREPARATION_ERROR();
		static jint PREPARE_DRM_STATUS_PROVISIONING_NETWORK_ERROR();
		static jint PREPARE_DRM_STATUS_PROVISIONING_SERVER_ERROR();
		static jint PREPARE_DRM_STATUS_SUCCESS();
		static jint SEEK_CLOSEST();
		static jint SEEK_CLOSEST_SYNC();
		static jint SEEK_NEXT_SYNC();
		static jint SEEK_PREVIOUS_SYNC();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT();
		static jint VIDEO_SCALING_MODE_SCALE_TO_FIT_WITH_CROPPING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer(QAndroidJniObject obj);
		
		// Constructors
		MediaPlayer();
		
		// Methods
		static android::media::MediaPlayer create(android::content::Context arg0, android::net::Uri arg1);
		static android::media::MediaPlayer create(android::content::Context arg0, jint arg1);
		static android::media::MediaPlayer create(android::content::Context arg0, android::net::Uri arg1, JObject arg2);
		static android::media::MediaPlayer create(android::content::Context arg0, jint arg1, android::media::AudioAttributes arg2, jint arg3);
		static android::media::MediaPlayer create(android::content::Context arg0, android::net::Uri arg1, JObject arg2, android::media::AudioAttributes arg3, jint arg4);
		void addOnRoutingChangedListener(JObject arg0, android::os::Handler arg1);
		void addTimedTextSource(java::io::FileDescriptor arg0, JString arg1);
		void addTimedTextSource(JString arg0, JString arg1);
		void addTimedTextSource(android::content::Context arg0, android::net::Uri arg1, JString arg2);
		void addTimedTextSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2, JString arg3);
		void attachAuxEffect(jint arg0);
		void clearOnMediaTimeDiscontinuityListener();
		void clearOnSubtitleDataListener();
		android::media::VolumeShaper createVolumeShaper(android::media::VolumeShaper_Configuration arg0);
		void deselectTrack(jint arg0);
		jint getAudioSessionId();
		jint getCurrentPosition();
		android::media::MediaPlayer_DrmInfo getDrmInfo();
		JString getDrmPropertyString(JString arg0);
		jint getDuration();
		android::media::MediaDrm_KeyRequest getKeyRequest(JByteArray arg0, JByteArray arg1, JString arg2, jint arg3, JObject arg4);
		android::os::PersistableBundle getMetrics();
		android::media::PlaybackParams getPlaybackParams();
		android::media::AudioDeviceInfo getPreferredDevice();
		android::media::AudioDeviceInfo getRoutedDevice();
		jint getSelectedTrack(jint arg0);
		android::media::SyncParams getSyncParams();
		android::media::MediaTimestamp getTimestamp();
		JArray getTrackInfo();
		jint getVideoHeight();
		jint getVideoWidth();
		jboolean isLooping();
		jboolean isPlaying();
		void pause();
		void prepare();
		void prepareAsync();
		void prepareDrm(java::util::UUID arg0);
		JByteArray provideKeyResponse(JByteArray arg0, JByteArray arg1);
		void release();
		void releaseDrm();
		void removeOnRoutingChangedListener(JObject arg0);
		void reset();
		void restoreKeys(JByteArray arg0);
		void seekTo(jint arg0);
		void seekTo(jlong arg0, jint arg1);
		void selectTrack(jint arg0);
		void setAudioAttributes(android::media::AudioAttributes arg0);
		void setAudioSessionId(jint arg0);
		void setAudioStreamType(jint arg0);
		void setAuxEffectSendLevel(jfloat arg0);
		void setDataSource(android::content::res::AssetFileDescriptor arg0);
		void setDataSource(android::media::MediaDataSource arg0);
		void setDataSource(java::io::FileDescriptor arg0);
		void setDataSource(JString arg0);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2);
		void setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2);
		void setDataSource(android::content::Context arg0, android::net::Uri arg1, JObject arg2, JObject arg3);
		void setDisplay(JObject arg0);
		void setDrmPropertyString(JString arg0, JString arg1);
		void setLooping(jboolean arg0);
		void setNextMediaPlayer(android::media::MediaPlayer arg0);
		void setOnBufferingUpdateListener(JObject arg0);
		void setOnCompletionListener(JObject arg0);
		void setOnDrmConfigHelper(JObject arg0);
		void setOnDrmInfoListener(JObject arg0);
		void setOnDrmInfoListener(JObject arg0, android::os::Handler arg1);
		void setOnDrmPreparedListener(JObject arg0);
		void setOnDrmPreparedListener(JObject arg0, android::os::Handler arg1);
		void setOnErrorListener(JObject arg0);
		void setOnInfoListener(JObject arg0);
		void setOnMediaTimeDiscontinuityListener(JObject arg0);
		void setOnMediaTimeDiscontinuityListener(JObject arg0, android::os::Handler arg1);
		void setOnPreparedListener(JObject arg0);
		void setOnSeekCompleteListener(JObject arg0);
		void setOnSubtitleDataListener(JObject arg0);
		void setOnSubtitleDataListener(JObject arg0, android::os::Handler arg1);
		void setOnTimedMetaDataAvailableListener(JObject arg0);
		void setOnTimedTextListener(JObject arg0);
		void setOnVideoSizeChangedListener(JObject arg0);
		void setPlaybackParams(android::media::PlaybackParams arg0);
		jboolean setPreferredDevice(android::media::AudioDeviceInfo arg0);
		void setScreenOnWhilePlaying(jboolean arg0);
		void setSurface(android::view::Surface arg0);
		void setSyncParams(android::media::SyncParams arg0);
		void setVideoScalingMode(jint arg0);
		void setVolume(jfloat arg0, jfloat arg1);
		void setWakeMode(android::content::Context arg0, jint arg1);
		void start();
		void stop();
	};
} // namespace android::media

