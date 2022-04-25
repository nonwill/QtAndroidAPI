#pragma once

#include "../../../JObject.hpp"

class JCharArray;
namespace android::graphics
{
	class Paint;
}
namespace android::graphics::text
{
	class PositionedGlyphs;
}
class JString;

namespace android::graphics::text
{
	class TextRunShaper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextRunShaper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextRunShaper(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::text::PositionedGlyphs shapeTextRun(JCharArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
		static android::graphics::text::PositionedGlyphs shapeTextRun(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::graphics::Paint arg8);
	};
} // namespace android::graphics::text
