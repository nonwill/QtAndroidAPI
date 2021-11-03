#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class Image;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}

namespace android::media
{
	class ImageReader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ImageReader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageReader(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::ImageReader newInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		static android::media::ImageReader newInstance(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		android::media::Image acquireLatestImage();
		android::media::Image acquireNextImage();
		void close();
		void discardFreeBuffers();
		jint getHeight();
		jint getImageFormat();
		jint getMaxImages();
		android::view::Surface getSurface();
		jint getWidth();
		void setOnImageAvailableListener(JObject arg0, android::os::Handler arg1);
	};
} // namespace android::media

