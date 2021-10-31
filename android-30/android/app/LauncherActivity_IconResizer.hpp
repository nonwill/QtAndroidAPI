#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class LauncherActivity;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::app
{
	class LauncherActivity_IconResizer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherActivity_IconResizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivity_IconResizer(QJniObject obj);
		
		// Constructors
		LauncherActivity_IconResizer(android::app::LauncherActivity arg0);
		
		// Methods
		android::graphics::drawable::Drawable createIconThumbnail(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::app

