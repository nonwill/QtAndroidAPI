#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
class JArray;
namespace android::app::admin
{
	class DevicePolicyManager_InstallSystemUpdateCallback;
}
namespace android::app::admin
{
	class FactoryResetProtectionPolicy;
}
namespace android::app::admin
{
	class SystemUpdateInfo;
}
namespace android::app::admin
{
	class SystemUpdatePolicy;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class ProxyInfo;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::os
{
	class UserHandle;
}
namespace android::security
{
	class AttestedKeyPair;
}
namespace android::security::keystore
{
	class KeyGenParameterSpec;
}
namespace android::telephony::data
{
	class ApnSetting;
}
class JString;
class JString;
namespace java::security::cert
{
	class Certificate;
}

namespace android::app::admin
{
	class DevicePolicyManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_ADD_DEVICE_ADMIN();
		static JString ACTION_ADMIN_POLICY_COMPLIANCE();
		static JString ACTION_APPLICATION_DELEGATION_SCOPES_CHANGED();
		static JString ACTION_CHECK_POLICY_COMPLIANCE();
		static JString ACTION_DEVICE_ADMIN_SERVICE();
		static JString ACTION_DEVICE_OWNER_CHANGED();
		static JString ACTION_GET_PROVISIONING_MODE();
		static JString ACTION_MANAGED_PROFILE_PROVISIONED();
		static JString ACTION_PROFILE_OWNER_CHANGED();
		static JString ACTION_PROVISIONING_SUCCESSFUL();
		static JString ACTION_PROVISION_MANAGED_DEVICE();
		static JString ACTION_PROVISION_MANAGED_PROFILE();
		static JString ACTION_SET_NEW_PARENT_PROFILE_PASSWORD();
		static JString ACTION_SET_NEW_PASSWORD();
		static JString ACTION_START_ENCRYPTION();
		static JString ACTION_SYSTEM_UPDATE_POLICY_CHANGED();
		static JString DELEGATION_APP_RESTRICTIONS();
		static JString DELEGATION_BLOCK_UNINSTALL();
		static JString DELEGATION_CERT_INSTALL();
		static JString DELEGATION_CERT_SELECTION();
		static JString DELEGATION_ENABLE_SYSTEM_APP();
		static JString DELEGATION_INSTALL_EXISTING_PACKAGE();
		static JString DELEGATION_KEEP_UNINSTALLED_PACKAGES();
		static JString DELEGATION_NETWORK_LOGGING();
		static JString DELEGATION_PACKAGE_ACCESS();
		static JString DELEGATION_PERMISSION_GRANT();
		static JString DELEGATION_SECURITY_LOGGING();
		static jint ENCRYPTION_STATUS_ACTIVATING();
		static jint ENCRYPTION_STATUS_ACTIVE();
		static jint ENCRYPTION_STATUS_ACTIVE_DEFAULT_KEY();
		static jint ENCRYPTION_STATUS_ACTIVE_PER_USER();
		static jint ENCRYPTION_STATUS_INACTIVE();
		static jint ENCRYPTION_STATUS_UNSUPPORTED();
		static JString EXTRA_ADD_EXPLANATION();
		static JString EXTRA_DELEGATION_SCOPES();
		static JString EXTRA_DEVICE_ADMIN();
		static JString EXTRA_DEVICE_PASSWORD_REQUIREMENT_ONLY();
		static JString EXTRA_PASSWORD_COMPLEXITY();
		static JString EXTRA_PROVISIONING_ACCOUNT_TO_MIGRATE();
		static JString EXTRA_PROVISIONING_ADMIN_EXTRAS_BUNDLE();
		static JString EXTRA_PROVISIONING_ALLOWED_PROVISIONING_MODES();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_COMPONENT_NAME();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_MINIMUM_VERSION_CODE();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_CHECKSUM();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_COOKIE_HEADER();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_DOWNLOAD_LOCATION();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_PACKAGE_NAME();
		static JString EXTRA_PROVISIONING_DEVICE_ADMIN_SIGNATURE_CHECKSUM();
		static JString EXTRA_PROVISIONING_DISCLAIMERS();
		static JString EXTRA_PROVISIONING_DISCLAIMER_CONTENT();
		static JString EXTRA_PROVISIONING_DISCLAIMER_HEADER();
		static JString EXTRA_PROVISIONING_EMAIL_ADDRESS();
		static JString EXTRA_PROVISIONING_IMEI();
		static JString EXTRA_PROVISIONING_KEEP_ACCOUNT_ON_MIGRATION();
		static JString EXTRA_PROVISIONING_LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static JString EXTRA_PROVISIONING_LOCALE();
		static JString EXTRA_PROVISIONING_LOCAL_TIME();
		static JString EXTRA_PROVISIONING_LOGO_URI();
		static JString EXTRA_PROVISIONING_MAIN_COLOR();
		static JString EXTRA_PROVISIONING_MODE();
		static JString EXTRA_PROVISIONING_SENSORS_PERMISSION_GRANT_OPT_OUT();
		static JString EXTRA_PROVISIONING_SERIAL_NUMBER();
		static JString EXTRA_PROVISIONING_SKIP_EDUCATION_SCREENS();
		static JString EXTRA_PROVISIONING_SKIP_ENCRYPTION();
		static JString EXTRA_PROVISIONING_SKIP_USER_CONSENT();
		static JString EXTRA_PROVISIONING_TIME_ZONE();
		static JString EXTRA_PROVISIONING_WIFI_ANONYMOUS_IDENTITY();
		static JString EXTRA_PROVISIONING_WIFI_CA_CERTIFICATE();
		static JString EXTRA_PROVISIONING_WIFI_DOMAIN();
		static JString EXTRA_PROVISIONING_WIFI_EAP_METHOD();
		static JString EXTRA_PROVISIONING_WIFI_HIDDEN();
		static JString EXTRA_PROVISIONING_WIFI_IDENTITY();
		static JString EXTRA_PROVISIONING_WIFI_PAC_URL();
		static JString EXTRA_PROVISIONING_WIFI_PASSWORD();
		static JString EXTRA_PROVISIONING_WIFI_PHASE2_AUTH();
		static JString EXTRA_PROVISIONING_WIFI_PROXY_BYPASS();
		static JString EXTRA_PROVISIONING_WIFI_PROXY_HOST();
		static JString EXTRA_PROVISIONING_WIFI_PROXY_PORT();
		static JString EXTRA_PROVISIONING_WIFI_SECURITY_TYPE();
		static JString EXTRA_PROVISIONING_WIFI_SSID();
		static JString EXTRA_PROVISIONING_WIFI_USER_CERTIFICATE();
		static jint FLAG_EVICT_CREDENTIAL_ENCRYPTION_KEY();
		static jint FLAG_MANAGED_CAN_ACCESS_PARENT();
		static jint FLAG_PARENT_CAN_ACCESS_MANAGED();
		static jint ID_TYPE_BASE_INFO();
		static jint ID_TYPE_IMEI();
		static jint ID_TYPE_INDIVIDUAL_ATTESTATION();
		static jint ID_TYPE_MEID();
		static jint ID_TYPE_SERIAL();
		static jint INSTALLKEY_REQUEST_CREDENTIALS_ACCESS();
		static jint INSTALLKEY_SET_USER_SELECTABLE();
		static jint KEYGUARD_DISABLE_BIOMETRICS();
		static jint KEYGUARD_DISABLE_FACE();
		static jint KEYGUARD_DISABLE_FEATURES_ALL();
		static jint KEYGUARD_DISABLE_FEATURES_NONE();
		static jint KEYGUARD_DISABLE_FINGERPRINT();
		static jint KEYGUARD_DISABLE_IRIS();
		static jint KEYGUARD_DISABLE_REMOTE_INPUT();
		static jint KEYGUARD_DISABLE_SECURE_CAMERA();
		static jint KEYGUARD_DISABLE_SECURE_NOTIFICATIONS();
		static jint KEYGUARD_DISABLE_TRUST_AGENTS();
		static jint KEYGUARD_DISABLE_UNREDACTED_NOTIFICATIONS();
		static jint KEYGUARD_DISABLE_WIDGETS_ALL();
		static jint LEAVE_ALL_SYSTEM_APPS_ENABLED();
		static jint LOCK_TASK_FEATURE_BLOCK_ACTIVITY_START_IN_TASK();
		static jint LOCK_TASK_FEATURE_GLOBAL_ACTIONS();
		static jint LOCK_TASK_FEATURE_HOME();
		static jint LOCK_TASK_FEATURE_KEYGUARD();
		static jint LOCK_TASK_FEATURE_NONE();
		static jint LOCK_TASK_FEATURE_NOTIFICATIONS();
		static jint LOCK_TASK_FEATURE_OVERVIEW();
		static jint LOCK_TASK_FEATURE_SYSTEM_INFO();
		static jint MAKE_USER_EPHEMERAL();
		static JString MIME_TYPE_PROVISIONING_NFC();
		static jint NEARBY_STREAMING_DISABLED();
		static jint NEARBY_STREAMING_ENABLED();
		static jint NEARBY_STREAMING_NOT_CONTROLLED_BY_POLICY();
		static jint NEARBY_STREAMING_SAME_MANAGED_ACCOUNT_ONLY();
		static jint OPERATION_SAFETY_REASON_DRIVING_DISTRACTION();
		static jint PASSWORD_COMPLEXITY_HIGH();
		static jint PASSWORD_COMPLEXITY_LOW();
		static jint PASSWORD_COMPLEXITY_MEDIUM();
		static jint PASSWORD_COMPLEXITY_NONE();
		static jint PASSWORD_QUALITY_ALPHABETIC();
		static jint PASSWORD_QUALITY_ALPHANUMERIC();
		static jint PASSWORD_QUALITY_BIOMETRIC_WEAK();
		static jint PASSWORD_QUALITY_COMPLEX();
		static jint PASSWORD_QUALITY_NUMERIC();
		static jint PASSWORD_QUALITY_NUMERIC_COMPLEX();
		static jint PASSWORD_QUALITY_SOMETHING();
		static jint PASSWORD_QUALITY_UNSPECIFIED();
		static jint PERMISSION_GRANT_STATE_DEFAULT();
		static jint PERMISSION_GRANT_STATE_DENIED();
		static jint PERMISSION_GRANT_STATE_GRANTED();
		static jint PERMISSION_POLICY_AUTO_DENY();
		static jint PERMISSION_POLICY_AUTO_GRANT();
		static jint PERMISSION_POLICY_PROMPT();
		static jint PERSONAL_APPS_NOT_SUSPENDED();
		static jint PERSONAL_APPS_SUSPENDED_EXPLICITLY();
		static jint PERSONAL_APPS_SUSPENDED_PROFILE_TIMEOUT();
		static JString POLICY_DISABLE_CAMERA();
		static JString POLICY_DISABLE_SCREEN_CAPTURE();
		static jint PRIVATE_DNS_MODE_OFF();
		static jint PRIVATE_DNS_MODE_OPPORTUNISTIC();
		static jint PRIVATE_DNS_MODE_PROVIDER_HOSTNAME();
		static jint PRIVATE_DNS_MODE_UNKNOWN();
		static jint PRIVATE_DNS_SET_ERROR_FAILURE_SETTING();
		static jint PRIVATE_DNS_SET_ERROR_HOST_NOT_SERVING();
		static jint PRIVATE_DNS_SET_NO_ERROR();
		static jint PROVISIONING_MODE_FULLY_MANAGED_DEVICE();
		static jint PROVISIONING_MODE_MANAGED_PROFILE();
		static jint PROVISIONING_MODE_MANAGED_PROFILE_ON_PERSONAL_DEVICE();
		static jint RESET_PASSWORD_DO_NOT_ASK_CREDENTIALS_ON_BOOT();
		static jint RESET_PASSWORD_REQUIRE_ENTRY();
		static jint SKIP_SETUP_WIZARD();
		static jint WIPE_EUICC();
		static jint WIPE_EXTERNAL_STORAGE();
		static jint WIPE_RESET_PROTECTION_DATA();
		static jint WIPE_SILENTLY();
		
		// QJniObject forward
		template<typename ...Ts> explicit DevicePolicyManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DevicePolicyManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void acknowledgeDeviceCompliant();
		void addCrossProfileIntentFilter(android::content::ComponentName arg0, android::content::IntentFilter arg1, jint arg2);
		jboolean addCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1);
		jint addOverrideApn(android::content::ComponentName arg0, android::telephony::data::ApnSetting arg1);
		void addPersistentPreferredActivity(android::content::ComponentName arg0, android::content::IntentFilter arg1, android::content::ComponentName arg2);
		void addUserRestriction(android::content::ComponentName arg0, JString arg1);
		jboolean bindDeviceAdminServiceAsUser(android::content::ComponentName arg0, android::content::Intent arg1, JObject arg2, jint arg3, android::os::UserHandle arg4);
		jboolean canAdminGrantSensorsPermissions();
		jboolean canUsbDataSignalingBeDisabled();
		void clearApplicationUserData(android::content::ComponentName arg0, JString arg1, JObject arg2, JObject arg3);
		void clearCrossProfileIntentFilters(android::content::ComponentName arg0);
		void clearDeviceOwnerApp(JString arg0);
		void clearPackagePersistentPreferredActivities(android::content::ComponentName arg0, JString arg1);
		void clearProfileOwner(android::content::ComponentName arg0);
		jboolean clearResetPasswordToken(android::content::ComponentName arg0);
		void clearUserRestriction(android::content::ComponentName arg0, JString arg1);
		android::content::Intent createAdminSupportIntent(JString arg0);
		android::os::UserHandle createAndManageUser(android::content::ComponentName arg0, JString arg1, android::content::ComponentName arg2, android::os::PersistableBundle arg3, jint arg4);
		jint enableSystemApp(android::content::ComponentName arg0, android::content::Intent arg1);
		void enableSystemApp(android::content::ComponentName arg0, JString arg1);
		android::security::AttestedKeyPair generateKeyPair(android::content::ComponentName arg0, JString arg1, android::security::keystore::KeyGenParameterSpec arg2, jint arg3);
		JArray getAccountTypesWithManagementDisabled();
		JObject getActiveAdmins();
		JObject getAffiliationIds(android::content::ComponentName arg0);
		JObject getAlwaysOnVpnLockdownWhitelist(android::content::ComponentName arg0);
		JString getAlwaysOnVpnPackage(android::content::ComponentName arg0);
		android::os::Bundle getApplicationRestrictions(android::content::ComponentName arg0, JString arg1);
		JString getApplicationRestrictionsManagingPackage(android::content::ComponentName arg0);
		jboolean getAutoTimeEnabled(android::content::ComponentName arg0);
		jboolean getAutoTimeRequired();
		jboolean getAutoTimeZoneEnabled(android::content::ComponentName arg0);
		JObject getBindDeviceAdminTargetUsers(android::content::ComponentName arg0);
		jboolean getBluetoothContactSharingDisabled(android::content::ComponentName arg0);
		jboolean getCameraDisabled(android::content::ComponentName arg0);
		JString getCertInstallerPackage(android::content::ComponentName arg0);
		JObject getCrossProfileCalendarPackages(android::content::ComponentName arg0);
		jboolean getCrossProfileCallerIdDisabled(android::content::ComponentName arg0);
		jboolean getCrossProfileContactsSearchDisabled(android::content::ComponentName arg0);
		JObject getCrossProfilePackages(android::content::ComponentName arg0);
		JObject getCrossProfileWidgetProviders(android::content::ComponentName arg0);
		jint getCurrentFailedPasswordAttempts();
		JObject getDelegatePackages(android::content::ComponentName arg0, JString arg1);
		JObject getDelegatedScopes(android::content::ComponentName arg0, JString arg1);
		JString getDeviceOwnerLockScreenInfo();
		JString getEndUserSessionMessage(android::content::ComponentName arg0);
		JString getEnrollmentSpecificId();
		android::app::admin::FactoryResetProtectionPolicy getFactoryResetProtectionPolicy(android::content::ComponentName arg0);
		JString getGlobalPrivateDnsHost(android::content::ComponentName arg0);
		jint getGlobalPrivateDnsMode(android::content::ComponentName arg0);
		JObject getInstalledCaCerts(android::content::ComponentName arg0);
		JObject getKeepUninstalledPackages(android::content::ComponentName arg0);
		JObject getKeyPairGrants(JString arg0);
		jint getKeyguardDisabledFeatures(android::content::ComponentName arg0);
		jint getLockTaskFeatures(android::content::ComponentName arg0);
		JArray getLockTaskPackages(android::content::ComponentName arg0);
		JString getLongSupportMessage(android::content::ComponentName arg0);
		jlong getManagedProfileMaximumTimeOff(android::content::ComponentName arg0);
		jint getMaximumFailedPasswordsForWipe(android::content::ComponentName arg0);
		jlong getMaximumTimeToLock(android::content::ComponentName arg0);
		JObject getMeteredDataDisabledPackages(android::content::ComponentName arg0);
		jint getNearbyAppStreamingPolicy();
		jint getNearbyNotificationStreamingPolicy();
		jint getOrganizationColor(android::content::ComponentName arg0);
		JString getOrganizationName(android::content::ComponentName arg0);
		JObject getOverrideApns(android::content::ComponentName arg0);
		android::app::admin::DevicePolicyManager getParentProfileInstance(android::content::ComponentName arg0);
		jint getPasswordComplexity();
		jlong getPasswordExpiration(android::content::ComponentName arg0);
		jlong getPasswordExpirationTimeout(android::content::ComponentName arg0);
		jint getPasswordHistoryLength(android::content::ComponentName arg0);
		jint getPasswordMaximumLength(jint arg0);
		jint getPasswordMinimumLength(android::content::ComponentName arg0);
		jint getPasswordMinimumLetters(android::content::ComponentName arg0);
		jint getPasswordMinimumLowerCase(android::content::ComponentName arg0);
		jint getPasswordMinimumNonLetter(android::content::ComponentName arg0);
		jint getPasswordMinimumNumeric(android::content::ComponentName arg0);
		jint getPasswordMinimumSymbols(android::content::ComponentName arg0);
		jint getPasswordMinimumUpperCase(android::content::ComponentName arg0);
		jint getPasswordQuality(android::content::ComponentName arg0);
		android::app::admin::SystemUpdateInfo getPendingSystemUpdate(android::content::ComponentName arg0);
		jint getPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2);
		jint getPermissionPolicy(android::content::ComponentName arg0);
		JObject getPermittedAccessibilityServices(android::content::ComponentName arg0);
		JObject getPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0);
		JObject getPermittedInputMethods(android::content::ComponentName arg0);
		jint getPersonalAppsSuspendedReasons(android::content::ComponentName arg0);
		jint getRequiredPasswordComplexity();
		jlong getRequiredStrongAuthTimeout(android::content::ComponentName arg0);
		jboolean getScreenCaptureDisabled(android::content::ComponentName arg0);
		JObject getSecondaryUsers(android::content::ComponentName arg0);
		JString getShortSupportMessage(android::content::ComponentName arg0);
		JString getStartUserSessionMessage(android::content::ComponentName arg0);
		jboolean getStorageEncryption(android::content::ComponentName arg0);
		jint getStorageEncryptionStatus();
		android::app::admin::SystemUpdatePolicy getSystemUpdatePolicy();
		android::os::PersistableBundle getTransferOwnershipBundle();
		JObject getTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1);
		JObject getUserControlDisabledPackages(android::content::ComponentName arg0);
		android::os::Bundle getUserRestrictions(android::content::ComponentName arg0);
		JString getWifiMacAddress(android::content::ComponentName arg0);
		jboolean grantKeyPairToApp(android::content::ComponentName arg0, JString arg1, JString arg2);
		jboolean grantKeyPairToWifiAuth(JString arg0);
		jboolean hasCaCertInstalled(android::content::ComponentName arg0, JByteArray arg1);
		jboolean hasGrantedPolicy(android::content::ComponentName arg0, jint arg1);
		jboolean hasKeyPair(JString arg0);
		jboolean hasLockdownAdminConfiguredNetworks(android::content::ComponentName arg0);
		jboolean installCaCert(android::content::ComponentName arg0, JByteArray arg1);
		jboolean installExistingPackage(android::content::ComponentName arg0, JString arg1);
		jboolean installKeyPair(android::content::ComponentName arg0, JObject arg1, java::security::cert::Certificate arg2, JString arg3);
		jboolean installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jboolean arg4);
		jboolean installKeyPair(android::content::ComponentName arg0, JObject arg1, JArray arg2, JString arg3, jint arg4);
		void installSystemUpdate(android::content::ComponentName arg0, android::net::Uri arg1, JObject arg2, android::app::admin::DevicePolicyManager_InstallSystemUpdateCallback arg3);
		jboolean isActivePasswordSufficient();
		jboolean isActivePasswordSufficientForDeviceRequirement();
		jboolean isAdminActive(android::content::ComponentName arg0);
		jboolean isAffiliatedUser();
		jboolean isAlwaysOnVpnLockdownEnabled(android::content::ComponentName arg0);
		jboolean isApplicationHidden(android::content::ComponentName arg0, JString arg1);
		jboolean isBackupServiceEnabled(android::content::ComponentName arg0);
		jboolean isCallerApplicationRestrictionsManagingPackage();
		jboolean isCommonCriteriaModeEnabled(android::content::ComponentName arg0);
		jboolean isComplianceAcknowledgementRequired();
		jboolean isDeviceIdAttestationSupported();
		jboolean isDeviceOwnerApp(JString arg0);
		jboolean isEphemeralUser(android::content::ComponentName arg0);
		jboolean isKeyPairGrantedToWifiAuth(JString arg0);
		jboolean isLockTaskPermitted(JString arg0);
		jboolean isLogoutEnabled();
		jboolean isManagedProfile(android::content::ComponentName arg0);
		jboolean isMasterVolumeMuted(android::content::ComponentName arg0);
		jboolean isNetworkLoggingEnabled(android::content::ComponentName arg0);
		jboolean isOrganizationOwnedDeviceWithManagedProfile();
		jboolean isOverrideApnEnabled(android::content::ComponentName arg0);
		jboolean isPackageSuspended(android::content::ComponentName arg0, JString arg1);
		jboolean isPreferentialNetworkServiceEnabled();
		jboolean isProfileOwnerApp(JString arg0);
		jboolean isProvisioningAllowed(JString arg0);
		jboolean isResetPasswordTokenActive(android::content::ComponentName arg0);
		jboolean isSafeOperation(jint arg0);
		jboolean isSecurityLoggingEnabled(android::content::ComponentName arg0);
		jboolean isUninstallBlocked(android::content::ComponentName arg0, JString arg1);
		jboolean isUniqueDeviceAttestationSupported();
		jboolean isUsbDataSignalingEnabled();
		jboolean isUsingUnifiedPassword(android::content::ComponentName arg0);
		JObject listForegroundAffiliatedUsers();
		void lockNow();
		void lockNow(jint arg0);
		jint logoutUser(android::content::ComponentName arg0);
		void reboot(android::content::ComponentName arg0);
		void removeActiveAdmin(android::content::ComponentName arg0);
		jboolean removeCrossProfileWidgetProvider(android::content::ComponentName arg0, JString arg1);
		jboolean removeKeyPair(android::content::ComponentName arg0, JString arg1);
		jboolean removeOverrideApn(android::content::ComponentName arg0, jint arg1);
		jboolean removeUser(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jboolean requestBugreport(android::content::ComponentName arg0);
		jboolean resetPassword(JString arg0, jint arg1);
		jboolean resetPasswordWithToken(android::content::ComponentName arg0, JString arg1, JByteArray arg2, jint arg3);
		JObject retrieveNetworkLogs(android::content::ComponentName arg0, jlong arg1);
		JObject retrievePreRebootSecurityLogs(android::content::ComponentName arg0);
		JObject retrieveSecurityLogs(android::content::ComponentName arg0);
		jboolean revokeKeyPairFromApp(android::content::ComponentName arg0, JString arg1, JString arg2);
		jboolean revokeKeyPairFromWifiAuth(JString arg0);
		void setAccountManagementDisabled(android::content::ComponentName arg0, JString arg1, jboolean arg2);
		void setAffiliationIds(android::content::ComponentName arg0, JObject arg1);
		void setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2);
		void setAlwaysOnVpnPackage(android::content::ComponentName arg0, JString arg1, jboolean arg2, JObject arg3);
		jboolean setApplicationHidden(android::content::ComponentName arg0, JString arg1, jboolean arg2);
		void setApplicationRestrictions(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2);
		void setApplicationRestrictionsManagingPackage(android::content::ComponentName arg0, JString arg1);
		void setAutoTimeEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setAutoTimeRequired(android::content::ComponentName arg0, jboolean arg1);
		void setAutoTimeZoneEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setBackupServiceEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setBluetoothContactSharingDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCameraDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCertInstallerPackage(android::content::ComponentName arg0, JString arg1);
		void setCommonCriteriaModeEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setConfiguredNetworksLockdownState(android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfileCalendarPackages(android::content::ComponentName arg0, JObject arg1);
		void setCrossProfileCallerIdDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfileContactsSearchDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setCrossProfilePackages(android::content::ComponentName arg0, JObject arg1);
		void setDefaultSmsApplication(android::content::ComponentName arg0, JString arg1);
		void setDelegatedScopes(android::content::ComponentName arg0, JString arg1, JObject arg2);
		void setDeviceOwnerLockScreenInfo(android::content::ComponentName arg0, JString arg1);
		void setEndUserSessionMessage(android::content::ComponentName arg0, JString arg1);
		void setFactoryResetProtectionPolicy(android::content::ComponentName arg0, android::app::admin::FactoryResetProtectionPolicy arg1);
		jint setGlobalPrivateDnsModeOpportunistic(android::content::ComponentName arg0);
		jint setGlobalPrivateDnsModeSpecifiedHost(android::content::ComponentName arg0, JString arg1);
		void setGlobalSetting(android::content::ComponentName arg0, JString arg1, JString arg2);
		void setKeepUninstalledPackages(android::content::ComponentName arg0, JObject arg1);
		jboolean setKeyPairCertificate(android::content::ComponentName arg0, JString arg1, JObject arg2, jboolean arg3);
		jboolean setKeyguardDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setKeyguardDisabledFeatures(android::content::ComponentName arg0, jint arg1);
		void setLocationEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setLockTaskFeatures(android::content::ComponentName arg0, jint arg1);
		void setLockTaskPackages(android::content::ComponentName arg0, JArray arg1);
		void setLogoutEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setLongSupportMessage(android::content::ComponentName arg0, JString arg1);
		void setManagedProfileMaximumTimeOff(android::content::ComponentName arg0, jlong arg1);
		void setMasterVolumeMuted(android::content::ComponentName arg0, jboolean arg1);
		void setMaximumFailedPasswordsForWipe(android::content::ComponentName arg0, jint arg1);
		void setMaximumTimeToLock(android::content::ComponentName arg0, jlong arg1);
		JObject setMeteredDataDisabledPackages(android::content::ComponentName arg0, JObject arg1);
		void setNearbyAppStreamingPolicy(jint arg0);
		void setNearbyNotificationStreamingPolicy(jint arg0);
		void setNetworkLoggingEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setOrganizationColor(android::content::ComponentName arg0, jint arg1);
		void setOrganizationId(JString arg0);
		void setOrganizationName(android::content::ComponentName arg0, JString arg1);
		void setOverrideApnsEnabled(android::content::ComponentName arg0, jboolean arg1);
		JArray setPackagesSuspended(android::content::ComponentName arg0, JArray arg1, jboolean arg2);
		void setPasswordExpirationTimeout(android::content::ComponentName arg0, jlong arg1);
		void setPasswordHistoryLength(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLength(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLetters(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumLowerCase(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumNonLetter(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumNumeric(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumSymbols(android::content::ComponentName arg0, jint arg1);
		void setPasswordMinimumUpperCase(android::content::ComponentName arg0, jint arg1);
		void setPasswordQuality(android::content::ComponentName arg0, jint arg1);
		jboolean setPermissionGrantState(android::content::ComponentName arg0, JString arg1, JString arg2, jint arg3);
		void setPermissionPolicy(android::content::ComponentName arg0, jint arg1);
		jboolean setPermittedAccessibilityServices(android::content::ComponentName arg0, JObject arg1);
		jboolean setPermittedCrossProfileNotificationListeners(android::content::ComponentName arg0, JObject arg1);
		jboolean setPermittedInputMethods(android::content::ComponentName arg0, JObject arg1);
		void setPersonalAppsSuspended(android::content::ComponentName arg0, jboolean arg1);
		void setPreferentialNetworkServiceEnabled(jboolean arg0);
		void setProfileEnabled(android::content::ComponentName arg0);
		void setProfileName(android::content::ComponentName arg0, JString arg1);
		void setRecommendedGlobalProxy(android::content::ComponentName arg0, android::net::ProxyInfo arg1);
		void setRequiredPasswordComplexity(jint arg0);
		void setRequiredStrongAuthTimeout(android::content::ComponentName arg0, jlong arg1);
		jboolean setResetPasswordToken(android::content::ComponentName arg0, JByteArray arg1);
		void setRestrictionsProvider(android::content::ComponentName arg0, android::content::ComponentName arg1);
		void setScreenCaptureDisabled(android::content::ComponentName arg0, jboolean arg1);
		void setSecureSetting(android::content::ComponentName arg0, JString arg1, JString arg2);
		void setSecurityLoggingEnabled(android::content::ComponentName arg0, jboolean arg1);
		void setShortSupportMessage(android::content::ComponentName arg0, JString arg1);
		void setStartUserSessionMessage(android::content::ComponentName arg0, JString arg1);
		jboolean setStatusBarDisabled(android::content::ComponentName arg0, jboolean arg1);
		jint setStorageEncryption(android::content::ComponentName arg0, jboolean arg1);
		void setSystemSetting(android::content::ComponentName arg0, JString arg1, JString arg2);
		void setSystemUpdatePolicy(android::content::ComponentName arg0, android::app::admin::SystemUpdatePolicy arg1);
		jboolean setTime(android::content::ComponentName arg0, jlong arg1);
		jboolean setTimeZone(android::content::ComponentName arg0, JString arg1);
		void setTrustAgentConfiguration(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2);
		void setUninstallBlocked(android::content::ComponentName arg0, JString arg1, jboolean arg2);
		void setUsbDataSignalingEnabled(jboolean arg0);
		void setUserControlDisabledPackages(android::content::ComponentName arg0, JObject arg1);
		void setUserIcon(android::content::ComponentName arg0, android::graphics::Bitmap arg1);
		jint startUserInBackground(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jint stopUser(android::content::ComponentName arg0, android::os::UserHandle arg1);
		jboolean switchUser(android::content::ComponentName arg0, android::os::UserHandle arg1);
		void transferOwnership(android::content::ComponentName arg0, android::content::ComponentName arg1, android::os::PersistableBundle arg2);
		void uninstallAllUserCaCerts(android::content::ComponentName arg0);
		void uninstallCaCert(android::content::ComponentName arg0, JByteArray arg1);
		jboolean updateOverrideApn(android::content::ComponentName arg0, jint arg1, android::telephony::data::ApnSetting arg2);
		void wipeData(jint arg0);
		void wipeData(jint arg0, JString arg1);
	};
} // namespace android::app::admin

