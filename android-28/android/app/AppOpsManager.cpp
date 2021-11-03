#include "./AppOpsManager.hpp"

namespace android::app
{
	// Fields
	jint AppOpsManager::MODE_ALLOWED()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ALLOWED"
		);
	}
	jint AppOpsManager::MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_DEFAULT"
		);
	}
	jint AppOpsManager::MODE_ERRORED()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_ERRORED"
		);
	}
	jint AppOpsManager::MODE_IGNORED()
	{
		return getStaticField<jint>(
			"android.app.AppOpsManager",
			"MODE_IGNORED"
		);
	}
	jstring AppOpsManager::OPSTR_ADD_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ADD_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_ANSWER_PHONE_CALLS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_ANSWER_PHONE_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_BODY_SENSORS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_BODY_SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_CALL_PHONE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_CAMERA()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_COARSE_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_COARSE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_FINE_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_FINE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_GET_USAGE_STATS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_GET_USAGE_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_MOCK_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MOCK_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_MONITOR_HIGH_POWER_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_HIGH_POWER_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_MONITOR_LOCATION()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_MONITOR_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_PICTURE_IN_PICTURE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PICTURE_IN_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_PROCESS_OUTGOING_CALLS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CALENDAR()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CALL_LOG()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CELL_BROADCASTS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CELL_BROADCASTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_CONTACTS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_EXTERNAL_STORAGE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_PHONE_NUMBERS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_NUMBERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_PHONE_STATE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_PHONE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_READ_SMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_READ_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECEIVE_MMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_MMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECEIVE_SMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECEIVE_WAP_PUSH()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECEIVE_WAP_PUSH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_RECORD_AUDIO()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_RECORD_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_SEND_SMS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_SYSTEM_ALERT_WINDOW()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_USE_FINGERPRINT()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_USE_SIP()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_USE_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_CALENDAR()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_CALL_LOG()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_CONTACTS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_EXTERNAL_STORAGE()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AppOpsManager::OPSTR_WRITE_SETTINGS()
	{
		return getStaticObjectField(
			"android.app.AppOpsManager",
			"OPSTR_WRITE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	AppOpsManager::AppOpsManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring AppOpsManager::permissionToOp(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.app.AppOpsManager",
			"permissionToOp",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AppOpsManager::checkOp(jstring arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"checkOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::checkOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"checkOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AppOpsManager::checkPackage(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"checkPackage",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AppOpsManager::finishOp(jstring arg0, jint arg1, jstring arg2)
	{
		callMethod<void>(
			"finishOp",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::noteOp(jstring arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"noteOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::noteOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"noteOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::noteProxyOp(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"noteProxyOp",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint AppOpsManager::noteProxyOpNoThrow(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"noteProxyOpNoThrow",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint AppOpsManager::startOp(jstring arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"startOp",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint AppOpsManager::startOpNoThrow(jstring arg0, jint arg1, jstring arg2)
	{
		return callMethod<jint>(
			"startOpNoThrow",
			"(Ljava/lang/String;ILjava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void AppOpsManager::startWatchingMode(jstring arg0, jstring arg1, JObject arg2)
	{
		callMethod<void>(
			"startWatchingMode",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AppOpsManager::stopWatchingMode(JObject arg0)
	{
		callMethod<void>(
			"stopWatchingMode",
			"(Landroid/app/AppOpsManager$OnOpChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::app

