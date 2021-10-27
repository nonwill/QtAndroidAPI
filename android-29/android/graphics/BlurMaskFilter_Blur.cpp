#include "./BlurMaskFilter_Blur.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject BlurMaskFilter_Blur::INNER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"INNER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"NORMAL",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::OUTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"OUTER",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::SOLID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.BlurMaskFilter$Blur",
			"SOLID",
			"Landroid/graphics/BlurMaskFilter$Blur;"
		);
	}
	
	BlurMaskFilter_Blur::BlurMaskFilter_Blur(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject BlurMaskFilter_Blur::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			arg0
		);
	}
	QAndroidJniObject BlurMaskFilter_Blur::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/BlurMaskFilter$Blur;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray BlurMaskFilter_Blur::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BlurMaskFilter$Blur",
			"values",
			"()[Landroid/graphics/BlurMaskFilter$Blur;"
		).object<jarray>();
	}
} // namespace android::graphics
