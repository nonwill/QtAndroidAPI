#include "./Canvas_EdgeType.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Canvas_EdgeType::AA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"AA",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	QAndroidJniObject Canvas_EdgeType::BW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Canvas$EdgeType",
			"BW",
			"Landroid/graphics/Canvas$EdgeType;"
		);
	}
	
	Canvas_EdgeType::Canvas_EdgeType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Canvas_EdgeType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;",
			arg0
		);
	}
	QAndroidJniObject Canvas_EdgeType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Canvas$EdgeType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Canvas_EdgeType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Canvas$EdgeType",
			"values",
			"()[Landroid/graphics/Canvas$EdgeType;"
		).object<jarray>();
	}
} // namespace android::graphics
