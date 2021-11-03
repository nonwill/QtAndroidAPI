#include "../../JArray.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "../../JString.hpp"
#include "./Notification_CarExtender_UnreadConversation.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_CarExtender_UnreadConversation::Notification_CarExtender_UnreadConversation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jlong Notification_CarExtender_UnreadConversation::getLatestTimestamp()
	{
		return callMethod<jlong>(
			"getLatestTimestamp",
			"()J"
		);
	}
	JArray Notification_CarExtender_UnreadConversation::getMessages()
	{
		return callObjectMethod(
			"getMessages",
			"()[Ljava/lang/String;"
		);
	}
	JString Notification_CarExtender_UnreadConversation::getParticipant()
	{
		return callObjectMethod(
			"getParticipant",
			"()Ljava/lang/String;"
		);
	}
	JArray Notification_CarExtender_UnreadConversation::getParticipants()
	{
		return callObjectMethod(
			"getParticipants",
			"()[Ljava/lang/String;"
		);
	}
	android::app::PendingIntent Notification_CarExtender_UnreadConversation::getReadPendingIntent()
	{
		return callObjectMethod(
			"getReadPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	android::app::RemoteInput Notification_CarExtender_UnreadConversation::getRemoteInput()
	{
		return callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;"
		);
	}
	android::app::PendingIntent Notification_CarExtender_UnreadConversation::getReplyPendingIntent()
	{
		return callObjectMethod(
			"getReplyPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
} // namespace android::app

