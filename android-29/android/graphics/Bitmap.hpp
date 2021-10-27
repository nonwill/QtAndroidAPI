#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap_CompressFormat;
}
namespace android::graphics
{
	class Bitmap_Config;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Color;
}
namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class Matrix;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Picture;
}
namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class DisplayMetrics;
}
namespace java::io
{
	class OutputStream;
}
namespace java::nio
{
	class Buffer;
}

namespace android::graphics
{
	class Bitmap : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DENSITY_NONE();
		
		Bitmap(QAndroidJniObject obj);
		// Constructors
		Bitmap() = default;
		
		// Methods
		static QAndroidJniObject createBitmap(android::graphics::Bitmap arg0);
		static QAndroidJniObject createBitmap(android::graphics::Picture arg0);
		static QAndroidJniObject createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2);
		static QAndroidJniObject createBitmap(jintArray arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3);
		static QAndroidJniObject createBitmap(android::graphics::Picture arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3);
		static QAndroidJniObject createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3);
		static QAndroidJniObject createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3);
		static QAndroidJniObject createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject createBitmap(android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, android::graphics::Bitmap_Config arg4);
		static QAndroidJniObject createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4);
		static QAndroidJniObject createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3, android::graphics::ColorSpace arg4);
		static QAndroidJniObject createBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Bitmap_Config arg5);
		static QAndroidJniObject createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4, android::graphics::ColorSpace arg5);
		static QAndroidJniObject createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Matrix arg5, jboolean arg6);
		static QAndroidJniObject createBitmap(android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::graphics::Bitmap_Config arg6);
		static QAndroidJniObject createScaledBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jboolean arg3);
		static QAndroidJniObject wrapHardwareBuffer(android::hardware::HardwareBuffer arg0, android::graphics::ColorSpace arg1);
		jboolean compress(android::graphics::Bitmap_CompressFormat arg0, jint arg1, java::io::OutputStream arg2);
		QAndroidJniObject copy(android::graphics::Bitmap_Config arg0, jboolean arg1);
		void copyPixelsFromBuffer(java::nio::Buffer arg0);
		void copyPixelsToBuffer(java::nio::Buffer arg0);
		jint describeContents();
		void eraseColor(jint arg0);
		void eraseColor(jlong arg0);
		QAndroidJniObject extractAlpha();
		QAndroidJniObject extractAlpha(android::graphics::Paint arg0, jintArray arg1);
		jint getAllocationByteCount();
		jint getByteCount();
		QAndroidJniObject getColor(jint arg0, jint arg1);
		QAndroidJniObject getColorSpace();
		QAndroidJniObject getConfig();
		jint getDensity();
		jint getGenerationId();
		jint getHeight();
		jbyteArray getNinePatchChunk();
		jint getPixel(jint arg0, jint arg1);
		void getPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		jint getRowBytes();
		jint getScaledHeight(android::graphics::Canvas arg0);
		jint getScaledHeight(android::util::DisplayMetrics arg0);
		jint getScaledHeight(jint arg0);
		jint getScaledWidth(android::graphics::Canvas arg0);
		jint getScaledWidth(android::util::DisplayMetrics arg0);
		jint getScaledWidth(jint arg0);
		jint getWidth();
		jboolean hasAlpha();
		jboolean hasMipMap();
		jboolean isMutable();
		jboolean isPremultiplied();
		jboolean isRecycled();
		void prepareToDraw();
		void reconfigure(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2);
		void recycle();
		jboolean sameAs(android::graphics::Bitmap arg0);
		void setColorSpace(android::graphics::ColorSpace arg0);
		void setConfig(android::graphics::Bitmap_Config arg0);
		void setDensity(jint arg0);
		void setHasAlpha(jboolean arg0);
		void setHasMipMap(jboolean arg0);
		void setHeight(jint arg0);
		void setPixel(jint arg0, jint arg1, jint arg2);
		void setPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		void setPremultiplied(jboolean arg0);
		void setWidth(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

