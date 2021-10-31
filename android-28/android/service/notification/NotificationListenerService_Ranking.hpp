#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class NotificationChannel;
}

namespace android::service::notification
{
	class NotificationListenerService_Ranking : public __JniBaseClass
	{
	public:
		// Fields
		static jint USER_SENTIMENT_NEGATIVE();
		static jint USER_SENTIMENT_NEUTRAL();
		static jint USER_SENTIMENT_POSITIVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit NotificationListenerService_Ranking(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NotificationListenerService_Ranking(QJniObject obj);
		
		// Constructors
		NotificationListenerService_Ranking();
		
		// Methods
		jboolean canShowBadge();
		android::app::NotificationChannel getChannel();
		jint getImportance();
		jstring getImportanceExplanation();
		jstring getKey();
		jstring getOverrideGroupKey();
		jint getRank();
		jint getSuppressedVisualEffects();
		jint getUserSentiment();
		jboolean isAmbient();
		jboolean isSuspended();
		jboolean matchesInterruptionFilter();
	};
} // namespace android::service::notification

