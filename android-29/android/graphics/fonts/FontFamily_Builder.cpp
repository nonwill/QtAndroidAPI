#include "./Font.hpp"
#include "./FontFamily.hpp"
#include "./FontFamily_Builder.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QJniObject forward
	FontFamily_Builder::FontFamily_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FontFamily_Builder::FontFamily_Builder(android::graphics::fonts::Font arg0)
		: __JniBaseClass(
			"android.graphics.fonts.FontFamily$Builder",
			"(Landroid/graphics/fonts/Font;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::fonts::FontFamily_Builder FontFamily_Builder::addFont(android::graphics::fonts::Font arg0)
	{
		return callObjectMethod(
			"addFont",
			"(Landroid/graphics/fonts/Font;)Landroid/graphics/fonts/FontFamily$Builder;",
			arg0.object()
		);
	}
	android::graphics::fonts::FontFamily FontFamily_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/fonts/FontFamily;"
		);
	}
} // namespace android::graphics::fonts

