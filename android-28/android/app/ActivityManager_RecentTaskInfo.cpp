#include "./ActivityManager_TaskDescription.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Intent.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_RecentTaskInfo.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass ActivityManager_RecentTaskInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RecentTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RecentTaskInfo::affiliatedTaskId()
	{
		return getField<jint>(
			"affiliatedTaskId"
		);
	}
	android::content::ComponentName ActivityManager_RecentTaskInfo::baseActivity()
	{
		return getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	android::content::Intent ActivityManager_RecentTaskInfo::baseIntent()
	{
		return getObjectField(
			"baseIntent",
			"Landroid/content/Intent;"
		);
	}
	jstring ActivityManager_RecentTaskInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ActivityManager_RecentTaskInfo::id()
	{
		return getField<jint>(
			"id"
		);
	}
	jint ActivityManager_RecentTaskInfo::numActivities()
	{
		return getField<jint>(
			"numActivities"
		);
	}
	android::content::ComponentName ActivityManager_RecentTaskInfo::origActivity()
	{
		return getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;"
		);
	}
	jint ActivityManager_RecentTaskInfo::persistentId()
	{
		return getField<jint>(
			"persistentId"
		);
	}
	android::app::ActivityManager_TaskDescription ActivityManager_RecentTaskInfo::taskDescription()
	{
		return getObjectField(
			"taskDescription",
			"Landroid/app/ActivityManager$TaskDescription;"
		);
	}
	android::content::ComponentName ActivityManager_RecentTaskInfo::topActivity()
	{
		return getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo()
		: __JniBaseClass(
			"android.app.ActivityManager$RecentTaskInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_RecentTaskInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RecentTaskInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RecentTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app
