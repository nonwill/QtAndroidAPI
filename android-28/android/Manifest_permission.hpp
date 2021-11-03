#pragma once

#include "../JObject.hpp"


namespace android
{
	class Manifest_permission : public JObject
	{
	public:
		// Fields
		static jstring ACCEPT_HANDOVER();
		static jstring ACCESS_CHECKIN_PROPERTIES();
		static jstring ACCESS_COARSE_LOCATION();
		static jstring ACCESS_FINE_LOCATION();
		static jstring ACCESS_LOCATION_EXTRA_COMMANDS();
		static jstring ACCESS_NETWORK_STATE();
		static jstring ACCESS_NOTIFICATION_POLICY();
		static jstring ACCESS_WIFI_STATE();
		static jstring ACCOUNT_MANAGER();
		static jstring ADD_VOICEMAIL();
		static jstring ANSWER_PHONE_CALLS();
		static jstring BATTERY_STATS();
		static jstring BIND_ACCESSIBILITY_SERVICE();
		static jstring BIND_APPWIDGET();
		static jstring BIND_AUTOFILL_SERVICE();
		static jstring BIND_CARRIER_MESSAGING_SERVICE();
		static jstring BIND_CARRIER_SERVICES();
		static jstring BIND_CHOOSER_TARGET_SERVICE();
		static jstring BIND_CONDITION_PROVIDER_SERVICE();
		static jstring BIND_DEVICE_ADMIN();
		static jstring BIND_DREAM_SERVICE();
		static jstring BIND_INCALL_SERVICE();
		static jstring BIND_INPUT_METHOD();
		static jstring BIND_MIDI_DEVICE_SERVICE();
		static jstring BIND_NFC_SERVICE();
		static jstring BIND_NOTIFICATION_LISTENER_SERVICE();
		static jstring BIND_PRINT_SERVICE();
		static jstring BIND_QUICK_SETTINGS_TILE();
		static jstring BIND_REMOTEVIEWS();
		static jstring BIND_SCREENING_SERVICE();
		static jstring BIND_TELECOM_CONNECTION_SERVICE();
		static jstring BIND_TEXT_SERVICE();
		static jstring BIND_TV_INPUT();
		static jstring BIND_VISUAL_VOICEMAIL_SERVICE();
		static jstring BIND_VOICE_INTERACTION();
		static jstring BIND_VPN_SERVICE();
		static jstring BIND_VR_LISTENER_SERVICE();
		static jstring BIND_WALLPAPER();
		static jstring BLUETOOTH();
		static jstring BLUETOOTH_ADMIN();
		static jstring BLUETOOTH_PRIVILEGED();
		static jstring BODY_SENSORS();
		static jstring BROADCAST_PACKAGE_REMOVED();
		static jstring BROADCAST_SMS();
		static jstring BROADCAST_STICKY();
		static jstring BROADCAST_WAP_PUSH();
		static jstring CALL_PHONE();
		static jstring CALL_PRIVILEGED();
		static jstring CAMERA();
		static jstring CAPTURE_AUDIO_OUTPUT();
		static jstring CAPTURE_SECURE_VIDEO_OUTPUT();
		static jstring CAPTURE_VIDEO_OUTPUT();
		static jstring CHANGE_COMPONENT_ENABLED_STATE();
		static jstring CHANGE_CONFIGURATION();
		static jstring CHANGE_NETWORK_STATE();
		static jstring CHANGE_WIFI_MULTICAST_STATE();
		static jstring CHANGE_WIFI_STATE();
		static jstring CLEAR_APP_CACHE();
		static jstring CONTROL_LOCATION_UPDATES();
		static jstring DELETE_CACHE_FILES();
		static jstring DELETE_PACKAGES();
		static jstring DIAGNOSTIC();
		static jstring DISABLE_KEYGUARD();
		static jstring DUMP();
		static jstring EXPAND_STATUS_BAR();
		static jstring FACTORY_TEST();
		static jstring FOREGROUND_SERVICE();
		static jstring GET_ACCOUNTS();
		static jstring GET_ACCOUNTS_PRIVILEGED();
		static jstring GET_PACKAGE_SIZE();
		static jstring GET_TASKS();
		static jstring GLOBAL_SEARCH();
		static jstring INSTALL_LOCATION_PROVIDER();
		static jstring INSTALL_PACKAGES();
		static jstring INSTALL_SHORTCUT();
		static jstring INSTANT_APP_FOREGROUND_SERVICE();
		static jstring INTERNET();
		static jstring KILL_BACKGROUND_PROCESSES();
		static jstring LOCATION_HARDWARE();
		static jstring MANAGE_DOCUMENTS();
		static jstring MANAGE_OWN_CALLS();
		static jstring MASTER_CLEAR();
		static jstring MEDIA_CONTENT_CONTROL();
		static jstring MODIFY_AUDIO_SETTINGS();
		static jstring MODIFY_PHONE_STATE();
		static jstring MOUNT_FORMAT_FILESYSTEMS();
		static jstring MOUNT_UNMOUNT_FILESYSTEMS();
		static jstring NFC();
		static jstring NFC_TRANSACTION_EVENT();
		static jstring PACKAGE_USAGE_STATS();
		static jstring PERSISTENT_ACTIVITY();
		static jstring PROCESS_OUTGOING_CALLS();
		static jstring READ_CALENDAR();
		static jstring READ_CALL_LOG();
		static jstring READ_CONTACTS();
		static jstring READ_EXTERNAL_STORAGE();
		static jstring READ_FRAME_BUFFER();
		static jstring READ_INPUT_STATE();
		static jstring READ_LOGS();
		static jstring READ_PHONE_NUMBERS();
		static jstring READ_PHONE_STATE();
		static jstring READ_SMS();
		static jstring READ_SYNC_SETTINGS();
		static jstring READ_SYNC_STATS();
		static jstring READ_VOICEMAIL();
		static jstring REBOOT();
		static jstring RECEIVE_BOOT_COMPLETED();
		static jstring RECEIVE_MMS();
		static jstring RECEIVE_SMS();
		static jstring RECEIVE_WAP_PUSH();
		static jstring RECORD_AUDIO();
		static jstring REORDER_TASKS();
		static jstring REQUEST_COMPANION_RUN_IN_BACKGROUND();
		static jstring REQUEST_COMPANION_USE_DATA_IN_BACKGROUND();
		static jstring REQUEST_DELETE_PACKAGES();
		static jstring REQUEST_IGNORE_BATTERY_OPTIMIZATIONS();
		static jstring REQUEST_INSTALL_PACKAGES();
		static jstring RESTART_PACKAGES();
		static jstring SEND_RESPOND_VIA_MESSAGE();
		static jstring SEND_SMS();
		static jstring SET_ALARM();
		static jstring SET_ALWAYS_FINISH();
		static jstring SET_ANIMATION_SCALE();
		static jstring SET_DEBUG_APP();
		static jstring SET_PREFERRED_APPLICATIONS();
		static jstring SET_PROCESS_LIMIT();
		static jstring SET_TIME();
		static jstring SET_TIME_ZONE();
		static jstring SET_WALLPAPER();
		static jstring SET_WALLPAPER_HINTS();
		static jstring SIGNAL_PERSISTENT_PROCESSES();
		static jstring STATUS_BAR();
		static jstring SYSTEM_ALERT_WINDOW();
		static jstring TRANSMIT_IR();
		static jstring UNINSTALL_SHORTCUT();
		static jstring UPDATE_DEVICE_STATS();
		static jstring USE_BIOMETRIC();
		static jstring USE_FINGERPRINT();
		static jstring USE_SIP();
		static jstring VIBRATE();
		static jstring WAKE_LOCK();
		static jstring WRITE_APN_SETTINGS();
		static jstring WRITE_CALENDAR();
		static jstring WRITE_CALL_LOG();
		static jstring WRITE_CONTACTS();
		static jstring WRITE_EXTERNAL_STORAGE();
		static jstring WRITE_GSERVICES();
		static jstring WRITE_SECURE_SETTINGS();
		static jstring WRITE_SETTINGS();
		static jstring WRITE_SYNC_SETTINGS();
		static jstring WRITE_VOICEMAIL();
		
		// QJniObject forward
		template<typename ...Ts> explicit Manifest_permission(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest_permission(QJniObject obj);
		
		// Constructors
		Manifest_permission();
		
		// Methods
	};
} // namespace android

