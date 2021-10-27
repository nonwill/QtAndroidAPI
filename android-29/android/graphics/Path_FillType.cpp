#include "./Path_FillType.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Path_FillType::EVEN_ODD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"EVEN_ODD",
			"Landroid/graphics/Path$FillType;"
		);
	}
	QAndroidJniObject Path_FillType::INVERSE_EVEN_ODD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_EVEN_ODD",
			"Landroid/graphics/Path$FillType;"
		);
	}
	QAndroidJniObject Path_FillType::INVERSE_WINDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"INVERSE_WINDING",
			"Landroid/graphics/Path$FillType;"
		);
	}
	QAndroidJniObject Path_FillType::WINDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Path$FillType",
			"WINDING",
			"Landroid/graphics/Path$FillType;"
		);
	}
	
	Path_FillType::Path_FillType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Path_FillType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$FillType;",
			arg0
		);
	}
	QAndroidJniObject Path_FillType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Path$FillType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Path_FillType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Path$FillType",
			"values",
			"()[Landroid/graphics/Path$FillType;"
		).object<jarray>();
	}
} // namespace android::graphics
