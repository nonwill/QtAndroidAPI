#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class Notification_BubbleMetadata : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_BubbleMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_BubbleMetadata(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean getAutoExpandBubble();
		android::app::PendingIntent getDeleteIntent();
		jint getDesiredHeight();
		jint getDesiredHeightResId();
		android::graphics::drawable::Icon getIcon();
		android::app::PendingIntent getIntent();
		JString getShortcutId();
		jboolean isNotificationSuppressed();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

