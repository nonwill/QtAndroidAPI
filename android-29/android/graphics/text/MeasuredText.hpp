#pragma once

#include "../../../JObject.hpp"

class JCharArray;
namespace android::graphics
{
	class Rect;
}

namespace android::graphics::text
{
	class MeasuredText : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MeasuredText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeasuredText(QJniObject obj);
		
		// Constructors
		
		// Methods
		void getBounds(jint arg0, jint arg1, android::graphics::Rect arg2);
		jfloat getCharWidthAt(jint arg0);
		jfloat getWidth(jint arg0, jint arg1);
	};
} // namespace android::graphics::text

