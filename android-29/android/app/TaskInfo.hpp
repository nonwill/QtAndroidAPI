#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class ActivityManager_TaskDescription;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}

namespace android::app
{
	class TaskInfo : public __JniBaseClass
	{
	public:
		// Fields
		android::content::ComponentName baseActivity();
		android::content::Intent baseIntent();
		jboolean isRunning();
		jint numActivities();
		android::content::ComponentName origActivity();
		android::app::ActivityManager_TaskDescription taskDescription();
		jint taskId();
		android::content::ComponentName topActivity();
		
		// QJniObject forward
		template<typename ...Ts> explicit TaskInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TaskInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace android::app

