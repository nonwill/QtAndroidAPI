#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CharacterStyle.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class TextPaint;
}

namespace android::text::style
{
	class StrikethroughSpan : public android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		StrikethroughSpan(QAndroidJniObject obj);
		// Constructors
		StrikethroughSpan();
		StrikethroughSpan(android::os::Parcel &arg0);
		
		// Methods
		jint describeContents();
		jint getSpanTypeId();
		void updateDrawState(android::text::TextPaint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

