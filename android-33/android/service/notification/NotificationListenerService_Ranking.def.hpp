#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class NotificationChannel;
}
namespace android::content::pm
{
	class ShortcutInfo;
}
class JString;
class JObject;
class JString;

namespace android::service::notification
{
	class NotificationListenerService_Ranking : public JObject
	{
	public:
		// Fields
		static jint USER_SENTIMENT_NEGATIVE();
		static jint USER_SENTIMENT_NEUTRAL();
		static jint USER_SENTIMENT_POSITIVE();
		static jint VISIBILITY_NO_OVERRIDE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationListenerService_Ranking(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationListenerService_Ranking(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NotificationListenerService_Ranking();
		
		// Methods
		jboolean canBubble() const;
		jboolean canShowBadge() const;
		jboolean equals(JObject arg0) const;
		android::app::NotificationChannel getChannel() const;
		android::content::pm::ShortcutInfo getConversationShortcutInfo() const;
		jint getImportance() const;
		JString getImportanceExplanation() const;
		JString getKey() const;
		jlong getLastAudiblyAlertedMillis() const;
		jint getLockscreenVisibilityOverride() const;
		JString getOverrideGroupKey() const;
		jint getRank() const;
		JObject getSmartActions() const;
		JObject getSmartReplies() const;
		jint getSuppressedVisualEffects() const;
		jint getUserSentiment() const;
		jboolean isAmbient() const;
		jboolean isConversation() const;
		jboolean isSuspended() const;
		jboolean matchesInterruptionFilter() const;
	};
} // namespace android::service::notification

