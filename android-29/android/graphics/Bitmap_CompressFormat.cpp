#include "./Bitmap_CompressFormat.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Bitmap_CompressFormat::JPEG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"JPEG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	QAndroidJniObject Bitmap_CompressFormat::PNG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"PNG",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	QAndroidJniObject Bitmap_CompressFormat::WEBP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap$CompressFormat",
			"WEBP",
			"Landroid/graphics/Bitmap$CompressFormat;"
		);
	}
	
	Bitmap_CompressFormat::Bitmap_CompressFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Bitmap_CompressFormat::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;",
			arg0
		);
	}
	QAndroidJniObject Bitmap_CompressFormat::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap$CompressFormat;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Bitmap_CompressFormat::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap$CompressFormat",
			"values",
			"()[Landroid/graphics/Bitmap$CompressFormat;"
		).object<jarray>();
	}
} // namespace android::graphics
