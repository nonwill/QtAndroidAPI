#include "./Font.hpp"
#include "./FontFamily.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QAndroidJniObject forward
	FontFamily::FontFamily(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::fonts::Font FontFamily::getFont(jint arg0)
	{
		return callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/fonts/Font;",
			arg0
		);
	}
	jint FontFamily::getSize()
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::graphics::fonts
