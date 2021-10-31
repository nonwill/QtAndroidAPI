#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BitmapFactory_Options;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Images_Thumbnails : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DATA();
		static jstring DEFAULT_SORT_ORDER();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static jint FULL_SCREEN_KIND();
		static jstring HEIGHT();
		static jstring IMAGE_ID();
		static android::net::Uri INTERNAL_CONTENT_URI();
		static jstring KIND();
		static jint MICRO_KIND();
		static jint MINI_KIND();
		static jstring THUMB_DATA();
		static jstring WIDTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Images_Thumbnails(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Images_Thumbnails(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Images_Thumbnails();
		
		// Methods
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1);
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static android::net::Uri getContentUri(jstring arg0);
		static android::graphics::Bitmap getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static android::graphics::Bitmap getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4);
		static __JniBaseClass query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2);
		static __JniBaseClass queryMiniThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, jarray arg3);
		static __JniBaseClass queryMiniThumbnails(android::content::ContentResolver arg0, android::net::Uri arg1, jint arg2, jarray arg3);
	};
} // namespace android::provider
