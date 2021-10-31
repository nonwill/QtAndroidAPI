#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accounts
{
	class Account;
}
namespace android::content
{
	class SyncRequest;
}
namespace android::os
{
	class Bundle;
}

namespace android::content
{
	class SyncRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		SyncRequest_Builder();
		
		// Methods
		android::content::SyncRequest build();
		android::content::SyncRequest_Builder setDisallowMetered(jboolean arg0);
		android::content::SyncRequest_Builder setExpedited(jboolean arg0);
		android::content::SyncRequest_Builder setExtras(android::os::Bundle arg0);
		android::content::SyncRequest_Builder setIgnoreBackoff(jboolean arg0);
		android::content::SyncRequest_Builder setIgnoreSettings(jboolean arg0);
		android::content::SyncRequest_Builder setManual(jboolean arg0);
		android::content::SyncRequest_Builder setNoRetry(jboolean arg0);
		android::content::SyncRequest_Builder setRequiresCharging(jboolean arg0);
		android::content::SyncRequest_Builder setSyncAdapter(android::accounts::Account arg0, jstring arg1);
		android::content::SyncRequest_Builder syncOnce();
		android::content::SyncRequest_Builder syncPeriodic(jlong arg0, jlong arg1);
	};
} // namespace android::content
