#include "./Notification_BubbleMetadata.hpp"
#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Notification_BubbleMetadata_Builder.hpp"

namespace android::app
{
	// Fields
	
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_BubbleMetadata_Builder::Notification_BubbleMetadata_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$BubbleMetadata$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Notification_BubbleMetadata_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setAutoExpandBubble(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAutoExpandBubble",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setDeleteIntent(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setDesiredHeight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDesiredHeight",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setDesiredHeightResId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDesiredHeightResId",
			"(I)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setIcon(android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setIntent(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_BubbleMetadata_Builder::setSuppressNotification(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setSuppressNotification",
			"(Z)Landroid/app/Notification$BubbleMetadata$Builder;",
			arg0
		);
	}
} // namespace android::app
