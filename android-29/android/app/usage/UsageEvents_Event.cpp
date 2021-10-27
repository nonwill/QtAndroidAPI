#include "../../content/res/Configuration.hpp"
#include "./UsageEvents_Event.hpp"

namespace android::app::usage
{
	// Fields
	jint UsageEvents_Event::ACTIVITY_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_PAUSED"
		);
	}
	jint UsageEvents_Event::ACTIVITY_RESUMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_RESUMED"
		);
	}
	jint UsageEvents_Event::ACTIVITY_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_STOPPED"
		);
	}
	jint UsageEvents_Event::CONFIGURATION_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"CONFIGURATION_CHANGE"
		);
	}
	jint UsageEvents_Event::DEVICE_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"DEVICE_SHUTDOWN"
		);
	}
	jint UsageEvents_Event::DEVICE_STARTUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"DEVICE_STARTUP"
		);
	}
	jint UsageEvents_Event::FOREGROUND_SERVICE_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"FOREGROUND_SERVICE_START"
		);
	}
	jint UsageEvents_Event::FOREGROUND_SERVICE_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"FOREGROUND_SERVICE_STOP"
		);
	}
	jint UsageEvents_Event::KEYGUARD_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_HIDDEN"
		);
	}
	jint UsageEvents_Event::KEYGUARD_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_SHOWN"
		);
	}
	jint UsageEvents_Event::MOVE_TO_BACKGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_BACKGROUND"
		);
	}
	jint UsageEvents_Event::MOVE_TO_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_FOREGROUND"
		);
	}
	jint UsageEvents_Event::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"NONE"
		);
	}
	jint UsageEvents_Event::SCREEN_INTERACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_INTERACTIVE"
		);
	}
	jint UsageEvents_Event::SCREEN_NON_INTERACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_NON_INTERACTIVE"
		);
	}
	jint UsageEvents_Event::SHORTCUT_INVOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SHORTCUT_INVOCATION"
		);
	}
	jint UsageEvents_Event::STANDBY_BUCKET_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"STANDBY_BUCKET_CHANGED"
		);
	}
	jint UsageEvents_Event::USER_INTERACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"USER_INTERACTION"
		);
	}
	
	UsageEvents_Event::UsageEvents_Event(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UsageEvents_Event::UsageEvents_Event()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.UsageEvents$Event",
			"()V"
		);
	}
	
	// Methods
	jint UsageEvents_Event::getAppStandbyBucket()
	{
		return __thiz.callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	jstring UsageEvents_Event::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject UsageEvents_Event::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jint UsageEvents_Event::getEventType()
	{
		return __thiz.callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jstring UsageEvents_Event::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsageEvents_Event::getShortcutId()
	{
		return __thiz.callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong UsageEvents_Event::getTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
} // namespace android::app::usage
