#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class PersistableBundle;
}

namespace android::telephony
{
	class CarrierConfigManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CARRIER_CONFIG_CHANGED();
		static jint DATA_CYCLE_THRESHOLD_DISABLED();
		static jstring EXTRA_SLOT_INDEX();
		static jstring EXTRA_SUBSCRIPTION_INDEX();
		static jstring KEY_ADDITIONAL_CALL_SETTING_BOOL();
		static jstring KEY_ALLOW_ADDING_APNS_BOOL();
		static jstring KEY_ALLOW_ADD_CALL_DURING_VIDEO_CALL_BOOL();
		static jstring KEY_ALLOW_EMERGENCY_NUMBERS_IN_CALL_LOG_BOOL();
		static jstring KEY_ALLOW_EMERGENCY_VIDEO_CALLS_BOOL();
		static jstring KEY_ALLOW_LOCAL_DTMF_TONES_BOOL();
		static jstring KEY_ALLOW_MERGE_WIFI_CALLS_WHEN_VOWIFI_OFF_BOOL();
		static jstring KEY_ALLOW_NON_EMERGENCY_CALLS_IN_ECM_BOOL();
		static jstring KEY_ALWAYS_SHOW_EMERGENCY_ALERT_ONOFF_BOOL();
		static jstring KEY_APN_EXPAND_BOOL();
		static jstring KEY_AUTO_RETRY_ENABLED_BOOL();
		static jstring KEY_CALL_FORWARDING_BLOCKS_WHILE_ROAMING_STRING_ARRAY();
		static jstring KEY_CARRIER_ALLOW_TURNOFF_IMS_BOOL();
		static jstring KEY_CARRIER_DATA_CALL_PERMANENT_FAILURE_STRINGS();
		static jstring KEY_CARRIER_FORCE_DISABLE_ETWS_CMAS_TEST_BOOL();
		static jstring KEY_CARRIER_IMS_GBA_REQUIRED_BOOL();
		static jstring KEY_CARRIER_INSTANT_LETTERING_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_INSTANT_LETTERING_ENCODING_STRING();
		static jstring KEY_CARRIER_INSTANT_LETTERING_ESCAPED_CHARS_STRING();
		static jstring KEY_CARRIER_INSTANT_LETTERING_INVALID_CHARS_STRING();
		static jstring KEY_CARRIER_INSTANT_LETTERING_LENGTH_LIMIT_INT();
		static jstring KEY_CARRIER_NAME_OVERRIDE_BOOL();
		static jstring KEY_CARRIER_NAME_STRING();
		static jstring KEY_CARRIER_SETTINGS_ENABLE_BOOL();
		static jstring KEY_CARRIER_USE_IMS_FIRST_FOR_EMERGENCY_BOOL();
		static jstring KEY_CARRIER_VOLTE_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_VOLTE_PROVISIONED_BOOL();
		static jstring KEY_CARRIER_VOLTE_PROVISIONING_REQUIRED_BOOL();
		static jstring KEY_CARRIER_VOLTE_TTY_SUPPORTED_BOOL();
		static jstring KEY_CARRIER_VT_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_VVM_PACKAGE_NAME_STRING();
		static jstring KEY_CARRIER_VVM_PACKAGE_NAME_STRING_ARRAY();
		static jstring KEY_CARRIER_WFC_IMS_AVAILABLE_BOOL();
		static jstring KEY_CARRIER_WFC_SUPPORTS_WIFI_ONLY_BOOL();
		static jstring KEY_CDMA_3WAYCALL_FLASH_DELAY_INT();
		static jstring KEY_CDMA_DTMF_TONE_DELAY_INT();
		static jstring KEY_CDMA_NONROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_CDMA_ROAMING_MODE_INT();
		static jstring KEY_CDMA_ROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_BOOL();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_STRING();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_EXTRA_VAL_STRING();
		static jstring KEY_CI_ACTION_ON_SYS_UPDATE_INTENT_STRING();
		static jstring KEY_CONFIG_IMS_PACKAGE_OVERRIDE_STRING();
		static jstring KEY_CONFIG_PLANS_PACKAGE_OVERRIDE_STRING();
		static jstring KEY_CONFIG_TELEPHONY_USE_OWN_NUMBER_FOR_VOICEMAIL_BOOL();
		static jstring KEY_CSP_ENABLED_BOOL();
		static jstring KEY_DATA_LIMIT_THRESHOLD_BYTES_LONG();
		static jstring KEY_DATA_WARNING_THRESHOLD_BYTES_LONG();
		static jstring KEY_DEFAULT_SIM_CALL_MANAGER_STRING();
		static jstring KEY_DEFAULT_VM_NUMBER_STRING();
		static jstring KEY_DIAL_STRING_REPLACE_STRING_ARRAY();
		static jstring KEY_DISABLE_CDMA_ACTIVATION_CODE_BOOL();
		static jstring KEY_DISPLAY_HD_AUDIO_PROPERTY_BOOL();
		static jstring KEY_DROP_VIDEO_CALL_WHEN_ANSWERING_AUDIO_CALL_BOOL();
		static jstring KEY_DTMF_TYPE_ENABLED_BOOL();
		static jstring KEY_DURATION_BLOCKING_DISABLED_AFTER_EMERGENCY_INT();
		static jstring KEY_EDITABLE_ENHANCED_4G_LTE_BOOL();
		static jstring KEY_EDITABLE_VOICEMAIL_NUMBER_BOOL();
		static jstring KEY_EDITABLE_VOICEMAIL_NUMBER_SETTING_BOOL();
		static jstring KEY_ENABLE_DIALER_KEY_VIBRATION_BOOL();
		static jstring KEY_FORCE_HOME_NETWORK_BOOL();
		static jstring KEY_GSM_DTMF_TONE_DELAY_INT();
		static jstring KEY_GSM_NONROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_GSM_ROAMING_NETWORKS_STRING_ARRAY();
		static jstring KEY_HAS_IN_CALL_NOISE_SUPPRESSION_BOOL();
		static jstring KEY_HIDE_CARRIER_NETWORK_SETTINGS_BOOL();
		static jstring KEY_HIDE_ENHANCED_4G_LTE_BOOL();
		static jstring KEY_HIDE_IMS_APN_BOOL();
		static jstring KEY_HIDE_PREFERRED_NETWORK_TYPE_BOOL();
		static jstring KEY_HIDE_SIM_LOCK_SETTINGS_BOOL();
		static jstring KEY_IGNORE_SIM_NETWORK_LOCKED_EVENTS_BOOL();
		static jstring KEY_IMS_CONFERENCE_SIZE_LIMIT_INT();
		static jstring KEY_IMS_DTMF_TONE_DELAY_INT();
		static jstring KEY_IS_IMS_CONFERENCE_SIZE_ENFORCED_BOOL();
		static jstring KEY_MDN_IS_ADDITIONAL_VOICEMAIL_NUMBER_BOOL();
		static jstring KEY_MMS_ALIAS_ENABLED_BOOL();
		static jstring KEY_MMS_ALIAS_MAX_CHARS_INT();
		static jstring KEY_MMS_ALIAS_MIN_CHARS_INT();
		static jstring KEY_MMS_ALLOW_ATTACH_AUDIO_BOOL();
		static jstring KEY_MMS_APPEND_TRANSACTION_ID_BOOL();
		static jstring KEY_MMS_EMAIL_GATEWAY_NUMBER_STRING();
		static jstring KEY_MMS_GROUP_MMS_ENABLED_BOOL();
		static jstring KEY_MMS_HTTP_PARAMS_STRING();
		static jstring KEY_MMS_HTTP_SOCKET_TIMEOUT_INT();
		static jstring KEY_MMS_MAX_IMAGE_HEIGHT_INT();
		static jstring KEY_MMS_MAX_IMAGE_WIDTH_INT();
		static jstring KEY_MMS_MAX_MESSAGE_SIZE_INT();
		static jstring KEY_MMS_MESSAGE_TEXT_MAX_SIZE_INT();
		static jstring KEY_MMS_MMS_DELIVERY_REPORT_ENABLED_BOOL();
		static jstring KEY_MMS_MMS_ENABLED_BOOL();
		static jstring KEY_MMS_MMS_READ_REPORT_ENABLED_BOOL();
		static jstring KEY_MMS_MULTIPART_SMS_ENABLED_BOOL();
		static jstring KEY_MMS_NAI_SUFFIX_STRING();
		static jstring KEY_MMS_NOTIFY_WAP_MMSC_ENABLED_BOOL();
		static jstring KEY_MMS_RECIPIENT_LIMIT_INT();
		static jstring KEY_MMS_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES_BOOL();
		static jstring KEY_MMS_SHOW_CELL_BROADCAST_APP_LINKS_BOOL();
		static jstring KEY_MMS_SMS_DELIVERY_REPORT_ENABLED_BOOL();
		static jstring KEY_MMS_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD_INT();
		static jstring KEY_MMS_SMS_TO_MMS_TEXT_THRESHOLD_INT();
		static jstring KEY_MMS_SUBJECT_MAX_LENGTH_INT();
		static jstring KEY_MMS_SUPPORT_HTTP_CHARSET_HEADER_BOOL();
		static jstring KEY_MMS_SUPPORT_MMS_CONTENT_DISPOSITION_BOOL();
		static jstring KEY_MMS_UA_PROF_TAG_NAME_STRING();
		static jstring KEY_MMS_UA_PROF_URL_STRING();
		static jstring KEY_MMS_USER_AGENT_STRING();
		static jstring KEY_MONTHLY_DATA_CYCLE_DAY_INT();
		static jstring KEY_ONLY_SINGLE_DC_ALLOWED_INT_ARRAY();
		static jstring KEY_OPERATOR_SELECTION_EXPAND_BOOL();
		static jstring KEY_PREFER_2G_BOOL();
		static jstring KEY_RCS_CONFIG_SERVER_URL_STRING();
		static jstring KEY_REQUIRE_ENTITLEMENT_CHECKS_BOOL();
		static jstring KEY_RESTART_RADIO_ON_PDP_FAIL_REGULAR_DEACTIVATION_BOOL();
		static jstring KEY_RTT_SUPPORTED_BOOL();
		static jstring KEY_SHOW_APN_SETTING_CDMA_BOOL();
		static jstring KEY_SHOW_CDMA_CHOICES_BOOL();
		static jstring KEY_SHOW_ICCID_IN_SIM_STATUS_BOOL();
		static jstring KEY_SHOW_ONSCREEN_DIAL_BUTTON_BOOL();
		static jstring KEY_SHOW_SIGNAL_STRENGTH_IN_SIM_STATUS_BOOL();
		static jstring KEY_SIMPLIFIED_NETWORK_SETTINGS_BOOL();
		static jstring KEY_SIM_NETWORK_UNLOCK_ALLOW_DISMISS_BOOL();
		static jstring KEY_SMS_REQUIRES_DESTINATION_NUMBER_CONVERSION_BOOL();
		static jstring KEY_SUPPORT_3GPP_CALL_FORWARDING_WHILE_ROAMING_BOOL();
		static jstring KEY_SUPPORT_CONFERENCE_CALL_BOOL();
		static jstring KEY_SUPPORT_PAUSE_IMS_VIDEO_CALLS_BOOL();
		static jstring KEY_SUPPORT_SWAP_AFTER_MERGE_BOOL();
		static jstring KEY_TREAT_DOWNGRADED_VIDEO_CALLS_AS_VIDEO_CALLS_BOOL();
		static jstring KEY_USE_HFA_FOR_PROVISIONING_BOOL();
		static jstring KEY_USE_OTASP_FOR_PROVISIONING_BOOL();
		static jstring KEY_USE_RCS_PRESENCE_BOOL();
		static jstring KEY_VOICEMAIL_NOTIFICATION_PERSISTENT_BOOL();
		static jstring KEY_VOICE_PRIVACY_DISABLE_UI_BOOL();
		static jstring KEY_VOLTE_REPLACEMENT_RAT_INT();
		static jstring KEY_VVM_CELLULAR_DATA_REQUIRED_BOOL();
		static jstring KEY_VVM_CLIENT_PREFIX_STRING();
		static jstring KEY_VVM_DESTINATION_NUMBER_STRING();
		static jstring KEY_VVM_DISABLED_CAPABILITIES_STRING_ARRAY();
		static jstring KEY_VVM_LEGACY_MODE_ENABLED_BOOL();
		static jstring KEY_VVM_PORT_NUMBER_INT();
		static jstring KEY_VVM_PREFETCH_BOOL();
		static jstring KEY_VVM_SSL_ENABLED_BOOL();
		static jstring KEY_VVM_TYPE_STRING();
		static jstring KEY_WORLD_PHONE_BOOL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isConfigForIdentifiedCarrier(android::os::PersistableBundle arg0);
		android::os::PersistableBundle getConfig();
		android::os::PersistableBundle getConfigForSubId(jint arg0);
		void notifyConfigChangedForSubId(jint arg0);
	};
} // namespace android::telephony

