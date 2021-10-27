#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Playlists.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Playlists::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists::ENTRY_CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Audio_Playlists::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject MediaStore_Audio_Playlists::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	MediaStore_Audio_Playlists::MediaStore_Audio_Playlists(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Audio_Playlists::MediaStore_Audio_Playlists()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Playlists",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Playlists::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Audio_Playlists::getContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::provider
