#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class SigningInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint INSTALL_LOCATION_AUTO();
		static jint INSTALL_LOCATION_INTERNAL_ONLY();
		static jint INSTALL_LOCATION_PREFER_EXTERNAL();
		static jint REQUESTED_PERMISSION_GRANTED();
		jarray activities();
		QAndroidJniObject applicationInfo();
		jint baseRevisionCode();
		jarray configPreferences();
		jarray featureGroups();
		jlong firstInstallTime();
		jintArray gids();
		jint installLocation();
		jarray instrumentation();
		jboolean isApex();
		jlong lastUpdateTime();
		jstring packageName();
		jarray permissions();
		jarray providers();
		jarray receivers();
		jarray reqFeatures();
		jarray requestedPermissions();
		jintArray requestedPermissionsFlags();
		jarray services();
		jstring sharedUserId();
		jint sharedUserLabel();
		jarray signatures();
		QAndroidJniObject signingInfo();
		jarray splitNames();
		jintArray splitRevisionCodes();
		jint versionCode();
		jstring versionName();
		
		PackageInfo(QAndroidJniObject obj);
		// Constructors
		PackageInfo();
		
		// Methods
		jint describeContents();
		jlong getLongVersionCode();
		void setLongVersionCode(jlong arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

