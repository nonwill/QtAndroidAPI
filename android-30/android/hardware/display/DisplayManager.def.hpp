#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::hardware::display
{
	class VirtualDisplay;
}
namespace android::hardware::display
{
	class VirtualDisplay_Callback;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Display;
}
namespace android::view
{
	class Surface;
}
class JString;

namespace android::hardware::display
{
	class DisplayManager : public JObject
	{
	public:
		// Fields
		static JString DISPLAY_CATEGORY_PRESENTATION();
		static jint VIRTUAL_DISPLAY_FLAG_AUTO_MIRROR();
		static jint VIRTUAL_DISPLAY_FLAG_OWN_CONTENT_ONLY();
		static jint VIRTUAL_DISPLAY_FLAG_PRESENTATION();
		static jint VIRTUAL_DISPLAY_FLAG_PUBLIC();
		static jint VIRTUAL_DISPLAY_FLAG_SECURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DisplayManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::hardware::display::VirtualDisplay createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5) const;
		android::hardware::display::VirtualDisplay createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, android::view::Surface arg4, jint arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7) const;
		android::view::Display getDisplay(jint arg0) const;
		JArray getDisplays() const;
		JArray getDisplays(JString arg0) const;
		void registerDisplayListener(JObject arg0, android::os::Handler arg1) const;
		void unregisterDisplayListener(JObject arg0) const;
	};
} // namespace android::hardware::display

