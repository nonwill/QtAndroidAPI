#pragma once

#include "./ViewSwitcher.def.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::widget
{
	class ImageSwitcher : public android::widget::ViewSwitcher
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageSwitcher(const char *className, const char *sig, Ts...agv) : android::widget::ViewSwitcher(className, sig, std::forward<Ts>(agv)...) {}
		ImageSwitcher(QAndroidJniObject obj) : android::widget::ViewSwitcher(obj) {}
		
		// Constructors
		ImageSwitcher(android::content::Context arg0);
		ImageSwitcher(android::content::Context arg0, JObject arg1);
		
		// Methods
		JString getAccessibilityClassName() const;
		void setImageDrawable(android::graphics::drawable::Drawable arg0) const;
		void setImageResource(jint arg0) const;
		void setImageURI(android::net::Uri arg0) const;
	};
} // namespace android::widget

