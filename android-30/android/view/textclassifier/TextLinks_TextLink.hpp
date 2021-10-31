#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextLinks_TextLink : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextLinks_TextLink(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextLinks_TextLink(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(jstring arg0);
		jint getEnd();
		jstring getEntity(jint arg0);
		jint getEntityCount();
		android::os::Bundle getExtras();
		jint getStart();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier
