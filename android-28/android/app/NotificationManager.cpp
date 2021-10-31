#include "./AutomaticZenRule.hpp"
#include "./Notification.hpp"
#include "./NotificationChannel.hpp"
#include "./NotificationChannelGroup.hpp"
#include "./NotificationManager_Policy.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "./NotificationManager.hpp"

namespace android::app
{
	// Fields
	jstring NotificationManager::ACTION_APP_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_APP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_INTERRUPTION_FILTER_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_INTERRUPTION_FILTER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::ACTION_NOTIFICATION_POLICY_CHANGED()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_BLOCKED_STATE()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_BLOCKED_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_NOTIFICATION_CHANNEL_GROUP_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationManager::EXTRA_NOTIFICATION_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationManager::IMPORTANCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_DEFAULT"
		);
	}
	jint NotificationManager::IMPORTANCE_HIGH()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_HIGH"
		);
	}
	jint NotificationManager::IMPORTANCE_LOW()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_LOW"
		);
	}
	jint NotificationManager::IMPORTANCE_MAX()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MAX"
		);
	}
	jint NotificationManager::IMPORTANCE_MIN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MIN"
		);
	}
	jint NotificationManager::IMPORTANCE_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_NONE"
		);
	}
	jint NotificationManager::IMPORTANCE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_UNSPECIFIED"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALARMS()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALL()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_NONE()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_PRIORITY()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	jint NotificationManager::INTERRUPTION_FILTER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	NotificationManager::NotificationManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring NotificationManager::addAutomaticZenRule(android::app::AutomaticZenRule arg0)
	{
		return callObjectMethod(
			"addAutomaticZenRule",
			"(Landroid/app/AutomaticZenRule;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean NotificationManager::areNotificationsEnabled()
	{
		return callMethod<jboolean>(
			"areNotificationsEnabled",
			"()Z"
		);
	}
	void NotificationManager::cancel(jint arg0)
	{
		callMethod<void>(
			"cancel",
			"(I)V",
			arg0
		);
	}
	void NotificationManager::cancel(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"cancel",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void NotificationManager::cancelAll()
	{
		callMethod<void>(
			"cancelAll",
			"()V"
		);
	}
	void NotificationManager::createNotificationChannel(android::app::NotificationChannel arg0)
	{
		callMethod<void>(
			"createNotificationChannel",
			"(Landroid/app/NotificationChannel;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannelGroup(android::app::NotificationChannelGroup arg0)
	{
		callMethod<void>(
			"createNotificationChannelGroup",
			"(Landroid/app/NotificationChannelGroup;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannelGroups(__JniBaseClass arg0)
	{
		callMethod<void>(
			"createNotificationChannelGroups",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void NotificationManager::createNotificationChannels(__JniBaseClass arg0)
	{
		callMethod<void>(
			"createNotificationChannels",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void NotificationManager::deleteNotificationChannel(jstring arg0)
	{
		callMethod<void>(
			"deleteNotificationChannel",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationManager::deleteNotificationChannelGroup(jstring arg0)
	{
		callMethod<void>(
			"deleteNotificationChannelGroup",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jarray NotificationManager::getActiveNotifications()
	{
		return callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	android::app::AutomaticZenRule NotificationManager::getAutomaticZenRule(jstring arg0)
	{
		return callObjectMethod(
			"getAutomaticZenRule",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule;",
			arg0
		);
	}
	__JniBaseClass NotificationManager::getAutomaticZenRules()
	{
		return callObjectMethod(
			"getAutomaticZenRules",
			"()Ljava/util/Map;"
		);
	}
	jint NotificationManager::getCurrentInterruptionFilter()
	{
		return callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	jint NotificationManager::getImportance()
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	android::app::NotificationChannel NotificationManager::getNotificationChannel(jstring arg0)
	{
		return callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0
		);
	}
	android::app::NotificationChannelGroup NotificationManager::getNotificationChannelGroup(jstring arg0)
	{
		return callObjectMethod(
			"getNotificationChannelGroup",
			"(Ljava/lang/String;)Landroid/app/NotificationChannelGroup;",
			arg0
		);
	}
	__JniBaseClass NotificationManager::getNotificationChannelGroups()
	{
		return callObjectMethod(
			"getNotificationChannelGroups",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass NotificationManager::getNotificationChannels()
	{
		return callObjectMethod(
			"getNotificationChannels",
			"()Ljava/util/List;"
		);
	}
	android::app::NotificationManager_Policy NotificationManager::getNotificationPolicy()
	{
		return callObjectMethod(
			"getNotificationPolicy",
			"()Landroid/app/NotificationManager$Policy;"
		);
	}
	jboolean NotificationManager::isNotificationListenerAccessGranted(android::content::ComponentName arg0)
	{
		return callMethod<jboolean>(
			"isNotificationListenerAccessGranted",
			"(Landroid/content/ComponentName;)Z",
			arg0.object()
		);
	}
	jboolean NotificationManager::isNotificationPolicyAccessGranted()
	{
		return callMethod<jboolean>(
			"isNotificationPolicyAccessGranted",
			"()Z"
		);
	}
	void NotificationManager::notify(jint arg0, android::app::Notification arg1)
	{
		callMethod<void>(
			"notify",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.object()
		);
	}
	void NotificationManager::notify(jstring arg0, jint arg1, android::app::Notification arg2)
	{
		callMethod<void>(
			"notify",
			"(Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean NotificationManager::removeAutomaticZenRule(jstring arg0)
	{
		return callMethod<jboolean>(
			"removeAutomaticZenRule",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void NotificationManager::setInterruptionFilter(jint arg0)
	{
		callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	void NotificationManager::setNotificationPolicy(android::app::NotificationManager_Policy arg0)
	{
		callMethod<void>(
			"setNotificationPolicy",
			"(Landroid/app/NotificationManager$Policy;)V",
			arg0.object()
		);
	}
	jboolean NotificationManager::updateAutomaticZenRule(jstring arg0, android::app::AutomaticZenRule arg1)
	{
		return callMethod<jboolean>(
			"updateAutomaticZenRule",
			"(Ljava/lang/String;Landroid/app/AutomaticZenRule;)Z",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

