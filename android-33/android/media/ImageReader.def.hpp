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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageReader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageReader(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::ImageReader newInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		static android::media::ImageReader newInstance(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		android::media::Image acquireLatestImage() const;
		android::media::Image acquireNextImage() const;
		void close() const;
		void discardFreeBuffers() const;
		jint getDataSpace() const;
		jint getHardwareBufferFormat() const;
		jint getHeight() const;
		jint getImageFormat() const;
		jint getMaxImages() const;
		android::view::Surface getSurface() const;
		jlong getUsage() const;
		jint getWidth() const;
		void setOnImageAvailableListener(JObject arg0, android::os::Handler arg1) const;
	};
} // namespace android::media

