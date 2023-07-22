#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/PersistableBundle.def.hpp"
#include "../telecom/PhoneAccountHandle.def.hpp"
#include "./CellLocation.def.hpp"
#include "./IccOpenLogicalChannelResponse.def.hpp"
#include "./NetworkScan.def.hpp"
#include "./NetworkScanRequest.def.hpp"
#include "./PhoneStateListener.def.hpp"
#include "./ServiceState.def.hpp"
#include "./SignalStrength.def.hpp"
#include "./SignalStrengthUpdateRequest.def.hpp"
#include "./TelephonyCallback.def.hpp"
#include "./TelephonyManager_CellInfoCallback.def.hpp"
#include "./TelephonyManager_UssdResponseCallback.def.hpp"
#include "./TelephonyScanManager_NetworkScanCallback.def.hpp"
#include "./VisualVoicemailSmsFilterSettings.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TelephonyManager.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString TelephonyManager::ACTION_CARRIER_MESSAGING_CLIENT_SERVICE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_MESSAGING_CLIENT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_CARRIER_SIGNAL_DEFAULT_NETWORK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_DEFAULT_NETWORK_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_CARRIER_SIGNAL_PCO_VALUE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_PCO_VALUE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_CARRIER_SIGNAL_REDIRECTED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_REDIRECTED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_CARRIER_SIGNAL_REQUEST_NETWORK_FAILED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_REQUEST_NETWORK_FAILED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_CARRIER_SIGNAL_RESET()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CARRIER_SIGNAL_RESET",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_CONFIGURE_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_CONFIGURE_VOICEMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_MULTI_SIM_CONFIG_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_MULTI_SIM_CONFIG_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_NETWORK_COUNTRY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_NETWORK_COUNTRY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_PHONE_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_PHONE_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_RESPOND_VIA_MESSAGE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_SECRET_CODE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SECRET_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_SHOW_VOICEMAIL_NOTIFICATION()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SHOW_VOICEMAIL_NOTIFICATION",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"ACTION_SUBSCRIPTION_SPECIFIC_CARRIER_IDENTITY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::ALLOWED_NETWORK_TYPES_REASON_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ALLOWED_NETWORK_TYPES_REASON_CARRIER"
		);
	}
	inline jint TelephonyManager::ALLOWED_NETWORK_TYPES_REASON_USER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ALLOWED_NETWORK_TYPES_REASON_USER"
		);
	}
	inline jint TelephonyManager::APPTYPE_CSIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_CSIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_ISIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_ISIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_RUIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_RUIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_SIM"
		);
	}
	inline jint TelephonyManager::APPTYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_UNKNOWN"
		);
	}
	inline jint TelephonyManager::APPTYPE_USIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"APPTYPE_USIM"
		);
	}
	inline jint TelephonyManager::AUTHTYPE_EAP_AKA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_AKA"
		);
	}
	inline jint TelephonyManager::AUTHTYPE_EAP_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"AUTHTYPE_EAP_SIM"
		);
	}
	inline jint TelephonyManager::CALL_COMPOSER_STATUS_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_COMPOSER_STATUS_OFF"
		);
	}
	inline jint TelephonyManager::CALL_COMPOSER_STATUS_ON()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_COMPOSER_STATUS_ON"
		);
	}
	inline jint TelephonyManager::CALL_STATE_IDLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_IDLE"
		);
	}
	inline jint TelephonyManager::CALL_STATE_OFFHOOK()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_OFFHOOK"
		);
	}
	inline jint TelephonyManager::CALL_STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CALL_STATE_RINGING"
		);
	}
	inline JString TelephonyManager::CAPABILITY_SLICING_CONFIG_SUPPORTED()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"CAPABILITY_SLICING_CONFIG_SUPPORTED",
			"Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_AFFILIATED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_AFFILIATED"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_ANY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_ANY"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_HOME()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_HOME"
		);
	}
	inline jint TelephonyManager::CDMA_ROAMING_MODE_RADIO_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"CDMA_ROAMING_MODE_RADIO_DEFAULT"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_DORMANT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_DORMANT"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_IN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_IN"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_INOUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_INOUT"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_NONE"
		);
	}
	inline jint TelephonyManager::DATA_ACTIVITY_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ACTIVITY_OUT"
		);
	}
	inline jint TelephonyManager::DATA_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTED"
		);
	}
	inline jint TelephonyManager::DATA_CONNECTING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_CONNECTING"
		);
	}
	inline jint TelephonyManager::DATA_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTED"
		);
	}
	inline jint TelephonyManager::DATA_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_DISCONNECTING"
		);
	}
	inline jint TelephonyManager::DATA_ENABLED_REASON_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_CARRIER"
		);
	}
	inline jint TelephonyManager::DATA_ENABLED_REASON_OVERRIDE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_OVERRIDE"
		);
	}
	inline jint TelephonyManager::DATA_ENABLED_REASON_POLICY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_POLICY"
		);
	}
	inline jint TelephonyManager::DATA_ENABLED_REASON_THERMAL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_THERMAL"
		);
	}
	inline jint TelephonyManager::DATA_ENABLED_REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_UNKNOWN"
		);
	}
	inline jint TelephonyManager::DATA_ENABLED_REASON_USER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_ENABLED_REASON_USER"
		);
	}
	inline jint TelephonyManager::DATA_HANDOVER_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_HANDOVER_IN_PROGRESS"
		);
	}
	inline jint TelephonyManager::DATA_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_SUSPENDED"
		);
	}
	inline jint TelephonyManager::DATA_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DATA_UNKNOWN"
		);
	}
	inline jint TelephonyManager::DEFAULT_PORT_INDEX()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"DEFAULT_PORT_INDEX"
		);
	}
	inline jint TelephonyManager::ERI_FLASH()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ERI_FLASH"
		);
	}
	inline jint TelephonyManager::ERI_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ERI_OFF"
		);
	}
	inline jint TelephonyManager::ERI_ON()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"ERI_ON"
		);
	}
	inline JString TelephonyManager::EXTRA_ACTIVE_SIM_SUPPORTED_COUNT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_ACTIVE_SIM_SUPPORTED_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_APN_PROTOCOL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_APN_PROTOCOL",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_APN_TYPE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_APN_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_CALL_VOICEMAIL_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CALL_VOICEMAIL_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_CARRIER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_DATA_FAIL_CAUSE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_DATA_FAIL_CAUSE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_DEFAULT_NETWORK_AVAILABLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_DEFAULT_NETWORK_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_HIDE_PUBLIC_SETTINGS()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_HIDE_PUBLIC_SETTINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_INCOMING_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_INCOMING_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_IS_REFRESH()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_IS_REFRESH",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_LAUNCH_VOICEMAIL_SETTINGS_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_NETWORK_COUNTRY()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NETWORK_COUNTRY",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_NOTIFICATION_COUNT()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_NOTIFICATION_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_PCO_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PCO_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_PCO_VALUE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PCO_VALUE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_PHONE_ACCOUNT_HANDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_PHONE_ACCOUNT_HANDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_REDIRECTION_URL()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_REDIRECTION_URL",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_SPECIFIC_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_SPECIFIC_CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SPECIFIC_CARRIER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE_IDLE()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_IDLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE_OFFHOOK()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_OFFHOOK",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_STATE_RINGING()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_STATE_RINGING",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::EXTRA_VOICEMAIL_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"EXTRA_VOICEMAIL_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::INCLUDE_LOCATION_DATA_COARSE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"INCLUDE_LOCATION_DATA_COARSE"
		);
	}
	inline jint TelephonyManager::INCLUDE_LOCATION_DATA_FINE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"INCLUDE_LOCATION_DATA_FINE"
		);
	}
	inline jint TelephonyManager::INCLUDE_LOCATION_DATA_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"INCLUDE_LOCATION_DATA_NONE"
		);
	}
	inline JString TelephonyManager::METADATA_HIDE_VOICEMAIL_SETTINGS_MENU()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"METADATA_HIDE_VOICEMAIL_SETTINGS_MENU",
			"Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::MULTISIM_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_ALLOWED"
		);
	}
	inline jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_CARRIER()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_CARRIER"
		);
	}
	inline jint TelephonyManager::MULTISIM_NOT_SUPPORTED_BY_HARDWARE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"MULTISIM_NOT_SUPPORTED_BY_HARDWARE"
		);
	}
	inline jint TelephonyManager::NETWORK_SELECTION_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_SELECTION_MODE_AUTO"
		);
	}
	inline jint TelephonyManager::NETWORK_SELECTION_MODE_MANUAL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_SELECTION_MODE_MANUAL"
		);
	}
	inline jint TelephonyManager::NETWORK_SELECTION_MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_SELECTION_MODE_UNKNOWN"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_1xRTT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_1xRTT"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_1xRTT()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_1xRTT"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_CDMA()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_CDMA"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_EDGE()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_EDGE"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_EHRPD()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_EHRPD"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_EVDO_0()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_EVDO_0"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_EVDO_A()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_EVDO_A"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_EVDO_B()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_EVDO_B"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_GPRS()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_GPRS"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_GSM()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_GSM"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_HSDPA()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_HSDPA"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_HSPA()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_HSPA"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_HSPAP()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_HSPAP"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_HSUPA()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_HSUPA"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_IWLAN()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_IWLAN"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_LTE()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_LTE"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_LTE_CA()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_LTE_CA"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_NR()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_NR"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_TD_SCDMA()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_TD_SCDMA"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_UMTS()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_UMTS"
		);
	}
	inline jlong TelephonyManager::NETWORK_TYPE_BITMASK_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_BITMASK_UNKNOWN"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_CDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_CDMA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EDGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EDGE"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EHRPD()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EHRPD"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EVDO_0()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_0"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EVDO_A()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_A"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_EVDO_B()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_EVDO_B"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_GPRS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GPRS"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_GSM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_GSM"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSDPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSDPA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSPAP()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSPAP"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_HSUPA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_HSUPA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_IDEN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IDEN"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_IWLAN"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_LTE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_LTE"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_NR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_NR"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_TD_SCDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_TD_SCDMA"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_UMTS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UMTS"
		);
	}
	inline jint TelephonyManager::NETWORK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"NETWORK_TYPE_UNKNOWN"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_CDMA()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_CDMA"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_GSM()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_GSM"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_NONE"
		);
	}
	inline jint TelephonyManager::PHONE_TYPE_SIP()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"PHONE_TYPE_SIP"
		);
	}
	inline jint TelephonyManager::SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_INACTIVE_SUBSCRIPTION"
		);
	}
	inline jint TelephonyManager::SET_OPPORTUNISTIC_SUB_NO_OPPORTUNISTIC_SUB_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_NO_OPPORTUNISTIC_SUB_AVAILABLE"
		);
	}
	inline jint TelephonyManager::SET_OPPORTUNISTIC_SUB_REMOTE_SERVICE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_REMOTE_SERVICE_EXCEPTION"
		);
	}
	inline jint TelephonyManager::SET_OPPORTUNISTIC_SUB_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_SUCCESS"
		);
	}
	inline jint TelephonyManager::SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SET_OPPORTUNISTIC_SUB_VALIDATION_FAILED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_ABSENT()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_ABSENT"
		);
	}
	inline jint TelephonyManager::SIM_STATE_CARD_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_IO_ERROR"
		);
	}
	inline jint TelephonyManager::SIM_STATE_CARD_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_CARD_RESTRICTED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_NETWORK_LOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NETWORK_LOCKED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_NOT_READY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_NOT_READY"
		);
	}
	inline jint TelephonyManager::SIM_STATE_PERM_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PERM_DISABLED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_PIN_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PIN_REQUIRED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_PUK_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_PUK_REQUIRED"
		);
	}
	inline jint TelephonyManager::SIM_STATE_READY()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_READY"
		);
	}
	inline jint TelephonyManager::SIM_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"SIM_STATE_UNKNOWN"
		);
	}
	inline jint TelephonyManager::UNINITIALIZED_CARD_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNINITIALIZED_CARD_ID"
		);
	}
	inline jint TelephonyManager::UNKNOWN_CARRIER_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNKNOWN_CARRIER_ID"
		);
	}
	inline jint TelephonyManager::UNSUPPORTED_CARD_ID()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UNSUPPORTED_CARD_ID"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_ABORTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_ABORTED"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_DISABLE_MODEM_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_DISABLE_MODEM_FAIL"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_ENABLE_MODEM_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_ENABLE_MODEM_FAIL"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_INVALID_ARGUMENTS"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_MULTIPLE_NETWORKS_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_MULTIPLE_NETWORKS_NOT_SUPPORTED"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_NO_CARRIER_PRIVILEGE"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_NO_OPPORTUNISTIC_SUB_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_NO_OPPORTUNISTIC_SUB_AVAILABLE"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_REMOTE_SERVICE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_REMOTE_SERVICE_EXCEPTION"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_SERVICE_IS_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_SERVICE_IS_DISABLED"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_SUCCESS"
		);
	}
	inline jint TelephonyManager::UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"UPDATE_AVAILABLE_NETWORKS_UNKNOWN_FAILURE"
		);
	}
	inline jint TelephonyManager::USSD_ERROR_SERVICE_UNAVAIL()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_ERROR_SERVICE_UNAVAIL"
		);
	}
	inline jint TelephonyManager::USSD_RETURN_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.TelephonyManager",
			"USSD_RETURN_FAILURE"
		);
	}
	inline JString TelephonyManager::VVM_TYPE_CVVM()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_CVVM",
			"Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::VVM_TYPE_OMTP()
	{
		return getStaticObjectField(
			"android.telephony.TelephonyManager",
			"VVM_TYPE_OMTP",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong TelephonyManager::getMaximumCallComposerPictureSize()
	{
		return callStaticMethod<jlong>(
			"android.telephony.TelephonyManager",
			"getMaximumCallComposerPictureSize",
			"()J"
		);
	}
	inline jboolean TelephonyManager::canChangeDtmfToneLength() const
	{
		return callMethod<jboolean>(
			"canChangeDtmfToneLength",
			"()Z"
		);
	}
	inline void TelephonyManager::clearSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0) const
	{
		callMethod<void>(
			"clearSignalStrengthUpdateRequest",
			"(Landroid/telephony/SignalStrengthUpdateRequest;)V",
			arg0.object()
		);
	}
	inline android::telephony::TelephonyManager TelephonyManager::createForPhoneAccountHandle(android::telecom::PhoneAccountHandle arg0) const
	{
		return callObjectMethod(
			"createForPhoneAccountHandle",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/telephony/TelephonyManager;",
			arg0.object()
		);
	}
	inline android::telephony::TelephonyManager TelephonyManager::createForSubscriptionId(jint arg0) const
	{
		return callObjectMethod(
			"createForSubscriptionId",
			"(I)Landroid/telephony/TelephonyManager;",
			arg0
		);
	}
	inline jboolean TelephonyManager::doesSwitchMultiSimConfigTriggerReboot() const
	{
		return callMethod<jboolean>(
			"doesSwitchMultiSimConfigTriggerReboot",
			"()Z"
		);
	}
	inline jint TelephonyManager::getActiveModemCount() const
	{
		return callMethod<jint>(
			"getActiveModemCount",
			"()I"
		);
	}
	inline JObject TelephonyManager::getAllCellInfo() const
	{
		return callObjectMethod(
			"getAllCellInfo",
			"()Ljava/util/List;"
		);
	}
	inline jlong TelephonyManager::getAllowedNetworkTypesForReason(jint arg0) const
	{
		return callMethod<jlong>(
			"getAllowedNetworkTypesForReason",
			"(I)J",
			arg0
		);
	}
	inline jint TelephonyManager::getCallComposerStatus() const
	{
		return callMethod<jint>(
			"getCallComposerStatus",
			"()I"
		);
	}
	inline jint TelephonyManager::getCallState() const
	{
		return callMethod<jint>(
			"getCallState",
			"()I"
		);
	}
	inline jint TelephonyManager::getCallStateForSubscription() const
	{
		return callMethod<jint>(
			"getCallStateForSubscription",
			"()I"
		);
	}
	inline jint TelephonyManager::getCardIdForDefaultEuicc() const
	{
		return callMethod<jint>(
			"getCardIdForDefaultEuicc",
			"()I"
		);
	}
	inline android::os::PersistableBundle TelephonyManager::getCarrierConfig() const
	{
		return callObjectMethod(
			"getCarrierConfig",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint TelephonyManager::getCarrierIdFromSimMccMnc() const
	{
		return callMethod<jint>(
			"getCarrierIdFromSimMccMnc",
			"()I"
		);
	}
	inline android::telephony::CellLocation TelephonyManager::getCellLocation() const
	{
		return callObjectMethod(
			"getCellLocation",
			"()Landroid/telephony/CellLocation;"
		);
	}
	inline jint TelephonyManager::getDataActivity() const
	{
		return callMethod<jint>(
			"getDataActivity",
			"()I"
		);
	}
	inline jint TelephonyManager::getDataNetworkType() const
	{
		return callMethod<jint>(
			"getDataNetworkType",
			"()I"
		);
	}
	inline jint TelephonyManager::getDataState() const
	{
		return callMethod<jint>(
			"getDataState",
			"()I"
		);
	}
	inline JString TelephonyManager::getDeviceId() const
	{
		return callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getDeviceId(jint arg0) const
	{
		return callObjectMethod(
			"getDeviceId",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getDeviceSoftwareVersion() const
	{
		return callObjectMethod(
			"getDeviceSoftwareVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JObject TelephonyManager::getEmergencyNumberList() const
	{
		return callObjectMethod(
			"getEmergencyNumberList",
			"()Ljava/util/Map;"
		);
	}
	inline JObject TelephonyManager::getEmergencyNumberList(jint arg0) const
	{
		return callObjectMethod(
			"getEmergencyNumberList",
			"(I)Ljava/util/Map;",
			arg0
		);
	}
	inline JObject TelephonyManager::getEquivalentHomePlmns() const
	{
		return callObjectMethod(
			"getEquivalentHomePlmns",
			"()Ljava/util/List;"
		);
	}
	inline JArray TelephonyManager::getForbiddenPlmns() const
	{
		return callObjectMethod(
			"getForbiddenPlmns",
			"()[Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getGroupIdLevel1() const
	{
		return callObjectMethod(
			"getGroupIdLevel1",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getIccAuthentication(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"getIccAuthentication",
			"(IILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline JString TelephonyManager::getImei() const
	{
		return callObjectMethod(
			"getImei",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getImei(jint arg0) const
	{
		return callObjectMethod(
			"getImei",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getLine1Number() const
	{
		return callObjectMethod(
			"getLine1Number",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getManualNetworkSelectionPlmn() const
	{
		return callObjectMethod(
			"getManualNetworkSelectionPlmn",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getManufacturerCode() const
	{
		return callObjectMethod(
			"getManufacturerCode",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getManufacturerCode(jint arg0) const
	{
		return callObjectMethod(
			"getManufacturerCode",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getMeid() const
	{
		return callObjectMethod(
			"getMeid",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getMeid(jint arg0) const
	{
		return callObjectMethod(
			"getMeid",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getMmsUAProfUrl() const
	{
		return callObjectMethod(
			"getMmsUAProfUrl",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getMmsUserAgent() const
	{
		return callObjectMethod(
			"getMmsUserAgent",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNai() const
	{
		return callObjectMethod(
			"getNai",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNetworkCountryIso() const
	{
		return callObjectMethod(
			"getNetworkCountryIso",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNetworkCountryIso(jint arg0) const
	{
		return callObjectMethod(
			"getNetworkCountryIso",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString TelephonyManager::getNetworkOperator() const
	{
		return callObjectMethod(
			"getNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getNetworkOperatorName() const
	{
		return callObjectMethod(
			"getNetworkOperatorName",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getNetworkSelectionMode() const
	{
		return callMethod<jint>(
			"getNetworkSelectionMode",
			"()I"
		);
	}
	inline void TelephonyManager::getNetworkSlicingConfiguration(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getNetworkSlicingConfiguration",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JString TelephonyManager::getNetworkSpecifier() const
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	inline android::telecom::PhoneAccountHandle TelephonyManager::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline jint TelephonyManager::getPhoneCount() const
	{
		return callMethod<jint>(
			"getPhoneCount",
			"()I"
		);
	}
	inline jint TelephonyManager::getPhoneType() const
	{
		return callMethod<jint>(
			"getPhoneType",
			"()I"
		);
	}
	inline jint TelephonyManager::getPreferredOpportunisticDataSubscription() const
	{
		return callMethod<jint>(
			"getPreferredOpportunisticDataSubscription",
			"()I"
		);
	}
	inline android::telephony::ServiceState TelephonyManager::getServiceState() const
	{
		return callObjectMethod(
			"getServiceState",
			"()Landroid/telephony/ServiceState;"
		);
	}
	inline android::telephony::ServiceState TelephonyManager::getServiceState(jint arg0) const
	{
		return callObjectMethod(
			"getServiceState",
			"(I)Landroid/telephony/ServiceState;",
			arg0
		);
	}
	inline android::telephony::SignalStrength TelephonyManager::getSignalStrength() const
	{
		return callObjectMethod(
			"getSignalStrength",
			"()Landroid/telephony/SignalStrength;"
		);
	}
	inline jint TelephonyManager::getSimCarrierId() const
	{
		return callMethod<jint>(
			"getSimCarrierId",
			"()I"
		);
	}
	inline JString TelephonyManager::getSimCarrierIdName() const
	{
		return callObjectMethod(
			"getSimCarrierIdName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TelephonyManager::getSimCountryIso() const
	{
		return callObjectMethod(
			"getSimCountryIso",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getSimOperator() const
	{
		return callObjectMethod(
			"getSimOperator",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getSimOperatorName() const
	{
		return callObjectMethod(
			"getSimOperatorName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getSimSerialNumber() const
	{
		return callObjectMethod(
			"getSimSerialNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getSimSpecificCarrierId() const
	{
		return callMethod<jint>(
			"getSimSpecificCarrierId",
			"()I"
		);
	}
	inline JString TelephonyManager::getSimSpecificCarrierIdName() const
	{
		return callObjectMethod(
			"getSimSpecificCarrierIdName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TelephonyManager::getSimState() const
	{
		return callMethod<jint>(
			"getSimState",
			"()I"
		);
	}
	inline jint TelephonyManager::getSimState(jint arg0) const
	{
		return callMethod<jint>(
			"getSimState",
			"(I)I",
			arg0
		);
	}
	inline JString TelephonyManager::getSubscriberId() const
	{
		return callObjectMethod(
			"getSubscriberId",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	inline jint TelephonyManager::getSubscriptionId(android::telecom::PhoneAccountHandle arg0) const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"(Landroid/telecom/PhoneAccountHandle;)I",
			arg0.object()
		);
	}
	inline jint TelephonyManager::getSupportedModemCount() const
	{
		return callMethod<jint>(
			"getSupportedModemCount",
			"()I"
		);
	}
	inline jlong TelephonyManager::getSupportedRadioAccessFamily() const
	{
		return callMethod<jlong>(
			"getSupportedRadioAccessFamily",
			"()J"
		);
	}
	inline JString TelephonyManager::getTypeAllocationCode() const
	{
		return callObjectMethod(
			"getTypeAllocationCode",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getTypeAllocationCode(jint arg0) const
	{
		return callObjectMethod(
			"getTypeAllocationCode",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JObject TelephonyManager::getUiccCardsInfo() const
	{
		return callObjectMethod(
			"getUiccCardsInfo",
			"()Ljava/util/List;"
		);
	}
	inline JString TelephonyManager::getVisualVoicemailPackageName() const
	{
		return callObjectMethod(
			"getVisualVoicemailPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getVoiceMailAlphaTag() const
	{
		return callObjectMethod(
			"getVoiceMailAlphaTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString TelephonyManager::getVoiceMailNumber() const
	{
		return callObjectMethod(
			"getVoiceMailNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint TelephonyManager::getVoiceNetworkType() const
	{
		return callMethod<jint>(
			"getVoiceNetworkType",
			"()I"
		);
	}
	inline android::net::Uri TelephonyManager::getVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0) const
	{
		return callObjectMethod(
			"getVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::hasCarrierPrivileges() const
	{
		return callMethod<jboolean>(
			"hasCarrierPrivileges",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::hasIccCard() const
	{
		return callMethod<jboolean>(
			"hasIccCard",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::iccCloseLogicalChannel(jint arg0) const
	{
		return callMethod<jboolean>(
			"iccCloseLogicalChannel",
			"(I)Z",
			arg0
		);
	}
	inline JByteArray TelephonyManager::iccExchangeSimIO(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5) const
	{
		return callObjectMethod(
			"iccExchangeSimIO",
			"(IIIIILjava/lang/String;)[B",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jstring>()
		);
	}
	inline android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(JString arg0) const
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::IccOpenLogicalChannelResponse TelephonyManager::iccOpenLogicalChannel(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"iccOpenLogicalChannel",
			"(Ljava/lang/String;I)Landroid/telephony/IccOpenLogicalChannelResponse;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString TelephonyManager::iccTransmitApduBasicChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, JString arg5) const
	{
		return callObjectMethod(
			"iccTransmitApduBasicChannel",
			"(IIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object<jstring>()
		);
	}
	inline JString TelephonyManager::iccTransmitApduLogicalChannel(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, JString arg6) const
	{
		return callObjectMethod(
			"iccTransmitApduLogicalChannel",
			"(IIIIIILjava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object<jstring>()
		);
	}
	inline jboolean TelephonyManager::isConcurrentVoiceAndDataSupported() const
	{
		return callMethod<jboolean>(
			"isConcurrentVoiceAndDataSupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isDataCapable() const
	{
		return callMethod<jboolean>(
			"isDataCapable",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isDataConnectionAllowed() const
	{
		return callMethod<jboolean>(
			"isDataConnectionAllowed",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isDataEnabled() const
	{
		return callMethod<jboolean>(
			"isDataEnabled",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isDataEnabledForReason(jint arg0) const
	{
		return callMethod<jboolean>(
			"isDataEnabledForReason",
			"(I)Z",
			arg0
		);
	}
	inline jboolean TelephonyManager::isDataRoamingEnabled() const
	{
		return callMethod<jboolean>(
			"isDataRoamingEnabled",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isEmergencyNumber(JString arg0) const
	{
		return callMethod<jboolean>(
			"isEmergencyNumber",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean TelephonyManager::isHearingAidCompatibilitySupported() const
	{
		return callMethod<jboolean>(
			"isHearingAidCompatibilitySupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isManualNetworkSelectionAllowed() const
	{
		return callMethod<jboolean>(
			"isManualNetworkSelectionAllowed",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isModemEnabledForSlot(jint arg0) const
	{
		return callMethod<jboolean>(
			"isModemEnabledForSlot",
			"(I)Z",
			arg0
		);
	}
	inline jint TelephonyManager::isMultiSimSupported() const
	{
		return callMethod<jint>(
			"isMultiSimSupported",
			"()I"
		);
	}
	inline jboolean TelephonyManager::isNetworkRoaming() const
	{
		return callMethod<jboolean>(
			"isNetworkRoaming",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isRadioInterfaceCapabilitySupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isRadioInterfaceCapabilitySupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean TelephonyManager::isRttSupported() const
	{
		return callMethod<jboolean>(
			"isRttSupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isSmsCapable() const
	{
		return callMethod<jboolean>(
			"isSmsCapable",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isTtyModeSupported() const
	{
		return callMethod<jboolean>(
			"isTtyModeSupported",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isVoiceCapable() const
	{
		return callMethod<jboolean>(
			"isVoiceCapable",
			"()Z"
		);
	}
	inline jboolean TelephonyManager::isVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0) const
	{
		return callMethod<jboolean>(
			"isVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;)Z",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::isWorldPhone() const
	{
		return callMethod<jboolean>(
			"isWorldPhone",
			"()Z"
		);
	}
	inline void TelephonyManager::listen(android::telephony::PhoneStateListener arg0, jint arg1) const
	{
		callMethod<void>(
			"listen",
			"(Landroid/telephony/PhoneStateListener;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TelephonyManager::rebootModem() const
	{
		callMethod<void>(
			"rebootModem",
			"()V"
		);
	}
	inline void TelephonyManager::registerTelephonyCallback(JObject arg0, android::telephony::TelephonyCallback arg1) const
	{
		callMethod<void>(
			"registerTelephonyCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TelephonyManager::registerTelephonyCallback(jint arg0, JObject arg1, android::telephony::TelephonyCallback arg2) const
	{
		callMethod<void>(
			"registerTelephonyCallback",
			"(ILjava/util/concurrent/Executor;Landroid/telephony/TelephonyCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void TelephonyManager::requestCellInfoUpdate(JObject arg0, android::telephony::TelephonyManager_CellInfoCallback arg1) const
	{
		callMethod<void>(
			"requestCellInfoUpdate",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyManager$CellInfoCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telephony::NetworkScan TelephonyManager::requestNetworkScan(android::telephony::NetworkScanRequest arg0, JObject arg1, android::telephony::TelephonyScanManager_NetworkScanCallback arg2) const
	{
		return callObjectMethod(
			"requestNetworkScan",
			"(Landroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::telephony::NetworkScan TelephonyManager::requestNetworkScan(jint arg0, android::telephony::NetworkScanRequest arg1, JObject arg2, android::telephony::TelephonyScanManager_NetworkScanCallback arg3) const
	{
		return callObjectMethod(
			"requestNetworkScan",
			"(ILandroid/telephony/NetworkScanRequest;Ljava/util/concurrent/Executor;Landroid/telephony/TelephonyScanManager$NetworkScanCallback;)Landroid/telephony/NetworkScan;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void TelephonyManager::sendDialerSpecialCode(JString arg0) const
	{
		callMethod<void>(
			"sendDialerSpecialCode",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString TelephonyManager::sendEnvelopeWithStatus(JString arg0) const
	{
		return callObjectMethod(
			"sendEnvelopeWithStatus",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline void TelephonyManager::sendUssdRequest(JString arg0, android::telephony::TelephonyManager_UssdResponseCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"sendUssdRequest",
			"(Ljava/lang/String;Landroid/telephony/TelephonyManager$UssdResponseCallback;Landroid/os/Handler;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TelephonyManager::sendVisualVoicemailSms(JString arg0, jint arg1, JString arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"sendVisualVoicemailSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline void TelephonyManager::setAllowedNetworkTypesForReason(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setAllowedNetworkTypesForReason",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void TelephonyManager::setCallComposerStatus(jint arg0) const
	{
		callMethod<void>(
			"setCallComposerStatus",
			"(I)V",
			arg0
		);
	}
	inline void TelephonyManager::setDataEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDataEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TelephonyManager::setDataEnabledForReason(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setDataEnabledForReason",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline jint TelephonyManager::setForbiddenPlmns(JObject arg0) const
	{
		return callMethod<jint>(
			"setForbiddenPlmns",
			"(Ljava/util/List;)I",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::setLine1NumberForDisplay(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setLine1NumberForDisplay",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TelephonyManager::setNetworkSelectionModeAutomatic() const
	{
		callMethod<void>(
			"setNetworkSelectionModeAutomatic",
			"()V"
		);
	}
	inline jboolean TelephonyManager::setNetworkSelectionModeManual(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jboolean TelephonyManager::setNetworkSelectionModeManual(JString arg0, jboolean arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"setNetworkSelectionModeManual",
			"(Ljava/lang/String;ZI)Z",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jboolean TelephonyManager::setOperatorBrandOverride(JString arg0) const
	{
		return callMethod<jboolean>(
			"setOperatorBrandOverride",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean TelephonyManager::setPreferredNetworkTypeToGlobal() const
	{
		return callMethod<jboolean>(
			"setPreferredNetworkTypeToGlobal",
			"()Z"
		);
	}
	inline void TelephonyManager::setPreferredOpportunisticDataSubscription(jint arg0, jboolean arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"setPreferredOpportunisticDataSubscription",
			"(IZLjava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline void TelephonyManager::setSignalStrengthUpdateRequest(android::telephony::SignalStrengthUpdateRequest arg0) const
	{
		callMethod<void>(
			"setSignalStrengthUpdateRequest",
			"(Landroid/telephony/SignalStrengthUpdateRequest;)V",
			arg0.object()
		);
	}
	inline void TelephonyManager::setVisualVoicemailSmsFilterSettings(android::telephony::VisualVoicemailSmsFilterSettings arg0) const
	{
		callMethod<void>(
			"setVisualVoicemailSmsFilterSettings",
			"(Landroid/telephony/VisualVoicemailSmsFilterSettings;)V",
			arg0.object()
		);
	}
	inline jboolean TelephonyManager::setVoiceMailNumber(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"setVoiceMailNumber",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TelephonyManager::setVoicemailRingtoneUri(android::telecom::PhoneAccountHandle arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setVoicemailRingtoneUri",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TelephonyManager::setVoicemailVibrationEnabled(android::telecom::PhoneAccountHandle arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setVoicemailVibrationEnabled",
			"(Landroid/telecom/PhoneAccountHandle;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void TelephonyManager::switchMultiSimConfig(jint arg0) const
	{
		callMethod<void>(
			"switchMultiSimConfig",
			"(I)V",
			arg0
		);
	}
	inline void TelephonyManager::unregisterTelephonyCallback(android::telephony::TelephonyCallback arg0) const
	{
		callMethod<void>(
			"unregisterTelephonyCallback",
			"(Landroid/telephony/TelephonyCallback;)V",
			arg0.object()
		);
	}
	inline void TelephonyManager::updateAvailableNetworks(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"updateAvailableNetworks",
			"(Ljava/util/List;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TelephonyManager::uploadCallComposerPicture(java::io::InputStream arg0, JString arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"uploadCallComposerPicture",
			"(Ljava/io/InputStream;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void TelephonyManager::uploadCallComposerPicture(JObject arg0, JString arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"uploadCallComposerPicture",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
