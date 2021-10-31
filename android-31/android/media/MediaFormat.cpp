#include "../../java/lang/Number.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaFormat.hpp"

namespace android::media
{
	// Fields
	jint MediaFormat::COLOR_RANGE_FULL()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_FULL"
		);
	}
	jint MediaFormat::COLOR_RANGE_LIMITED()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_LIMITED"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT2020()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT2020"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT601_NTSC()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_NTSC"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT601_PAL()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_PAL"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT709()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT709"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_HLG()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_HLG"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_LINEAR()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_LINEAR"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_SDR_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_SDR_VIDEO"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_ST2084()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_ST2084"
		);
	}
	jstring MediaFormat::KEY_AAC_DRC_ALBUM_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_ALBUM_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_ATTENUATION_FACTOR()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_ATTENUATION_FACTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_BOOST_FACTOR()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_BOOST_FACTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_EFFECT_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_EFFECT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_HEAVY_COMPRESSION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_HEAVY_COMPRESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_OUTPUT_LOUDNESS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_OUTPUT_LOUDNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_TARGET_REFERENCE_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_TARGET_REFERENCE_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_ENCODED_TARGET_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_ENCODED_TARGET_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_PROFILE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_SBR_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_SBR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_ALLOW_FRAME_DROP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ALLOW_FRAME_DROP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AUDIO_SESSION_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AUDIO_SESSION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_BITRATE_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BITRATE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_BIT_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BIT_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CAPTION_SERVICE_NUMBER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CAPTION_SERVICE_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CAPTURE_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CAPTURE_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CHANNEL_MASK()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_MASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CODECS_STRING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CODECS_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_FORMAT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_RANGE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_RANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_STANDARD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_STANDARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_TRANSFER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_TRANSFER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_TRANSFER_REQUEST()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_TRANSFER_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COMPLEXITY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COMPLEXITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CREATE_INPUT_SURFACE_SUSPENDED()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CREATE_INPUT_SURFACE_SUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_DURATION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_ENCODER_DELAY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ENCODER_DELAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_ENCODER_PADDING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ENCODER_PADDING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_FLAC_COMPRESSION_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FLAC_COMPRESSION_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_FRAME_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FRAME_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_GRID_COLUMNS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_COLUMNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_GRID_ROWS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_ROWS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HAPTIC_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HAPTIC_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HARDWARE_AV_SYNC_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HARDWARE_AV_SYNC_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HDR10_PLUS_INFO()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HDR_STATIC_INFO()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR_STATIC_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_INTRA_REFRESH_PERIOD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_INTRA_REFRESH_PERIOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_ADTS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_ADTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_AUTOSELECT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_AUTOSELECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_DEFAULT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_FORCED_SUBTITLE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_FORCED_SUBTITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_I_FRAME_INTERVAL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_I_FRAME_INTERVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LANGUAGE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LANGUAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LATENCY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LOW_LATENCY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LOW_LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_B_FRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_B_FRAMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_FPS_TO_ENCODER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_FPS_TO_ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_INPUT_SIZE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_INPUT_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_PTS_GAP_TO_ENCODER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_PTS_GAP_TO_ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MIME()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MPEGH_COMPATIBLE_SETS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MPEGH_COMPATIBLE_SETS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MPEGH_PROFILE_LEVEL_INDICATION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MPEGH_PROFILE_LEVEL_INDICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_OPERATING_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OPERATING_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_OUTPUT_REORDER_DEPTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OUTPUT_REORDER_DEPTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PCM_ENCODING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PCM_ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PIXEL_ASPECT_RATIO_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PIXEL_ASPECT_RATIO_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PIXEL_ASPECT_RATIO_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PIXEL_ASPECT_RATIO_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PREPEND_HEADER_TO_SYNC_FRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PREPEND_HEADER_TO_SYNC_FRAMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PRIORITY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PRIORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PROFILE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PUSH_BLANK_BUFFERS_ON_STOP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PUSH_BLANK_BUFFERS_ON_STOP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_QUALITY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_QUALITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_REPEAT_PREVIOUS_FRAME_AFTER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_REPEAT_PREVIOUS_FRAME_AFTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_ROTATION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_SAMPLE_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SAMPLE_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_SLICE_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SLICE_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_SLOW_MOTION_MARKERS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SLOW_MOTION_MARKERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_STRIDE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_STRIDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TEMPORAL_LAYERING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TEMPORAL_LAYERING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TILE_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TILE_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TRACK_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TRACK_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_B_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_B_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_B_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_B_MIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_I_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_I_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_I_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_I_MIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_MIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_P_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_P_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_VIDEO_QP_P_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_P_MIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AAC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AC3()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AC4()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AMR_NB()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_NB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AMR_WB()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_WB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_EAC3()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_EAC3_JOC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3_JOC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_FLAC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_FLAC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_G711_ALAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_ALAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_G711_MLAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_MLAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_MPEG()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_MPEGH_MHA1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_MHA1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_MPEGH_MHM1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_MHM1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_MSGSM()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MSGSM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_OPUS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_OPUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_QCELP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_QCELP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_RAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_SCRAMBLED()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_SCRAMBLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_VORBIS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_VORBIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_IMAGE_ANDROID_HEIC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_IMAGE_ANDROID_HEIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_CEA_608()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_608",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_CEA_708()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_708",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_SUBRIP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_VTT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_VTT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_AV1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AV1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_AVC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AVC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_DOLBY_VISION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_DOLBY_VISION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_H263()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_H263",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_HEVC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_HEVC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_MPEG2()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_MPEG4()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_RAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_SCRAMBLED()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_SCRAMBLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_VP8()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP8",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_VP9()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP9",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaFormat::TYPE_BYTE_BUFFER()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_BYTE_BUFFER"
		);
	}
	jint MediaFormat::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_FLOAT"
		);
	}
	jint MediaFormat::TYPE_INTEGER()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_INTEGER"
		);
	}
	jint MediaFormat::TYPE_LONG()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_LONG"
		);
	}
	jint MediaFormat::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_NULL"
		);
	}
	jint MediaFormat::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_STRING"
		);
	}
	
	// QAndroidJniObject forward
	MediaFormat::MediaFormat(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaFormat::MediaFormat()
		: __JniBaseClass(
			"android.media.MediaFormat",
			"()V"
		) {}
	MediaFormat::MediaFormat(android::media::MediaFormat &arg0)
		: __JniBaseClass(
			"android.media.MediaFormat",
			"(Landroid/media/MediaFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::MediaFormat MediaFormat::createAudioFormat(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat",
			"createAudioFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0,
			arg1,
			arg2
		);
	}
	android::media::MediaFormat MediaFormat::createSubtitleFormat(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat",
			"createSubtitleFormat",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaFormat;",
			arg0,
			arg1
		);
	}
	android::media::MediaFormat MediaFormat::createVideoFormat(jstring arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat",
			"createVideoFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean MediaFormat::containsFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MediaFormat::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	java::nio::ByteBuffer MediaFormat::getByteBuffer(jstring arg0)
	{
		return callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer MediaFormat::getByteBuffer(jstring arg0, java::nio::ByteBuffer arg1)
	{
		return callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object()
		);
	}
	jboolean MediaFormat::getFeatureEnabled(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeatureEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	__JniBaseClass MediaFormat::getFeatures()
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	jfloat MediaFormat::getFloat(jstring arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat MediaFormat::getFloat(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jint MediaFormat::getInteger(jstring arg0)
	{
		return callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint MediaFormat::getInteger(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	__JniBaseClass MediaFormat::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	jlong MediaFormat::getLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong MediaFormat::getLong(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	java::lang::Number MediaFormat::getNumber(jstring arg0)
	{
		return callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0
		);
	}
	java::lang::Number MediaFormat::getNumber(jstring arg0, java::lang::Number arg1)
	{
		return callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;Ljava/lang/Number;)Ljava/lang/Number;",
			arg0,
			arg1.object()
		);
	}
	jstring MediaFormat::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaFormat::getString(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint MediaFormat::getValueTypeForKey(jstring arg0)
	{
		return callMethod<jint>(
			"getValueTypeForKey",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	void MediaFormat::removeFeature(jstring arg0)
	{
		callMethod<void>(
			"removeFeature",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaFormat::removeKey(jstring arg0)
	{
		callMethod<void>(
			"removeKey",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaFormat::setByteBuffer(jstring arg0, java::nio::ByteBuffer arg1)
	{
		callMethod<void>(
			"setByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaFormat::setFeatureEnabled(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeatureEnabled",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setFloat(jstring arg0, jfloat arg1)
	{
		callMethod<void>(
			"setFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setInteger(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"setInteger",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setLong(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"setLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setString(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring MediaFormat::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media
