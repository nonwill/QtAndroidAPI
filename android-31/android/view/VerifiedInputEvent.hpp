#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class VerifiedInputEvent : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VerifiedInputEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedInputEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getDeviceId();
		jint getDisplayId();
		jlong getEventTimeNanos();
		jint getSource();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view
