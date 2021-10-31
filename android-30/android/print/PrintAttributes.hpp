#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrintAttributes_Margins;
}
namespace android::print
{
	class PrintAttributes_MediaSize;
}
namespace android::print
{
	class PrintAttributes_Resolution;
}

namespace android::print
{
	class PrintAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static jint COLOR_MODE_COLOR();
		static jint COLOR_MODE_MONOCHROME();
		static __JniBaseClass CREATOR();
		static jint DUPLEX_MODE_LONG_EDGE();
		static jint DUPLEX_MODE_NONE();
		static jint DUPLEX_MODE_SHORT_EDGE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintAttributes(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getColorMode();
		jint getDuplexMode();
		android::print::PrintAttributes_MediaSize getMediaSize();
		android::print::PrintAttributes_Margins getMinMargins();
		android::print::PrintAttributes_Resolution getResolution();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

