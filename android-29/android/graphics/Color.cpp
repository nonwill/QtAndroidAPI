#include "./ColorSpace.hpp"
#include "./ColorSpace_Connector.hpp"
#include "./ColorSpace_Model.hpp"
#include "./Color.hpp"

namespace android::graphics
{
	// Fields
	jint Color::BLACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"BLACK"
		);
	}
	jint Color::BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"BLUE"
		);
	}
	jint Color::CYAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"CYAN"
		);
	}
	jint Color::DKGRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"DKGRAY"
		);
	}
	jint Color::GRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"GRAY"
		);
	}
	jint Color::GREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"GREEN"
		);
	}
	jint Color::LTGRAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"LTGRAY"
		);
	}
	jint Color::MAGENTA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"MAGENTA"
		);
	}
	jint Color::RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"RED"
		);
	}
	jint Color::TRANSPARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"TRANSPARENT"
		);
	}
	jint Color::WHITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"WHITE"
		);
	}
	jint Color::YELLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Color",
			"YELLOW"
		);
	}
	
	Color::Color(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Color::Color()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Color",
			"()V"
		);
	}
	
	// Methods
	jint Color::HSVToColor(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"([F)I",
			arg0
		);
	}
	jint Color::HSVToColor(jint arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"HSVToColor",
			"(I[F)I",
			arg0,
			arg1
		);
	}
	void Color::RGBToHSV(jint arg0, jint arg1, jint arg2, jfloatArray arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.graphics.Color",
			"RGBToHSV",
			"(III[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat Color::alpha(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"alpha",
			"(J)F",
			arg0
		);
	}
	jint Color::alpha(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"alpha",
			"(I)I",
			arg0
		);
	}
	jint Color::argb(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"argb",
			"(FFFF)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Color::argb(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"argb",
			"(IIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat Color::blue(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"blue",
			"(J)F",
			arg0
		);
	}
	jint Color::blue(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"blue",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Color::colorSpace(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"colorSpace",
			"(J)Landroid/graphics/ColorSpace;",
			arg0
		);
	}
	void Color::colorToHSV(jint arg0, jfloatArray arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.graphics.Color",
			"colorToHSV",
			"(I[F)V",
			arg0,
			arg1
		);
	}
	jlong Color::convert(jint arg0, android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(ILandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong Color::convert(jlong arg0, android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong Color::convert(jlong arg0, android::graphics::ColorSpace_Connector arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(JLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace_Connector arg4)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(FFFFLandroid/graphics/ColorSpace$Connector;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jlong Color::convert(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4, android::graphics::ColorSpace arg5)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"convert",
			"(FFFFLandroid/graphics/ColorSpace;Landroid/graphics/ColorSpace;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	jfloat Color::green(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"green",
			"(J)F",
			arg0
		);
	}
	jint Color::green(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"green",
			"(I)I",
			arg0
		);
	}
	jboolean Color::isInColorSpace(jlong arg0, android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isInColorSpace",
			"(JLandroid/graphics/ColorSpace;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Color::isSrgb(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isSrgb",
			"(J)Z",
			arg0
		);
	}
	jboolean Color::isWideGamut(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.Color",
			"isWideGamut",
			"(J)Z",
			arg0
		);
	}
	jfloat Color::luminance(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(I)F",
			arg0
		);
	}
	jfloat Color::luminance(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"luminance",
			"(J)F",
			arg0
		);
	}
	jlong Color::pack(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(I)J",
			arg0
		);
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFF)J",
			arg0,
			arg1,
			arg2
		);
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFFF)J",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jlong Color::pack(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.graphics.Color",
			"pack",
			"(FFFFLandroid/graphics/ColorSpace;)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jint Color::parseColor(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"parseColor",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Color::parseColor(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"parseColor",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jfloat Color::red(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.graphics.Color",
			"red",
			"(J)F",
			arg0
		);
	}
	jint Color::red(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"red",
			"(I)I",
			arg0
		);
	}
	jint Color::rgb(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"rgb",
			"(FFF)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Color::rgb(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"rgb",
			"(III)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Color::toArgb(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.graphics.Color",
			"toArgb",
			"(J)I",
			arg0
		);
	}
	QAndroidJniObject Color::valueOf(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(I)Landroid/graphics/Color;",
			arg0
		);
	}
	QAndroidJniObject Color::valueOf(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(J)Landroid/graphics/Color;",
			arg0
		);
	}
	QAndroidJniObject Color::valueOf(jfloatArray arg0, android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"([FLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFF)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFFF)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Color::valueOf(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::ColorSpace arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Color",
			"valueOf",
			"(FFFFLandroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	jfloat Color::alpha()
	{
		return __thiz.callMethod<jfloat>(
			"alpha",
			"()F"
		);
	}
	jfloat Color::blue()
	{
		return __thiz.callMethod<jfloat>(
			"blue",
			"()F"
		);
	}
	QAndroidJniObject Color::convert(android::graphics::ColorSpace arg0)
	{
		return __thiz.callObjectMethod(
			"convert",
			"(Landroid/graphics/ColorSpace;)Landroid/graphics/Color;",
			arg0.__jniObject().object()
		);
	}
	jboolean Color::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Color::getColorSpace()
	{
		return __thiz.callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jfloat Color::getComponent(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getComponent",
			"(I)F",
			arg0
		);
	}
	jint Color::getComponentCount()
	{
		return __thiz.callMethod<jint>(
			"getComponentCount",
			"()I"
		);
	}
	jfloatArray Color::getComponents()
	{
		return __thiz.callObjectMethod(
			"getComponents",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray Color::getComponents(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getComponents",
			"([F)[F",
			arg0
		).object<jfloatArray>();
	}
	QAndroidJniObject Color::getModel()
	{
		return __thiz.callObjectMethod(
			"getModel",
			"()Landroid/graphics/ColorSpace$Model;"
		);
	}
	jfloat Color::green()
	{
		return __thiz.callMethod<jfloat>(
			"green",
			"()F"
		);
	}
	jint Color::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Color::isSrgb()
	{
		return __thiz.callMethod<jboolean>(
			"isSrgb",
			"()Z"
		);
	}
	jboolean Color::isWideGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideGamut",
			"()Z"
		);
	}
	jfloat Color::luminance()
	{
		return __thiz.callMethod<jfloat>(
			"luminance",
			"()F"
		);
	}
	jlong Color::pack()
	{
		return __thiz.callMethod<jlong>(
			"pack",
			"()J"
		);
	}
	jfloat Color::red()
	{
		return __thiz.callMethod<jfloat>(
			"red",
			"()F"
		);
	}
	jint Color::toArgb()
	{
		return __thiz.callMethod<jint>(
			"toArgb",
			"()I"
		);
	}
	jstring Color::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::graphics
