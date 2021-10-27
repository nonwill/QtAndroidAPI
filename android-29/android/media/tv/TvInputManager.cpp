#include "./TvContentRating.hpp"
#include "./TvInputInfo.hpp"
#include "./TvInputManager_TvInputCallback.hpp"
#include "../../os/Handler.hpp"
#include "./TvInputManager.hpp"

namespace android::media::tv
{
	// Fields
	jstring TvInputManager::ACTION_BLOCKED_RATINGS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_BLOCKED_RATINGS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputManager::ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputManager::ACTION_QUERY_CONTENT_RATING_SYSTEMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_QUERY_CONTENT_RATING_SYSTEMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputManager::ACTION_SETUP_INPUTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_SETUP_INPUTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputManager::ACTION_VIEW_RECORDING_SCHEDULES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputManager",
			"ACTION_VIEW_RECORDING_SCHEDULES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TvInputManager::INPUT_STATE_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_CONNECTED"
		);
	}
	jint TvInputManager::INPUT_STATE_CONNECTED_STANDBY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_CONNECTED_STANDBY"
		);
	}
	jint TvInputManager::INPUT_STATE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"INPUT_STATE_DISCONNECTED"
		);
	}
	jstring TvInputManager::META_DATA_CONTENT_RATING_SYSTEMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputManager",
			"META_DATA_CONTENT_RATING_SYSTEMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint TvInputManager::RECORDING_ERROR_INSUFFICIENT_SPACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_INSUFFICIENT_SPACE"
		);
	}
	jint TvInputManager::RECORDING_ERROR_RESOURCE_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_RESOURCE_BUSY"
		);
	}
	jint TvInputManager::RECORDING_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"RECORDING_ERROR_UNKNOWN"
		);
	}
	jlong TvInputManager::TIME_SHIFT_INVALID_TIME()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_INVALID_TIME"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_AVAILABLE"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNAVAILABLE"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNKNOWN"
		);
	}
	jint TvInputManager::TIME_SHIFT_STATUS_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"TIME_SHIFT_STATUS_UNSUPPORTED"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_BUFFERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_BUFFERING"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_TUNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_TUNING"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_UNKNOWN"
		);
	}
	jint TvInputManager::VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvInputManager",
			"VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL"
		);
	}
	
	TvInputManager::TvInputManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TvInputManager::getBlockedRatings()
	{
		return __thiz.callObjectMethod(
			"getBlockedRatings",
			"()Ljava/util/List;"
		);
	}
	jint TvInputManager::getInputState(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getInputState",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint TvInputManager::getInputState(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getInputState",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TvInputManager::getTvInputInfo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getTvInputInfo",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputInfo;",
			arg0
		);
	}
	QAndroidJniObject TvInputManager::getTvInputInfo(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getTvInputInfo",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TvInputManager::getTvInputList()
	{
		return __thiz.callObjectMethod(
			"getTvInputList",
			"()Ljava/util/List;"
		);
	}
	jboolean TvInputManager::isParentalControlsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isParentalControlsEnabled",
			"()Z"
		);
	}
	jboolean TvInputManager::isRatingBlocked(android::media::tv::TvContentRating arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRatingBlocked",
			"(Landroid/media/tv/TvContentRating;)Z",
			arg0.__jniObject().object()
		);
	}
	void TvInputManager::registerCallback(android::media::tv::TvInputManager_TvInputCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/tv/TvInputManager$TvInputCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void TvInputManager::unregisterCallback(android::media::tv::TvInputManager_TvInputCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/tv/TvInputManager$TvInputCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void TvInputManager::updateTvInputInfo(android::media::tv::TvInputInfo arg0)
	{
		__thiz.callMethod<void>(
			"updateTvInputInfo",
			"(Landroid/media/tv/TvInputInfo;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::tv
