#include "../graphics/Canvas.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Path.hpp"
#include "./BoringLayout_Metrics.hpp"
#include "./Layout_Alignment.hpp"
#include "./Layout_Directions.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "./BoringLayout.hpp"

namespace android::text
{
	// Fields
	
	BoringLayout::BoringLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BoringLayout::BoringLayout(jstring &arg0, android::text::TextPaint &arg1, jint &arg2, android::text::Layout_Alignment &arg3, jfloat &arg4, jfloat &arg5, android::text::BoringLayout_Metrics &arg6, jboolean &arg7)
	{
		__thiz = QAndroidJniObject(
			"android.text.BoringLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	BoringLayout::BoringLayout(const QString &arg0, android::text::TextPaint &arg1, jint &arg2, android::text::Layout_Alignment &arg3, jfloat &arg4, jfloat &arg5, android::text::BoringLayout_Metrics &arg6, jboolean &arg7)
	{
		__thiz = QAndroidJniObject(
			"android.text.BoringLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	BoringLayout::BoringLayout(jstring &arg0, android::text::TextPaint &arg1, jint &arg2, android::text::Layout_Alignment &arg3, jfloat &arg4, jfloat &arg5, android::text::BoringLayout_Metrics &arg6, jboolean &arg7, android::text::TextUtils_TruncateAt &arg8, jint &arg9)
	{
		__thiz = QAndroidJniObject(
			"android.text.BoringLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
	BoringLayout::BoringLayout(const QString &arg0, android::text::TextPaint &arg1, jint &arg2, android::text::Layout_Alignment &arg3, jfloat &arg4, jfloat &arg5, android::text::BoringLayout_Metrics &arg6, jboolean &arg7, android::text::TextUtils_TruncateAt &arg8, jint &arg9)
	{
		__thiz = QAndroidJniObject(
			"android.text.BoringLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
	
	// Methods
	QAndroidJniObject BoringLayout::isBoring(jstring arg0, android::text::TextPaint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"isBoring",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)Landroid/text/BoringLayout$Metrics;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BoringLayout::isBoring(const QString &arg0, android::text::TextPaint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"isBoring",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)Landroid/text/BoringLayout$Metrics;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BoringLayout::isBoring(jstring arg0, android::text::TextPaint arg1, android::text::BoringLayout_Metrics arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"isBoring",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;Landroid/text/BoringLayout$Metrics;)Landroid/text/BoringLayout$Metrics;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BoringLayout::isBoring(const QString &arg0, android::text::TextPaint arg1, android::text::BoringLayout_Metrics arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"isBoring",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;Landroid/text/BoringLayout$Metrics;)Landroid/text/BoringLayout$Metrics;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject BoringLayout::make(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"make",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	QAndroidJniObject BoringLayout::make(const QString &arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"make",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	QAndroidJniObject BoringLayout::make(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"make",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
	QAndroidJniObject BoringLayout::make(const QString &arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BoringLayout",
			"make",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
	void BoringLayout::draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void BoringLayout::ellipsized(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"ellipsized",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint BoringLayout::getBottomPadding()
	{
		return __thiz.callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint BoringLayout::getEllipsisCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getEllipsisStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getEllipsizedWidth()
	{
		return __thiz.callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	jint BoringLayout::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jboolean BoringLayout::getLineContainsTab(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	jint BoringLayout::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint BoringLayout::getLineDescent(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject BoringLayout::getLineDirections(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	jfloat BoringLayout::getLineMax(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineMax",
			"(I)F",
			arg0
		);
	}
	jint BoringLayout::getLineStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getLineTop(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	jfloat BoringLayout::getLineWidth(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	jint BoringLayout::getParagraphDirection(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getTopPadding()
	{
		return __thiz.callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	QAndroidJniObject BoringLayout::replaceOrMake(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7)
	{
		return __thiz.callObjectMethod(
			"replaceOrMake",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	QAndroidJniObject BoringLayout::replaceOrMake(const QString &arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7)
	{
		return __thiz.callObjectMethod(
			"replaceOrMake",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7
		);
	}
	QAndroidJniObject BoringLayout::replaceOrMake(jstring arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
	{
		return __thiz.callObjectMethod(
			"replaceOrMake",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
	QAndroidJniObject BoringLayout::replaceOrMake(const QString &arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
	{
		return __thiz.callObjectMethod(
			"replaceOrMake",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8.__jniObject().object(),
			arg9
		);
	}
} // namespace android::text
