#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class RemoteAction : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteAction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteAction(QAndroidJniObject obj);
		
		// Constructors
		RemoteAction(android::graphics::drawable::Icon arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3);
		
		// Methods
		android::app::RemoteAction clone();
		jint describeContents();
		void dump(jstring arg0, java::io::PrintWriter arg1);
		android::app::PendingIntent getActionIntent();
		jstring getContentDescription();
		android::graphics::drawable::Icon getIcon();
		jstring getTitle();
		jboolean isEnabled();
		void setEnabled(jboolean arg0);
		void setShouldShowIcon(jboolean arg0);
		jboolean shouldShowIcon();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app
