#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class AutomaticZenRule;
}
namespace android::app
{
	class Notification;
}
namespace android::app
{
	class NotificationChannel;
}
namespace android::app
{
	class NotificationChannelGroup;
}
namespace android::app
{
	class NotificationManager_Policy;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::app
{
	class NotificationManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_APP_BLOCK_STATE_CHANGED();
		static JString ACTION_INTERRUPTION_FILTER_CHANGED();
		static JString ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED();
		static JString ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED();
		static JString ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED();
		static JString ACTION_NOTIFICATION_POLICY_CHANGED();
		static JString EXTRA_BLOCKED_STATE();
		static JString EXTRA_NOTIFICATION_CHANNEL_GROUP_ID();
		static JString EXTRA_NOTIFICATION_CHANNEL_ID();
		static jint IMPORTANCE_DEFAULT();
		static jint IMPORTANCE_HIGH();
		static jint IMPORTANCE_LOW();
		static jint IMPORTANCE_MAX();
		static jint IMPORTANCE_MIN();
		static jint IMPORTANCE_NONE();
		static jint IMPORTANCE_UNSPECIFIED();
		static jint INTERRUPTION_FILTER_ALARMS();
		static jint INTERRUPTION_FILTER_ALL();
		static jint INTERRUPTION_FILTER_NONE();
		static jint INTERRUPTION_FILTER_PRIORITY();
		static jint INTERRUPTION_FILTER_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString addAutomaticZenRule(android::app::AutomaticZenRule arg0);
		jboolean areNotificationsEnabled();
		void cancel(jint arg0);
		void cancel(JString arg0, jint arg1);
		void cancelAll();
		void createNotificationChannel(android::app::NotificationChannel arg0);
		void createNotificationChannelGroup(android::app::NotificationChannelGroup arg0);
		void createNotificationChannelGroups(JObject arg0);
		void createNotificationChannels(JObject arg0);
		void deleteNotificationChannel(JString arg0);
		void deleteNotificationChannelGroup(JString arg0);
		JArray getActiveNotifications();
		android::app::AutomaticZenRule getAutomaticZenRule(JString arg0);
		JObject getAutomaticZenRules();
		jint getCurrentInterruptionFilter();
		jint getImportance();
		android::app::NotificationChannel getNotificationChannel(JString arg0);
		android::app::NotificationChannelGroup getNotificationChannelGroup(JString arg0);
		JObject getNotificationChannelGroups();
		JObject getNotificationChannels();
		android::app::NotificationManager_Policy getNotificationPolicy();
		jboolean isNotificationListenerAccessGranted(android::content::ComponentName arg0);
		jboolean isNotificationPolicyAccessGranted();
		void notify(jint arg0, android::app::Notification arg1);
		void notify(JString arg0, jint arg1, android::app::Notification arg2);
		jboolean removeAutomaticZenRule(JString arg0);
		void setInterruptionFilter(jint arg0);
		void setNotificationPolicy(android::app::NotificationManager_Policy arg0);
		jboolean updateAutomaticZenRule(JString arg0, android::app::AutomaticZenRule arg1);
	};
} // namespace android::app

