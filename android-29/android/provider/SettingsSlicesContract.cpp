#include "../net/Uri.hpp"
#include "./SettingsSlicesContract.hpp"

namespace android::provider
{
	// Fields
	jstring SettingsSlicesContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri SettingsSlicesContract::BASE_URI()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"BASE_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring SettingsSlicesContract::KEY_AIRPLANE_MODE()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_AIRPLANE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_BATTERY_SAVER()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BATTERY_SAVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_LOCATION()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::KEY_WIFI()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"KEY_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::PATH_SETTING_ACTION()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SettingsSlicesContract::PATH_SETTING_INTENT()
	{
		return getStaticObjectField(
			"android.provider.SettingsSlicesContract",
			"PATH_SETTING_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SettingsSlicesContract::SettingsSlicesContract(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

