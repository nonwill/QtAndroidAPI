#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
namespace android::service::controls::templates
{
	class ControlTemplate;
}

namespace android::service::controls
{
	class Control : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint STATUS_DISABLED();
		static jint STATUS_ERROR();
		static jint STATUS_NOT_FOUND();
		static jint STATUS_OK();
		static jint STATUS_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Control(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Control(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::app::PendingIntent getAppIntent();
		jstring getControlId();
		android::service::controls::templates::ControlTemplate getControlTemplate();
		android::content::res::ColorStateList getCustomColor();
		android::graphics::drawable::Icon getCustomIcon();
		jint getDeviceType();
		jint getStatus();
		jstring getStatusText();
		jstring getStructure();
		jstring getSubtitle();
		jstring getTitle();
		jstring getZone();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::controls
