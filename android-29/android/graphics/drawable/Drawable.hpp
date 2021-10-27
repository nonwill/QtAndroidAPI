#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::graphics
{
	class BitmapFactory_Options;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class ColorFilter;
}
namespace android::graphics
{
	class Insets;
}
namespace android::graphics
{
	class Outline;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}
namespace android::graphics::drawable
{
	class Drawable_ConstantState;
}
namespace android::util
{
	class TypedValue;
}
namespace java::io
{
	class InputStream;
}

namespace android::graphics::drawable
{
	class Drawable : public __JniBaseClass
	{
	public:
		// Fields
		
		Drawable(QAndroidJniObject obj);
		// Constructors
		Drawable();
		
		// Methods
		static QAndroidJniObject createFromPath(jstring arg0);
		static QAndroidJniObject createFromPath(const QString &arg0);
		static QAndroidJniObject createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, jstring arg3);
		static QAndroidJniObject createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, const QString &arg3);
		static QAndroidJniObject createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, jstring arg3, android::graphics::BitmapFactory_Options arg4);
		static QAndroidJniObject createFromResourceStream(android::content::res::Resources arg0, android::util::TypedValue arg1, java::io::InputStream arg2, const QString &arg3, android::graphics::BitmapFactory_Options arg4);
		static QAndroidJniObject createFromStream(java::io::InputStream arg0, jstring arg1);
		static QAndroidJniObject createFromStream(java::io::InputStream arg0, const QString &arg1);
		static QAndroidJniObject createFromXml(android::content::res::Resources arg0, __JniBaseClass arg1);
		static QAndroidJniObject createFromXml(android::content::res::Resources arg0, __JniBaseClass arg1, android::content::res::Resources_Theme arg2);
		static QAndroidJniObject createFromXmlInner(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject createFromXmlInner(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		static jint resolveOpacity(jint arg0, jint arg1);
		void applyTheme(android::content::res::Resources_Theme arg0);
		jboolean canApplyTheme();
		void clearColorFilter();
		QAndroidJniObject copyBounds();
		void copyBounds(android::graphics::Rect arg0);
		void draw(android::graphics::Canvas arg0);
		jint getAlpha();
		QAndroidJniObject getBounds();
		QAndroidJniObject getCallback();
		jint getChangingConfigurations();
		QAndroidJniObject getColorFilter();
		QAndroidJniObject getConstantState();
		QAndroidJniObject getCurrent();
		QAndroidJniObject getDirtyBounds();
		void getHotspotBounds(android::graphics::Rect arg0);
		jint getIntrinsicHeight();
		jint getIntrinsicWidth();
		jint getLayoutDirection();
		jint getLevel();
		jint getMinimumHeight();
		jint getMinimumWidth();
		jint getOpacity();
		QAndroidJniObject getOpticalInsets();
		void getOutline(android::graphics::Outline arg0);
		jboolean getPadding(android::graphics::Rect arg0);
		jintArray getState();
		QAndroidJniObject getTransparentRegion();
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3);
		void invalidateSelf();
		jboolean isAutoMirrored();
		jboolean isFilterBitmap();
		jboolean isProjected();
		jboolean isStateful();
		jboolean isVisible();
		void jumpToCurrentState();
		QAndroidJniObject mutate();
		jboolean onLayoutDirectionChanged(jint arg0);
		void scheduleSelf(__JniBaseClass arg0, jlong arg1);
		void setAlpha(jint arg0);
		void setAutoMirrored(jboolean arg0);
		void setBounds(android::graphics::Rect arg0);
		void setBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		void setCallback(__JniBaseClass arg0);
		void setChangingConfigurations(jint arg0);
		void setColorFilter(android::graphics::ColorFilter arg0);
		void setColorFilter(jint arg0, android::graphics::PorterDuff_Mode arg1);
		void setDither(jboolean arg0);
		void setFilterBitmap(jboolean arg0);
		void setHotspot(jfloat arg0, jfloat arg1);
		void setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean setLayoutDirection(jint arg0);
		jboolean setLevel(jint arg0);
		jboolean setState(jintArray arg0);
		void setTint(jint arg0);
		void setTintBlendMode(android::graphics::BlendMode arg0);
		void setTintList(android::content::res::ColorStateList arg0);
		void setTintMode(android::graphics::PorterDuff_Mode arg0);
		jboolean setVisible(jboolean arg0, jboolean arg1);
		void unscheduleSelf(__JniBaseClass arg0);
	};
} // namespace android::graphics::drawable

