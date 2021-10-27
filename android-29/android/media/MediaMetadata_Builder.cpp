#include "../graphics/Bitmap.hpp"
#include "./MediaMetadata.hpp"
#include "./Rating.hpp"
#include "./MediaMetadata_Builder.hpp"

namespace android::media
{
	// Fields
	
	MediaMetadata_Builder::MediaMetadata_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaMetadata_Builder::MediaMetadata_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadata$Builder",
			"()V"
		);
	}
	MediaMetadata_Builder::MediaMetadata_Builder(android::media::MediaMetadata &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaMetadata$Builder",
			"(Landroid/media/MediaMetadata;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MediaMetadata_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/MediaMetadata;"
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putBitmap(jstring arg0, android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"putBitmap",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putBitmap(const QString &arg0, android::graphics::Bitmap arg1)
	{
		return __thiz.callObjectMethod(
			"putBitmap",
			"(Ljava/lang/String;Landroid/graphics/Bitmap;)Landroid/media/MediaMetadata$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putLong(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(Ljava/lang/String;J)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putLong(const QString &arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(Ljava/lang/String;J)Landroid/media/MediaMetadata$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putRating(jstring arg0, android::media::Rating arg1)
	{
		return __thiz.callObjectMethod(
			"putRating",
			"(Ljava/lang/String;Landroid/media/Rating;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putRating(const QString &arg0, android::media::Rating arg1)
	{
		return __thiz.callObjectMethod(
			"putRating",
			"(Ljava/lang/String;Landroid/media/Rating;)Landroid/media/MediaMetadata$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putString(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaMetadata$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putText(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putText",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/media/MediaMetadata$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaMetadata_Builder::putText(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"putText",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/media/MediaMetadata$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace android::media
