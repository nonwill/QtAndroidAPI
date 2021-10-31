#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintJobId;
}
namespace android::print
{
	class PrinterId;
}

namespace android::print
{
	class PrintJobInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint STATE_BLOCKED();
		static jint STATE_CANCELED();
		static jint STATE_COMPLETED();
		static jint STATE_CREATED();
		static jint STATE_FAILED();
		static jint STATE_QUEUED();
		static jint STATE_STARTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintJobInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintJobInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getAdvancedIntOption(jstring arg0);
		jstring getAdvancedStringOption(jstring arg0);
		android::print::PrintAttributes getAttributes();
		jint getCopies();
		jlong getCreationTime();
		android::print::PrintJobId getId();
		jstring getLabel();
		jarray getPages();
		android::print::PrinterId getPrinterId();
		jint getState();
		jboolean hasAdvancedOption(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

