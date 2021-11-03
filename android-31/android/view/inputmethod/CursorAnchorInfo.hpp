#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class RectF;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::view::inputmethod
{
	class CursorAnchorInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_HAS_INVISIBLE_REGION();
		static jint FLAG_HAS_VISIBLE_REGION();
		static jint FLAG_IS_RTL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorAnchorInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CursorAnchorInfo(QAndroidJniObject obj);
		
		// Constructors
		CursorAnchorInfo(android::os::Parcel arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::graphics::RectF getCharacterBounds(jint arg0);
		jint getCharacterBoundsFlags(jint arg0);
		JString getComposingText();
		jint getComposingTextStart();
		jfloat getInsertionMarkerBaseline();
		jfloat getInsertionMarkerBottom();
		jint getInsertionMarkerFlags();
		jfloat getInsertionMarkerHorizontal();
		jfloat getInsertionMarkerTop();
		android::graphics::Matrix getMatrix();
		jint getSelectionEnd();
		jint getSelectionStart();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

