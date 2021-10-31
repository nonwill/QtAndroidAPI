#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::notification
{
	class NotificationListenerService_Ranking;
}

namespace android::service::notification
{
	class NotificationListenerService_RankingMap : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationListenerService_RankingMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NotificationListenerService_RankingMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getOrderedKeys();
		jboolean getRanking(jstring arg0, android::service::notification::NotificationListenerService_Ranking arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification
