#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::os
{
	class Parcel;
}
namespace android::text
{
	class Layout;
}

namespace android::text::style
{
	class LeadingMarginSpan_Standard : public __JniBaseClass
	{
	public:
		// Fields
		
		LeadingMarginSpan_Standard(QAndroidJniObject obj);
		// Constructors
		LeadingMarginSpan_Standard(android::os::Parcel &arg0);
		LeadingMarginSpan_Standard(jint &arg0);
		LeadingMarginSpan_Standard(jint &arg0, jint &arg1);
		LeadingMarginSpan_Standard() = default;
		
		// Methods
		jint describeContents();
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jstring arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11);
		void drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, const QString &arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11);
		jint getLeadingMargin(jboolean arg0);
		jint getSpanTypeId();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::text::style

