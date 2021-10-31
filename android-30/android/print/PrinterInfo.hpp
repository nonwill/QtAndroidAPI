#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrinterCapabilitiesInfo;
}
namespace android::print
{
	class PrinterId;
}

namespace android::print
{
	class PrinterInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint STATUS_BUSY();
		static jint STATUS_IDLE();
		static jint STATUS_UNAVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrinterInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::print::PrinterCapabilitiesInfo getCapabilities();
		jstring getDescription();
		android::print::PrinterId getId();
		jstring getName();
		jint getStatus();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

