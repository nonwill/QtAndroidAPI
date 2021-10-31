#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class ActivityManager_TaskDescription : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_TaskDescription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_TaskDescription(QJniObject obj);
		
		// Constructors
		ActivityManager_TaskDescription();
		ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0);
		ActivityManager_TaskDescription(jstring arg0);
		ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1);
		ActivityManager_TaskDescription(jstring arg0, jint arg1);
		ActivityManager_TaskDescription(jstring arg0, android::graphics::Bitmap arg1, jint arg2);
		ActivityManager_TaskDescription(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		android::graphics::Bitmap getIcon();
		jstring getLabel();
		jint getPrimaryColor();
		void readFromParcel(android::os::Parcel arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

