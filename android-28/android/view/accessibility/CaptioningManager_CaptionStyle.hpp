#pragma once

#include "../../../JObject.hpp"

namespace android::graphics
{
	class Typeface;
}
class JString;

namespace android::view::accessibility
{
	class CaptioningManager_CaptionStyle : public JObject
	{
	public:
		// Fields
		static jint EDGE_TYPE_DEPRESSED();
		static jint EDGE_TYPE_DROP_SHADOW();
		static jint EDGE_TYPE_NONE();
		static jint EDGE_TYPE_OUTLINE();
		static jint EDGE_TYPE_RAISED();
		static jint EDGE_TYPE_UNSPECIFIED();
		jint backgroundColor();
		jint edgeColor();
		jint edgeType();
		jint foregroundColor();
		jint windowColor();
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptioningManager_CaptionStyle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptioningManager_CaptionStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::Typeface getTypeface();
		jboolean hasBackgroundColor();
		jboolean hasEdgeColor();
		jboolean hasEdgeType();
		jboolean hasForegroundColor();
		jboolean hasWindowColor();
	};
} // namespace android::view::accessibility

