#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageInstaller_SessionParams : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint MODE_FULL_INSTALL();
		static jint MODE_INHERIT_EXISTING();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionParams(QJniObject obj);
		
		// Constructors
		PackageInstaller_SessionParams(jint arg0);
		
		// Methods
		jint describeContents();
		void setAppIcon(android::graphics::Bitmap arg0);
		void setAppLabel(jstring arg0);
		void setAppPackageName(jstring arg0);
		void setInstallLocation(jint arg0);
		void setInstallReason(jint arg0);
		void setOriginatingUid(jint arg0);
		void setOriginatingUri(android::net::Uri arg0);
		void setReferrerUri(android::net::Uri arg0);
		void setSize(jlong arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

