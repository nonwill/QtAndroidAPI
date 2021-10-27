#include "../content/Context.hpp"
#include "./Settings.hpp"

namespace android::provider
{
	// Fields
	jstring Settings::ACTION_ACCESSIBILITY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_ACCESSIBILITY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_ADD_ACCOUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_ADD_ACCOUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_AIRPLANE_MODE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_AIRPLANE_MODE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APN_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APN_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APPLICATION_DETAILS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APPLICATION_DETAILS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APPLICATION_DEVELOPMENT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APPLICATION_DEVELOPMENT_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APPLICATION_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APPLICATION_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APP_NOTIFICATION_BUBBLE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_NOTIFICATION_BUBBLE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APP_NOTIFICATION_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_NOTIFICATION_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APP_SEARCH_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_SEARCH_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_APP_USAGE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_APP_USAGE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_BATTERY_SAVER_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_BATTERY_SAVER_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_BLUETOOTH_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_BLUETOOTH_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_CAPTIONING_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CAPTIONING_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_CAST_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CAST_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_CHANNEL_NOTIFICATION_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_CHANNEL_NOTIFICATION_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_DATA_ROAMING_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DATA_ROAMING_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_DATA_USAGE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DATA_USAGE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_DATE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DATE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_DEVICE_INFO_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DEVICE_INFO_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_DISPLAY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DISPLAY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_DREAM_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_DREAM_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_FINGERPRINT_ENROLL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_FINGERPRINT_ENROLL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_HARD_KEYBOARD_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_HARD_KEYBOARD_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_HOME_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_HOME_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_IGNORE_BACKGROUND_DATA_RESTRICTIONS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_IGNORE_BACKGROUND_DATA_RESTRICTIONS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_IGNORE_BATTERY_OPTIMIZATION_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_IGNORE_BATTERY_OPTIMIZATION_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_INPUT_METHOD_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_INPUT_METHOD_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_INPUT_METHOD_SUBTYPE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_INPUT_METHOD_SUBTYPE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_INTERNAL_STORAGE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_INTERNAL_STORAGE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_LOCALE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_LOCALE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_LOCATION_SOURCE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_LOCATION_SOURCE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MANAGE_ALL_APPLICATIONS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_ALL_APPLICATIONS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MANAGE_APPLICATIONS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_APPLICATIONS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MANAGE_DEFAULT_APPS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_DEFAULT_APPS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MANAGE_OVERLAY_PERMISSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_OVERLAY_PERMISSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MANAGE_UNKNOWN_APP_SOURCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_UNKNOWN_APP_SOURCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MANAGE_WRITE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MANAGE_WRITE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_MEMORY_CARD_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_MEMORY_CARD_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NETWORK_OPERATOR_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NETWORK_OPERATOR_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NFCSHARING_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NFCSHARING_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NFC_PAYMENT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NFC_PAYMENT_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NFC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NFC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NIGHT_DISPLAY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NIGHT_DISPLAY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NOTIFICATION_ASSISTANT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_ASSISTANT_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NOTIFICATION_LISTENER_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_LISTENER_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_PRINT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_PRINT_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_PRIVACY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_PRIVACY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_PROCESS_WIFI_EASY_CONNECT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_PROCESS_WIFI_EASY_CONNECT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_QUICK_LAUNCH_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_QUICK_LAUNCH_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_REQUEST_SET_AUTOFILL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_REQUEST_SET_AUTOFILL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_SEARCH_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SEARCH_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_SECURITY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SECURITY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_SHOW_REGULATORY_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SHOW_REGULATORY_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_SOUND_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SOUND_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_STORAGE_VOLUME_ACCESS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_STORAGE_VOLUME_ACCESS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_SYNC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_SYNC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_USAGE_ACCESS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_USAGE_ACCESS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_USER_DICTIONARY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_USER_DICTIONARY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_VOICE_CONTROL_AIRPLANE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_CONTROL_AIRPLANE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_VOICE_CONTROL_BATTERY_SAVER_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_CONTROL_BATTERY_SAVER_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_VOICE_CONTROL_DO_NOT_DISTURB_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_CONTROL_DO_NOT_DISTURB_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_VOICE_INPUT_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VOICE_INPUT_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_VPN_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VPN_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_VR_LISTENER_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_VR_LISTENER_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_WEBVIEW_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WEBVIEW_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_WIFI_IP_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIFI_IP_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_WIFI_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIFI_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_WIRELESS_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_WIRELESS_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::ACTION_ZEN_MODE_PRIORITY_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"ACTION_ZEN_MODE_PRIORITY_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_ACCOUNT_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_ACCOUNT_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_AIRPLANE_MODE_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_AIRPLANE_MODE_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_APP_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_APP_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_AUTHORITIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_AUTHORITIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_BATTERY_SAVER_MODE_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_BATTERY_SAVER_MODE_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_DO_NOT_DISTURB_MODE_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_DO_NOT_DISTURB_MODE_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_DO_NOT_DISTURB_MODE_MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_DO_NOT_DISTURB_MODE_MINUTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_INPUT_METHOD_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_INPUT_METHOD_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::EXTRA_SUB_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"EXTRA_SUB_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::INTENT_CATEGORY_USAGE_ACCESS_CONFIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"INTENT_CATEGORY_USAGE_ACCESS_CONFIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings::METADATA_USAGE_ACCESS_REASON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings",
			"METADATA_USAGE_ACCESS_REASON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Settings::Settings(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Settings::Settings()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings",
			"()V"
		);
	}
	
	// Methods
	jboolean Settings::canDrawOverlays(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings",
			"canDrawOverlays",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::provider

