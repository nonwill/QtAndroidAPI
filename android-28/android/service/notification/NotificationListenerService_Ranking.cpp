#include "../../app/NotificationChannel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./NotificationListenerService_Ranking.hpp"

namespace android::service::notification
{
	// Fields
	jint NotificationListenerService_Ranking::USER_SENTIMENT_NEGATIVE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEGATIVE"
		);
	}
	jint NotificationListenerService_Ranking::USER_SENTIMENT_NEUTRAL()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_NEUTRAL"
		);
	}
	jint NotificationListenerService_Ranking::USER_SENTIMENT_POSITIVE()
	{
		return getStaticField<jint>(
			"android.service.notification.NotificationListenerService$Ranking",
			"USER_SENTIMENT_POSITIVE"
		);
	}
	
	// QAndroidJniObject forward
	NotificationListenerService_Ranking::NotificationListenerService_Ranking(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NotificationListenerService_Ranking::NotificationListenerService_Ranking()
		: JObject(
			"android.service.notification.NotificationListenerService$Ranking",
			"()V"
		) {}
	
	// Methods
	jboolean NotificationListenerService_Ranking::canShowBadge()
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	android::app::NotificationChannel NotificationListenerService_Ranking::getChannel()
	{
		return callObjectMethod(
			"getChannel",
			"()Landroid/app/NotificationChannel;"
		);
	}
	jint NotificationListenerService_Ranking::getImportance()
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	JString NotificationListenerService_Ranking::getImportanceExplanation()
	{
		return callObjectMethod(
			"getImportanceExplanation",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString NotificationListenerService_Ranking::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationListenerService_Ranking::getOverrideGroupKey()
	{
		return callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		);
	}
	jint NotificationListenerService_Ranking::getRank()
	{
		return callMethod<jint>(
			"getRank",
			"()I"
		);
	}
	jint NotificationListenerService_Ranking::getSuppressedVisualEffects()
	{
		return callMethod<jint>(
			"getSuppressedVisualEffects",
			"()I"
		);
	}
	jint NotificationListenerService_Ranking::getUserSentiment()
	{
		return callMethod<jint>(
			"getUserSentiment",
			"()I"
		);
	}
	jboolean NotificationListenerService_Ranking::isAmbient()
	{
		return callMethod<jboolean>(
			"isAmbient",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::isSuspended()
	{
		return callMethod<jboolean>(
			"isSuspended",
			"()Z"
		);
	}
	jboolean NotificationListenerService_Ranking::matchesInterruptionFilter()
	{
		return callMethod<jboolean>(
			"matchesInterruptionFilter",
			"()Z"
		);
	}
} // namespace android::service::notification

