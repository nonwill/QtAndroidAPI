#pragma once

#include "../../__JniBaseClass.hpp"
#include "./View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Region;
}
namespace android::view
{
	class SurfaceControl;
}

namespace android::view
{
	class SurfaceView : public android::view::View
	{
	public:
		// Fields
		
		SurfaceView(QAndroidJniObject obj);
		// Constructors
		SurfaceView(android::content::Context &arg0);
		SurfaceView(android::content::Context &arg0, __JniBaseClass &arg1);
		SurfaceView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2);
		SurfaceView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3);
		SurfaceView() = default;
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jboolean gatherTransparentRegion(android::graphics::Region arg0);
		QAndroidJniObject getHolder();
		QAndroidJniObject getSurfaceControl();
		void setSecure(jboolean arg0);
		void setVisibility(jint arg0);
		void setZOrderMediaOverlay(jboolean arg0);
		void setZOrderOnTop(jboolean arg0);
	};
} // namespace android::view

