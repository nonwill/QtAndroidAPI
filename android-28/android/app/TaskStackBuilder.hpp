#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::app
{
	class PendingIntent;
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
	class Bundle;
}

namespace android::app
{
	class TaskStackBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TaskStackBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TaskStackBuilder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::TaskStackBuilder create(android::content::Context arg0);
		android::app::TaskStackBuilder addNextIntent(android::content::Intent arg0);
		android::app::TaskStackBuilder addNextIntentWithParentStack(android::content::Intent arg0);
		android::app::TaskStackBuilder addParentStack(android::app::Activity arg0);
		android::app::TaskStackBuilder addParentStack(android::content::ComponentName arg0);
		android::app::TaskStackBuilder addParentStack(jclass arg0);
		android::content::Intent editIntentAt(jint arg0);
		jint getIntentCount();
		jarray getIntents();
		android::app::PendingIntent getPendingIntent(jint arg0, jint arg1);
		android::app::PendingIntent getPendingIntent(jint arg0, jint arg1, android::os::Bundle arg2);
		void startActivities();
		void startActivities(android::os::Bundle arg0);
	};
} // namespace android::app
