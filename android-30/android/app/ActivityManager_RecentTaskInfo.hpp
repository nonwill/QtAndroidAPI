#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TaskInfo.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_RecentTaskInfo : public android::app::TaskInfo
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		jint affiliatedTaskId();
		jstring description();
		jint id();
		jint persistentId();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager_RecentTaskInfo(const char *className, const char *sig, Ts...agv) : android::app::TaskInfo(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_RecentTaskInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityManager_RecentTaskInfo();
		
		// Methods
		jint describeContents();
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app
