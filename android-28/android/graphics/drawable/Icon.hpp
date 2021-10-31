#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Message;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics::drawable
{
	class Icon : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint TYPE_ADAPTIVE_BITMAP();
		static jint TYPE_BITMAP();
		static jint TYPE_DATA();
		static jint TYPE_RESOURCE();
		static jint TYPE_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Icon(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Icon(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::drawable::Icon createWithAdaptiveBitmap(android::graphics::Bitmap arg0);
		static android::graphics::drawable::Icon createWithBitmap(android::graphics::Bitmap arg0);
		static android::graphics::drawable::Icon createWithContentUri(android::net::Uri arg0);
		static android::graphics::drawable::Icon createWithContentUri(jstring arg0);
		static android::graphics::drawable::Icon createWithData(jbyteArray arg0, jint arg1, jint arg2);
		static android::graphics::drawable::Icon createWithFilePath(jstring arg0);
		static android::graphics::drawable::Icon createWithResource(android::content::Context arg0, jint arg1);
		static android::graphics::drawable::Icon createWithResource(jstring arg0, jint arg1);
		jint describeContents();
		jint getResId();
		jstring getResPackage();
		jint getType();
		android::net::Uri getUri();
		android::graphics::drawable::Drawable loadDrawable(android::content::Context arg0);
		void loadDrawableAsync(android::content::Context arg0, android::os::Message arg1);
		void loadDrawableAsync(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2);
		android::graphics::drawable::Icon setTint(jint arg0);
		android::graphics::drawable::Icon setTintList(android::content::res::ColorStateList arg0);
		android::graphics::drawable::Icon setTintMode(android::graphics::PorterDuff_Mode arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics::drawable
