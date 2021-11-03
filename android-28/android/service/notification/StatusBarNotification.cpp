#include "../../app/Notification.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./StatusBarNotification.hpp"

namespace android::service::notification
{
	// Fields
	JObject StatusBarNotification::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.StatusBarNotification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	StatusBarNotification::StatusBarNotification(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StatusBarNotification::StatusBarNotification(android::os::Parcel arg0)
		: JObject(
			"android.service.notification.StatusBarNotification",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	StatusBarNotification::StatusBarNotification(JString arg0, JString arg1, jint arg2, JString arg3, jint arg4, jint arg5, jint arg6, android::app::Notification arg7, android::os::UserHandle arg8, jlong arg9)
		: JObject(
			"android.service.notification.StatusBarNotification",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILandroid/app/Notification;Landroid/os/UserHandle;J)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4,
			arg5,
			arg6,
			arg7.object(),
			arg8.object(),
			arg9
		) {}
	
	// Methods
	android::service::notification::StatusBarNotification StatusBarNotification::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/service/notification/StatusBarNotification;"
		);
	}
	jint StatusBarNotification::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString StatusBarNotification::getGroupKey()
	{
		return callObjectMethod(
			"getGroupKey",
			"()Ljava/lang/String;"
		);
	}
	jint StatusBarNotification::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString StatusBarNotification::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	android::app::Notification StatusBarNotification::getNotification()
	{
		return callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	JString StatusBarNotification::getOverrideGroupKey()
	{
		return callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		);
	}
	JString StatusBarNotification::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong StatusBarNotification::getPostTime()
	{
		return callMethod<jlong>(
			"getPostTime",
			"()J"
		);
	}
	JString StatusBarNotification::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	android::os::UserHandle StatusBarNotification::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	jint StatusBarNotification::getUserId()
	{
		return callMethod<jint>(
			"getUserId",
			"()I"
		);
	}
	jboolean StatusBarNotification::isClearable()
	{
		return callMethod<jboolean>(
			"isClearable",
			"()Z"
		);
	}
	jboolean StatusBarNotification::isGroup()
	{
		return callMethod<jboolean>(
			"isGroup",
			"()Z"
		);
	}
	jboolean StatusBarNotification::isOngoing()
	{
		return callMethod<jboolean>(
			"isOngoing",
			"()Z"
		);
	}
	void StatusBarNotification::setOverrideGroupKey(JString arg0)
	{
		callMethod<void>(
			"setOverrideGroupKey",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString StatusBarNotification::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StatusBarNotification::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

