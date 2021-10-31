#include "../net/Uri.hpp"
#include "./MediaStore_Files.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	MediaStore_Files::MediaStore_Files(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Files::MediaStore_Files()
		: __JniBaseClass(
			"android.provider.MediaStore$Files",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Files::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri MediaStore_Files::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace android::provider

