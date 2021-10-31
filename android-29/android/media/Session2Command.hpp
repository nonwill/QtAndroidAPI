#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class Session2Command : public __JniBaseClass
	{
	public:
		// Fields
		static jint COMMAND_CODE_CUSTOM();
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Session2Command(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Session2Command(QAndroidJniObject obj);
		
		// Constructors
		Session2Command(jint arg0);
		Session2Command(jstring arg0, android::os::Bundle arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCommandCode();
		jstring getCustomAction();
		android::os::Bundle getCustomExtras();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

