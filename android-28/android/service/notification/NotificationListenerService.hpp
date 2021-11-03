#pragma once

#include "../../app/Service.hpp"

class JArray;
class JArray;
namespace android::app
{
	class NotificationChannel;
}
namespace android::app
{
	class NotificationChannelGroup;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class UserHandle;
}
namespace android::service::notification
{
	class NotificationListenerService_RankingMap;
}
namespace android::service::notification
{
	class StatusBarNotification;
}
class JString;

namespace android::service::notification
{
	class NotificationListenerService : public android::app::Service
	{
	public:
		// Fields
		static jint HINT_HOST_DISABLE_CALL_EFFECTS();
		static jint HINT_HOST_DISABLE_EFFECTS();
		static jint HINT_HOST_DISABLE_NOTIFICATION_EFFECTS();
		static jint INTERRUPTION_FILTER_ALARMS();
		static jint INTERRUPTION_FILTER_ALL();
		static jint INTERRUPTION_FILTER_NONE();
		static jint INTERRUPTION_FILTER_PRIORITY();
		static jint INTERRUPTION_FILTER_UNKNOWN();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_ADDED();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_DELETED();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_UPDATED();
		static jint REASON_APP_CANCEL();
		static jint REASON_APP_CANCEL_ALL();
		static jint REASON_CANCEL();
		static jint REASON_CANCEL_ALL();
		static jint REASON_CHANNEL_BANNED();
		static jint REASON_CLICK();
		static jint REASON_ERROR();
		static jint REASON_GROUP_OPTIMIZATION();
		static jint REASON_GROUP_SUMMARY_CANCELED();
		static jint REASON_LISTENER_CANCEL();
		static jint REASON_LISTENER_CANCEL_ALL();
		static jint REASON_PACKAGE_BANNED();
		static jint REASON_PACKAGE_CHANGED();
		static jint REASON_PACKAGE_SUSPENDED();
		static jint REASON_PROFILE_TURNED_OFF();
		static jint REASON_SNOOZED();
		static jint REASON_TIMEOUT();
		static jint REASON_UNAUTOBUNDLED();
		static jint REASON_USER_STOPPED();
		static JString SERVICE_INTERFACE();
		static jint SUPPRESSED_EFFECT_SCREEN_OFF();
		static jint SUPPRESSED_EFFECT_SCREEN_ON();
		
		// QJniObject forward
		template<typename ...Ts> explicit NotificationListenerService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		NotificationListenerService(QJniObject obj);
		
		// Constructors
		NotificationListenerService();
		
		// Methods
		static void requestRebind(android::content::ComponentName arg0);
		void cancelAllNotifications();
		void cancelNotification(JString arg0);
		void cancelNotification(JString arg0, JString arg1, jint arg2);
		void cancelNotifications(JArray arg0);
		JArray getActiveNotifications();
		JArray getActiveNotifications(JArray arg0);
		jint getCurrentInterruptionFilter();
		jint getCurrentListenerHints();
		android::service::notification::NotificationListenerService_RankingMap getCurrentRanking();
		JObject getNotificationChannelGroups(JString arg0, android::os::UserHandle arg1);
		JObject getNotificationChannels(JString arg0, android::os::UserHandle arg1);
		JArray getSnoozedNotifications();
		JObject onBind(android::content::Intent arg0);
		void onDestroy();
		void onInterruptionFilterChanged(jint arg0);
		void onListenerConnected();
		void onListenerDisconnected();
		void onListenerHintsChanged(jint arg0);
		void onNotificationChannelGroupModified(JString arg0, android::os::UserHandle arg1, android::app::NotificationChannelGroup arg2, jint arg3);
		void onNotificationChannelModified(JString arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2, jint arg3);
		void onNotificationPosted(android::service::notification::StatusBarNotification arg0);
		void onNotificationPosted(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1);
		void onNotificationRankingUpdate(android::service::notification::NotificationListenerService_RankingMap arg0);
		void onNotificationRemoved(android::service::notification::StatusBarNotification arg0);
		void onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1);
		void onNotificationRemoved(android::service::notification::StatusBarNotification arg0, android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2);
		void requestInterruptionFilter(jint arg0);
		void requestListenerHints(jint arg0);
		void requestUnbind();
		void setNotificationsShown(JArray arg0);
		void snoozeNotification(JString arg0, jlong arg1);
		void updateNotificationChannel(JString arg0, android::os::UserHandle arg1, android::app::NotificationChannel arg2);
	};
} // namespace android::service::notification

