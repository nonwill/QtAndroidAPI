#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class DataFailCause : public JObject
	{
	public:
		// Fields
		static jint ACCESS_ATTEMPT_ALREADY_IN_PROGRESS();
		static jint ACCESS_BLOCK();
		static jint ACCESS_BLOCK_ALL();
		static jint ACCESS_CLASS_DSAC_REJECTION();
		static jint ACCESS_CONTROL_LIST_CHECK_FAILURE();
		static jint ACTIVATION_REJECTED_BCM_VIOLATION();
		static jint ACTIVATION_REJECT_GGSN();
		static jint ACTIVATION_REJECT_UNSPECIFIED();
		static jint ACTIVE_PDP_CONTEXT_MAX_NUMBER_REACHED();
		static jint ALL_MATCHING_RULES_FAILED();
		static jint APN_DISABLED();
		static jint APN_DISALLOWED_ON_ROAMING();
		static jint APN_MISMATCH();
		static jint APN_PARAMETERS_CHANGED();
		static jint APN_PENDING_HANDOVER();
		static jint APN_TYPE_CONFLICT();
		static jint AUTH_FAILURE_ON_EMERGENCY_CALL();
		static jint BEARER_HANDLING_NOT_SUPPORTED();
		static jint CALL_DISALLOWED_IN_ROAMING();
		static jint CALL_PREEMPT_BY_EMERGENCY_APN();
		static jint CANNOT_ENCODE_OTA_MESSAGE();
		static jint CDMA_ALERT_STOP();
		static jint CDMA_INCOMING_CALL();
		static jint CDMA_INTERCEPT();
		static jint CDMA_LOCK();
		static jint CDMA_RELEASE_DUE_TO_SO_REJECTION();
		static jint CDMA_REORDER();
		static jint CDMA_RETRY_ORDER();
		static jint CHANNEL_ACQUISITION_FAILURE();
		static jint CLOSE_IN_PROGRESS();
		static jint COLLISION_WITH_NETWORK_INITIATED_REQUEST();
		static jint COMPANION_IFACE_IN_USE();
		static jint CONCURRENT_SERVICES_INCOMPATIBLE();
		static jint CONCURRENT_SERVICES_NOT_ALLOWED();
		static jint CONCURRENT_SERVICE_NOT_SUPPORTED_BY_BASE_STATION();
		static jint CONDITIONAL_IE_ERROR();
		static jint CONGESTION();
		static jint CONNECTION_RELEASED();
		static jint CS_DOMAIN_NOT_AVAILABLE();
		static jint CS_FALLBACK_CALL_ESTABLISHMENT_NOT_ALLOWED();
		static jint DATA_PLAN_EXPIRED();
		static jint DATA_ROAMING_SETTINGS_DISABLED();
		static jint DATA_SETTINGS_DISABLED();
		static jint DBM_OR_SMS_IN_PROGRESS();
		static jint DDS_SWITCHED();
		static jint DDS_SWITCH_IN_PROGRESS();
		static jint DRB_RELEASED_BY_RRC();
		static jint DS_EXPLICIT_DEACTIVATION();
		static jint DUAL_SWITCH();
		static jint DUN_CALL_DISALLOWED();
		static jint DUPLICATE_BEARER_ID();
		static jint EHRPD_TO_HRPD_FALLBACK();
		static jint EMBMS_NOT_ENABLED();
		static jint EMBMS_REGULAR_DEACTIVATION();
		static jint EMERGENCY_IFACE_ONLY();
		static jint EMERGENCY_MODE();
		static jint EMM_ACCESS_BARRED();
		static jint EMM_ACCESS_BARRED_INFINITE_RETRY();
		static jint EMM_ATTACH_FAILED();
		static jint EMM_ATTACH_STARTED();
		static jint EMM_DETACHED();
		static jint EMM_T3417_EXPIRED();
		static jint EMM_T3417_EXT_EXPIRED();
		static jint EPS_SERVICES_AND_NON_EPS_SERVICES_NOT_ALLOWED();
		static jint EPS_SERVICES_NOT_ALLOWED_IN_PLMN();
		static jint ERROR_UNSPECIFIED();
		static jint ESM_BAD_OTA_MESSAGE();
		static jint ESM_BEARER_DEACTIVATED_TO_SYNC_WITH_NETWORK();
		static jint ESM_COLLISION_SCENARIOS();
		static jint ESM_CONTEXT_TRANSFERRED_DUE_TO_IRAT();
		static jint ESM_DOWNLOAD_SERVER_REJECTED_THE_CALL();
		static jint ESM_FAILURE();
		static jint ESM_INFO_NOT_RECEIVED();
		static jint ESM_LOCAL_CAUSE_NONE();
		static jint ESM_NW_ACTIVATED_DED_BEARER_WITH_ID_OF_DEF_BEARER();
		static jint ESM_PROCEDURE_TIME_OUT();
		static jint ESM_UNKNOWN_EPS_BEARER_CONTEXT();
		static jint EVDO_CONNECTION_DENY_BY_BILLING_OR_AUTHENTICATION_FAILURE();
		static jint EVDO_CONNECTION_DENY_BY_GENERAL_OR_NETWORK_BUSY();
		static jint EVDO_HDR_CHANGED();
		static jint EVDO_HDR_CONNECTION_SETUP_TIMEOUT();
		static jint EVDO_HDR_EXITED();
		static jint EVDO_HDR_NO_SESSION();
		static jint EVDO_USING_GPS_FIX_INSTEAD_OF_HDR_CALL();
		static jint FADE();
		static jint FAILED_TO_ACQUIRE_COLOCATED_HDR();
		static jint FEATURE_NOT_SUPP();
		static jint FILTER_SEMANTIC_ERROR();
		static jint FILTER_SYTAX_ERROR();
		static jint FORBIDDEN_APN_NAME();
		static jint GPRS_REGISTRATION_FAIL();
		static jint GPRS_SERVICES_AND_NON_GPRS_SERVICES_NOT_ALLOWED();
		static jint GPRS_SERVICES_NOT_ALLOWED();
		static jint GPRS_SERVICES_NOT_ALLOWED_IN_THIS_PLMN();
		static jint HANDOFF_PREFERENCE_CHANGED();
		static jint HDR_ACCESS_FAILURE();
		static jint HDR_FADE();
		static jint HDR_NO_LOCK_GRANTED();
		static jint IFACE_AND_POL_FAMILY_MISMATCH();
		static jint IFACE_MISMATCH();
		static jint ILLEGAL_ME();
		static jint ILLEGAL_MS();
		static jint IMEI_NOT_ACCEPTED();
		static jint IMPLICITLY_DETACHED();
		static jint IMSI_UNKNOWN_IN_HOME_SUBSCRIBER_SERVER();
		static jint INCOMING_CALL_REJECTED();
		static jint INSUFFICIENT_RESOURCES();
		static jint INTERFACE_IN_USE();
		static jint INTERNAL_CALL_PREEMPT_BY_HIGH_PRIO_APN();
		static jint INTERNAL_EPC_NONEPC_TRANSITION();
		static jint INVALID_CONNECTION_ID();
		static jint INVALID_DNS_ADDR();
		static jint INVALID_EMM_STATE();
		static jint INVALID_MANDATORY_INFO();
		static jint INVALID_MODE();
		static jint INVALID_PCSCF_ADDR();
		static jint INVALID_PCSCF_OR_DNS_ADDRESS();
		static jint INVALID_PRIMARY_NSAPI();
		static jint INVALID_SIM_STATE();
		static jint INVALID_TRANSACTION_ID();
		static jint IPV6_ADDRESS_TRANSFER_FAILED();
		static jint IPV6_PREFIX_UNAVAILABLE();
		static jint IP_ADDRESS_MISMATCH();
		static jint IP_VERSION_MISMATCH();
		static jint IRAT_HANDOVER_FAILED();
		static jint IS707B_MAX_ACCESS_PROBES();
		static jint IWLAN_AUTHORIZATION_REJECTED();
		static jint IWLAN_DNS_RESOLUTION_NAME_FAILURE();
		static jint IWLAN_DNS_RESOLUTION_TIMEOUT();
		static jint IWLAN_IKEV2_AUTH_FAILURE();
		static jint IWLAN_IKEV2_CERT_INVALID();
		static jint IWLAN_IKEV2_CONFIG_FAILURE();
		static jint IWLAN_IKEV2_MSG_TIMEOUT();
		static jint IWLAN_ILLEGAL_ME();
		static jint IWLAN_IMEI_NOT_ACCEPTED();
		static jint IWLAN_MAX_CONNECTION_REACHED();
		static jint IWLAN_NETWORK_FAILURE();
		static jint IWLAN_NON_3GPP_ACCESS_TO_EPC_NOT_ALLOWED();
		static jint IWLAN_NO_APN_SUBSCRIPTION();
		static jint IWLAN_PDN_CONNECTION_REJECTION();
		static jint IWLAN_PLMN_NOT_ALLOWED();
		static jint IWLAN_RAT_TYPE_NOT_ALLOWED();
		static jint IWLAN_SEMANTIC_ERRORS_IN_PACKET_FILTERS();
		static jint IWLAN_SEMANTIC_ERROR_IN_THE_TFT_OPERATION();
		static jint IWLAN_SYNTACTICAL_ERRORS_IN_PACKET_FILTERS();
		static jint IWLAN_SYNTACTICAL_ERROR_IN_THE_TFT_OPERATION();
		static jint IWLAN_UNAUTHENTICATED_EMERGENCY_NOT_SUPPORTED();
		static jint IWLAN_USER_UNKNOWN();
		static jint LIMITED_TO_IPV4();
		static jint LIMITED_TO_IPV6();
		static jint LLC_SNDCP();
		static jint LOCAL_END();
		static jint LOCATION_AREA_NOT_ALLOWED();
		static jint LOST_CONNECTION();
		static jint LOWER_LAYER_REGISTRATION_FAILURE();
		static jint LOW_POWER_MODE_OR_POWERING_DOWN();
		static jint LTE_NAS_SERVICE_REQUEST_FAILED();
		static jint LTE_THROTTLING_NOT_REQUIRED();
		static jint MAC_FAILURE();
		static jint MATCH_ALL_RULE_NOT_ALLOWED();
		static jint MAXIMIUM_NSAPIS_EXCEEDED();
		static jint MAXINUM_SIZE_OF_L2_MESSAGE_EXCEEDED();
		static jint MAX_ACCESS_PROBE();
		static jint MAX_IPV4_CONNECTIONS();
		static jint MAX_IPV6_CONNECTIONS();
		static jint MAX_PPP_INACTIVITY_TIMER_EXPIRED();
		static jint MESSAGE_INCORRECT_SEMANTIC();
		static jint MESSAGE_TYPE_UNSUPPORTED();
		static jint MIP_CONFIG_FAILURE();
		static jint MIP_FA_ADMIN_PROHIBITED();
		static jint MIP_FA_DELIVERY_STYLE_NOT_SUPPORTED();
		static jint MIP_FA_ENCAPSULATION_UNAVAILABLE();
		static jint MIP_FA_HOME_AGENT_AUTHENTICATION_FAILURE();
		static jint MIP_FA_INSUFFICIENT_RESOURCES();
		static jint MIP_FA_MALFORMED_REPLY();
		static jint MIP_FA_MALFORMED_REQUEST();
		static jint MIP_FA_MISSING_CHALLENGE();
		static jint MIP_FA_MISSING_HOME_ADDRESS();
		static jint MIP_FA_MISSING_HOME_AGENT();
		static jint MIP_FA_MISSING_NAI();
		static jint MIP_FA_MOBILE_NODE_AUTHENTICATION_FAILURE();
		static jint MIP_FA_REASON_UNSPECIFIED();
		static jint MIP_FA_REQUESTED_LIFETIME_TOO_LONG();
		static jint MIP_FA_REVERSE_TUNNEL_IS_MANDATORY();
		static jint MIP_FA_REVERSE_TUNNEL_UNAVAILABLE();
		static jint MIP_FA_STALE_CHALLENGE();
		static jint MIP_FA_UNKNOWN_CHALLENGE();
		static jint MIP_FA_VJ_HEADER_COMPRESSION_UNAVAILABLE();
		static jint MIP_HA_ADMIN_PROHIBITED();
		static jint MIP_HA_ENCAPSULATION_UNAVAILABLE();
		static jint MIP_HA_FOREIGN_AGENT_AUTHENTICATION_FAILURE();
		static jint MIP_HA_INSUFFICIENT_RESOURCES();
		static jint MIP_HA_MALFORMED_REQUEST();
		static jint MIP_HA_MOBILE_NODE_AUTHENTICATION_FAILURE();
		static jint MIP_HA_REASON_UNSPECIFIED();
		static jint MIP_HA_REGISTRATION_ID_MISMATCH();
		static jint MIP_HA_REVERSE_TUNNEL_IS_MANDATORY();
		static jint MIP_HA_REVERSE_TUNNEL_UNAVAILABLE();
		static jint MIP_HA_UNKNOWN_HOME_AGENT_ADDRESS();
		static jint MISSING_UNKNOWN_APN();
		static jint MODEM_APP_PREEMPTED();
		static jint MODEM_RESTART();
		static jint MSC_TEMPORARILY_NOT_REACHABLE();
		static jint MSG_AND_PROTOCOL_STATE_UNCOMPATIBLE();
		static jint MSG_TYPE_NONCOMPATIBLE_STATE();
		static jint MS_IDENTITY_CANNOT_BE_DERIVED_BY_THE_NETWORK();
		static jint MULTIPLE_PDP_CALL_NOT_ALLOWED();
		static jint MULTI_CONN_TO_SAME_PDN_NOT_ALLOWED();
		static jint NAS_LAYER_FAILURE();
		static jint NAS_REQUEST_REJECTED_BY_NETWORK();
		static jint NAS_SIGNALLING();
		static jint NETWORK_FAILURE();
		static jint NETWORK_INITIATED_DETACH_NO_AUTO_REATTACH();
		static jint NETWORK_INITIATED_DETACH_WITH_AUTO_REATTACH();
		static jint NETWORK_INITIATED_TERMINATION();
		static jint NONE();
		static jint NON_IP_NOT_SUPPORTED();
		static jint NORMAL_RELEASE();
		static jint NO_CDMA_SERVICE();
		static jint NO_COLLOCATED_HDR();
		static jint NO_EPS_BEARER_CONTEXT_ACTIVATED();
		static jint NO_GPRS_CONTEXT();
		static jint NO_HYBRID_HDR_SERVICE();
		static jint NO_PDP_CONTEXT_ACTIVATED();
		static jint NO_RESPONSE_FROM_BASE_STATION();
		static jint NO_SERVICE();
		static jint NO_SERVICE_ON_GATEWAY();
		static jint NSAPI_IN_USE();
		static jint NULL_APN_DISALLOWED();
		static jint OEM_DCFAILCAUSE_1();
		static jint OEM_DCFAILCAUSE_10();
		static jint OEM_DCFAILCAUSE_11();
		static jint OEM_DCFAILCAUSE_12();
		static jint OEM_DCFAILCAUSE_13();
		static jint OEM_DCFAILCAUSE_14();
		static jint OEM_DCFAILCAUSE_15();
		static jint OEM_DCFAILCAUSE_2();
		static jint OEM_DCFAILCAUSE_3();
		static jint OEM_DCFAILCAUSE_4();
		static jint OEM_DCFAILCAUSE_5();
		static jint OEM_DCFAILCAUSE_6();
		static jint OEM_DCFAILCAUSE_7();
		static jint OEM_DCFAILCAUSE_8();
		static jint OEM_DCFAILCAUSE_9();
		static jint ONLY_IPV4V6_ALLOWED();
		static jint ONLY_IPV4_ALLOWED();
		static jint ONLY_IPV6_ALLOWED();
		static jint ONLY_NON_IP_ALLOWED();
		static jint ONLY_SINGLE_BEARER_ALLOWED();
		static jint OPERATOR_BARRED();
		static jint OTASP_COMMIT_IN_PROGRESS();
		static jint PDN_CONN_DOES_NOT_EXIST();
		static jint PDN_INACTIVITY_TIMER_EXPIRED();
		static jint PDN_IPV4_CALL_DISALLOWED();
		static jint PDN_IPV4_CALL_THROTTLED();
		static jint PDN_IPV6_CALL_DISALLOWED();
		static jint PDN_IPV6_CALL_THROTTLED();
		static jint PDN_NON_IP_CALL_DISALLOWED();
		static jint PDN_NON_IP_CALL_THROTTLED();
		static jint PDP_ACTIVATE_MAX_RETRY_FAILED();
		static jint PDP_DUPLICATE();
		static jint PDP_ESTABLISH_TIMEOUT_EXPIRED();
		static jint PDP_INACTIVE_TIMEOUT_EXPIRED();
		static jint PDP_LOWERLAYER_ERROR();
		static jint PDP_MODIFY_COLLISION();
		static jint PDP_MODIFY_TIMEOUT_EXPIRED();
		static jint PDP_PPP_NOT_SUPPORTED();
		static jint PDP_WITHOUT_ACTIVE_TFT();
		static jint PHONE_IN_USE();
		static jint PHYSICAL_LINK_CLOSE_IN_PROGRESS();
		static jint PLMN_NOT_ALLOWED();
		static jint PPP_AUTH_FAILURE();
		static jint PPP_CHAP_FAILURE();
		static jint PPP_CLOSE_IN_PROGRESS();
		static jint PPP_OPTION_MISMATCH();
		static jint PPP_PAP_FAILURE();
		static jint PPP_TIMEOUT();
		static jint PREF_RADIO_TECH_CHANGED();
		static jint PROFILE_BEARER_INCOMPATIBLE();
		static jint PROTOCOL_ERRORS();
		static jint QOS_NOT_ACCEPTED();
		static jint RADIO_ACCESS_BEARER_FAILURE();
		static jint RADIO_ACCESS_BEARER_SETUP_FAILURE();
		static jint RADIO_NOT_AVAILABLE();
		static jint RADIO_POWER_OFF();
		static jint REDIRECTION_OR_HANDOFF_IN_PROGRESS();
		static jint REGISTRATION_FAIL();
		static jint REGULAR_DEACTIVATION();
		static jint REJECTED_BY_BASE_STATION();
		static jint RRC_CONNECTION_ABORTED_AFTER_HANDOVER();
		static jint RRC_CONNECTION_ABORTED_AFTER_IRAT_CELL_CHANGE();
		static jint RRC_CONNECTION_ABORTED_DUE_TO_IRAT_CHANGE();
		static jint RRC_CONNECTION_ABORTED_DURING_IRAT_CELL_CHANGE();
		static jint RRC_CONNECTION_ABORT_REQUEST();
		static jint RRC_CONNECTION_ACCESS_BARRED();
		static jint RRC_CONNECTION_ACCESS_STRATUM_FAILURE();
		static jint RRC_CONNECTION_ANOTHER_PROCEDURE_IN_PROGRESS();
		static jint RRC_CONNECTION_CELL_NOT_CAMPED();
		static jint RRC_CONNECTION_CELL_RESELECTION();
		static jint RRC_CONNECTION_CONFIG_FAILURE();
		static jint RRC_CONNECTION_INVALID_REQUEST();
		static jint RRC_CONNECTION_LINK_FAILURE();
		static jint RRC_CONNECTION_NORMAL_RELEASE();
		static jint RRC_CONNECTION_OUT_OF_SERVICE_DURING_CELL_REGISTER();
		static jint RRC_CONNECTION_RADIO_LINK_FAILURE();
		static jint RRC_CONNECTION_REESTABLISHMENT_FAILURE();
		static jint RRC_CONNECTION_REJECT_BY_NETWORK();
		static jint RRC_CONNECTION_RELEASED_SECURITY_NOT_ACTIVE();
		static jint RRC_CONNECTION_RF_UNAVAILABLE();
		static jint RRC_CONNECTION_SYSTEM_INFORMATION_BLOCK_READ_ERROR();
		static jint RRC_CONNECTION_SYSTEM_INTERVAL_FAILURE();
		static jint RRC_CONNECTION_TIMER_EXPIRED();
		static jint RRC_CONNECTION_TRACKING_AREA_ID_CHANGED();
		static jint RRC_UPLINK_CONNECTION_RELEASE();
		static jint RRC_UPLINK_DATA_TRANSMISSION_FAILURE();
		static jint RRC_UPLINK_DELIVERY_FAILED_DUE_TO_HANDOVER();
		static jint RRC_UPLINK_ERROR_REQUEST_FROM_NAS();
		static jint RRC_UPLINK_RADIO_LINK_FAILURE();
		static jint RUIM_NOT_PRESENT();
		static jint SECURITY_MODE_REJECTED();
		static jint SERVICE_NOT_ALLOWED_ON_PLMN();
		static jint SERVICE_OPTION_NOT_SUBSCRIBED();
		static jint SERVICE_OPTION_NOT_SUPPORTED();
		static jint SERVICE_OPTION_OUT_OF_ORDER();
		static jint SIGNAL_LOST();
		static jint SIM_CARD_CHANGED();
		static jint SLICE_REJECTED();
		static jint SYNCHRONIZATION_FAILURE();
		static jint TEST_LOOPBACK_REGULAR_DEACTIVATION();
		static jint TETHERED_CALL_ACTIVE();
		static jint TFT_SEMANTIC_ERROR();
		static jint TFT_SYTAX_ERROR();
		static jint THERMAL_EMERGENCY();
		static jint THERMAL_MITIGATION();
		static jint TRAT_SWAP_FAILED();
		static jint UE_INITIATED_DETACH_OR_DISCONNECT();
		static jint UE_IS_ENTERING_POWERSAVE_MODE();
		static jint UE_RAT_CHANGE();
		static jint UE_SECURITY_CAPABILITIES_MISMATCH();
		static jint UMTS_HANDOVER_TO_IWLAN();
		static jint UMTS_REACTIVATION_REQ();
		static jint UNACCEPTABLE_NETWORK_PARAMETER();
		static jint UNACCEPTABLE_NON_EPS_AUTHENTICATION();
		static jint UNKNOWN();
		static jint UNKNOWN_INFO_ELEMENT();
		static jint UNKNOWN_PDP_ADDRESS_TYPE();
		static jint UNKNOWN_PDP_CONTEXT();
		static jint UNPREFERRED_RAT();
		static jint UNSUPPORTED_1X_PREV();
		static jint UNSUPPORTED_APN_IN_CURRENT_PLMN();
		static jint UNSUPPORTED_QCI_VALUE();
		static jint USER_AUTHENTICATION();
		static jint VSNCP_ADMINISTRATIVELY_PROHIBITED();
		static jint VSNCP_APN_UNAUTHORIZED();
		static jint VSNCP_GEN_ERROR();
		static jint VSNCP_INSUFFICIENT_PARAMETERS();
		static jint VSNCP_NO_PDN_GATEWAY_ADDRESS();
		static jint VSNCP_PDN_EXISTS_FOR_THIS_APN();
		static jint VSNCP_PDN_GATEWAY_REJECT();
		static jint VSNCP_PDN_GATEWAY_UNREACHABLE();
		static jint VSNCP_PDN_ID_IN_USE();
		static jint VSNCP_PDN_LIMIT_EXCEEDED();
		static jint VSNCP_RECONNECT_NOT_ALLOWED();
		static jint VSNCP_RESOURCE_UNAVAILABLE();
		static jint VSNCP_SUBSCRIBER_LIMITATION();
		static jint VSNCP_TIMEOUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit DataFailCause(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataFailCause(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

