#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::android::text
{
	class TextUtils : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAP_MODE_CHARACTERS();
		static jint CAP_MODE_SENTENCES();
		static jint CAP_MODE_WORDS();
		static QAndroidJniObject CHAR_SEQUENCE_CREATOR();
		static jint SAFE_STRING_FLAG_FIRST_LINE();
		static jint SAFE_STRING_FLAG_SINGLE_LINE();
		static jint SAFE_STRING_FLAG_TRIM();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring commaEllipsize(jstring arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, jstring arg3, jstring arg4);
		static jstring commaEllipsize(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, const QString &arg3, const QString &arg4);
		static jstring concat(jarray arg0);
		static void copySpansFrom(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jclass arg3, __jni_impl::__JniBaseClass arg4, jint arg5);
		static void dumpSpans(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		static void dumpSpans(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		static jstring ellipsize(jstring arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3);
		static jstring ellipsize(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3);
		static jstring ellipsize(jstring arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5);
		static jstring ellipsize(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5);
		static jboolean equals(jstring arg0, jstring arg1);
		static jboolean equals(const QString &arg0, const QString &arg1);
		static jstring expandTemplate(jstring arg0, jarray arg1);
		static jstring expandTemplate(const QString &arg0, jarray arg1);
		static jint getCapsMode(jstring arg0, jint arg1, jint arg2);
		static jint getCapsMode(const QString &arg0, jint arg1, jint arg2);
		static void getChars(jstring arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4);
		static void getChars(const QString &arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4);
		static jint getLayoutDirectionFromLocale(__jni_impl::java::util::Locale arg0);
		static jint getOffsetAfter(jstring arg0, jint arg1);
		static jint getOffsetAfter(const QString &arg0, jint arg1);
		static jint getOffsetBefore(jstring arg0, jint arg1);
		static jint getOffsetBefore(const QString &arg0, jint arg1);
		static jstring getReverse(jstring arg0, jint arg1, jint arg2);
		static jstring getReverse(const QString &arg0, jint arg1, jint arg2);
		static jint getTrimmedLength(jstring arg0);
		static jint getTrimmedLength(const QString &arg0);
		static jstring htmlEncode(jstring arg0);
		static jstring htmlEncode(const QString &arg0);
		static jint indexOf(jstring arg0, jchar arg1);
		static jint indexOf(const QString &arg0, jchar arg1);
		static jint indexOf(jstring arg0, jstring arg1);
		static jint indexOf(const QString &arg0, const QString &arg1);
		static jint indexOf(jstring arg0, jchar arg1, jint arg2);
		static jint indexOf(const QString &arg0, jchar arg1, jint arg2);
		static jint indexOf(jstring arg0, jstring arg1, jint arg2);
		static jint indexOf(const QString &arg0, const QString &arg1, jint arg2);
		static jint indexOf(jstring arg0, jchar arg1, jint arg2, jint arg3);
		static jint indexOf(const QString &arg0, jchar arg1, jint arg2, jint arg3);
		static jint indexOf(jstring arg0, jstring arg1, jint arg2, jint arg3);
		static jint indexOf(const QString &arg0, const QString &arg1, jint arg2, jint arg3);
		static jboolean isDigitsOnly(jstring arg0);
		static jboolean isDigitsOnly(const QString &arg0);
		static jboolean isEmpty(jstring arg0);
		static jboolean isEmpty(const QString &arg0);
		static jboolean isGraphic(jchar arg0);
		static jboolean isGraphic(jstring arg0);
		static jboolean isGraphic(const QString &arg0);
		static jstring join(jstring arg0, jobjectArray arg1);
		static jstring join(const QString &arg0, jobjectArray arg1);
		static jstring join(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static jstring join(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		static jint lastIndexOf(jstring arg0, jchar arg1);
		static jint lastIndexOf(const QString &arg0, jchar arg1);
		static jint lastIndexOf(jstring arg0, jchar arg1, jint arg2);
		static jint lastIndexOf(const QString &arg0, jchar arg1, jint arg2);
		static jint lastIndexOf(jstring arg0, jchar arg1, jint arg2, jint arg3);
		static jint lastIndexOf(const QString &arg0, jchar arg1, jint arg2, jint arg3);
		static jstring listEllipsize(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, __jni_impl::android::text::TextPaint arg3, jfloat arg4, jint arg5);
		static jstring listEllipsize(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2, __jni_impl::android::text::TextPaint arg3, jfloat arg4, jint arg5);
		static jstring makeSafeForPresentation(jstring arg0, jint arg1, jfloat arg2, jint arg3);
		static jstring makeSafeForPresentation(const QString &arg0, jint arg1, jfloat arg2, jint arg3);
		static jboolean regionMatches(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4);
		static jboolean regionMatches(const QString &arg0, jint arg1, const QString &arg2, jint arg3, jint arg4);
		static jstring replace(jstring arg0, jarray arg1, jarray arg2);
		static jstring replace(const QString &arg0, jarray arg1, jarray arg2);
		static jarray split(jstring arg0, jstring arg1);
		static jarray split(const QString &arg0, const QString &arg1);
		static jarray split(jstring arg0, __jni_impl::java::util::regex::Pattern arg1);
		static jarray split(const QString &arg0, __jni_impl::java::util::regex::Pattern arg1);
		static jstring stringOrSpannedString(jstring arg0);
		static jstring stringOrSpannedString(const QString &arg0);
		static jstring substring(jstring arg0, jint arg1, jint arg2);
		static jstring substring(const QString &arg0, jint arg1, jint arg2);
		static void writeToParcel(jstring arg0, __jni_impl::android::os::Parcel arg1, jint arg2);
		static void writeToParcel(const QString &arg0, __jni_impl::android::os::Parcel arg1, jint arg2);
	};
} // namespace __jni_impl::android::text

#include "../content/Context.hpp"
#include "../os/Parcel.hpp"
#include "TextPaint.hpp"
#include "TextUtils_TruncateAt.hpp"
#include "../../java/util/Locale.hpp"
#include "../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::text
{
	// Fields
	jint TextUtils::CAP_MODE_CHARACTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_CHARACTERS"
		);
	}
	jint TextUtils::CAP_MODE_SENTENCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_SENTENCES"
		);
	}
	jint TextUtils::CAP_MODE_WORDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.TextUtils",
			"CAP_MODE_WORDS"
		);
	}
	QAndroidJniObject TextUtils::CHAR_SEQUENCE_CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils",
			"CHAR_SEQUENCE_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TextUtils::SAFE_STRING_FLAG_FIRST_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.TextUtils",
			"SAFE_STRING_FLAG_FIRST_LINE"
		);
	}
	jint TextUtils::SAFE_STRING_FLAG_SINGLE_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.TextUtils",
			"SAFE_STRING_FLAG_SINGLE_LINE"
		);
	}
	jint TextUtils::SAFE_STRING_FLAG_TRIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.TextUtils",
			"SAFE_STRING_FLAG_TRIM"
		);
	}
	
	// Constructors
	void TextUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.TextUtils",
			"(V)V");
	}
	
	// Methods
	jstring TextUtils::commaEllipsize(jstring arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, jstring arg3, jstring arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"commaEllipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLjava/lang/String;Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		).object<jstring>();
	}
	jstring TextUtils::commaEllipsize(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, const QString &arg3, const QString &arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"commaEllipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLjava/lang/String;Ljava/lang/String;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
		).object<jstring>();
	}
	jstring TextUtils::concat(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"concat",
			"([Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	void TextUtils::copySpansFrom(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jclass arg3, __jni_impl::__JniBaseClass arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"copySpansFrom",
			"(Landroid/text/Spanned;IILjava/lang/Class;Landroid/text/Spannable;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5
		);
	}
	void TextUtils::dumpSpans(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"dumpSpans",
			"(Ljava/lang/CharSequence;Landroid/util/Printer;Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TextUtils::dumpSpans(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"dumpSpans",
			"(Ljava/lang/CharSequence;Landroid/util/Printer;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jstring TextUtils::ellipsize(jstring arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jstring TextUtils::ellipsize(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jstring TextUtils::ellipsize(jstring arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;ZLandroid/text/TextUtils$EllipsizeCallback;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object()
		).object<jstring>();
	}
	jstring TextUtils::ellipsize(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jfloat arg2, __jni_impl::android::text::TextUtils_TruncateAt arg3, jboolean arg4, __jni_impl::__JniBaseClass arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"ellipsize",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;FLandroid/text/TextUtils$TruncateAt;ZLandroid/text/TextUtils$EllipsizeCallback;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object()
		).object<jstring>();
	}
	jboolean TextUtils::equals(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"equals",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z",
			arg0,
			arg1
		);
	}
	jboolean TextUtils::equals(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"equals",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring TextUtils::expandTemplate(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"expandTemplate",
			"(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TextUtils::expandTemplate(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"expandTemplate",
			"(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jint TextUtils::getCapsMode(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getCapsMode",
			"(Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::getCapsMode(const QString &arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getCapsMode",
			"(Ljava/lang/CharSequence;II)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void TextUtils::getChars(jstring arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"getChars",
			"(Ljava/lang/CharSequence;II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void TextUtils::getChars(const QString &arg0, jint arg1, jint arg2, jcharArray arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"getChars",
			"(Ljava/lang/CharSequence;II[CI)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint TextUtils::getLayoutDirectionFromLocale(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getLayoutDirectionFromLocale",
			"(Ljava/util/Locale;)I",
			arg0.__jniObject().object()
		);
	}
	jint TextUtils::getOffsetAfter(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetAfter",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::getOffsetAfter(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetAfter",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint TextUtils::getOffsetBefore(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetBefore",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::getOffsetBefore(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getOffsetBefore",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring TextUtils::getReverse(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"getReverse",
			"(Ljava/lang/CharSequence;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring TextUtils::getReverse(const QString &arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"getReverse",
			"(Ljava/lang/CharSequence;II)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		).object<jstring>();
	}
	jint TextUtils::getTrimmedLength(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getTrimmedLength",
			"(Ljava/lang/CharSequence;)I",
			arg0
		);
	}
	jint TextUtils::getTrimmedLength(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"getTrimmedLength",
			"(Ljava/lang/CharSequence;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TextUtils::htmlEncode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"htmlEncode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TextUtils::htmlEncode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"htmlEncode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint TextUtils::indexOf(jstring arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;C)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::indexOf(const QString &arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;C)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint TextUtils::indexOf(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::indexOf(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint TextUtils::indexOf(jstring arg0, jchar arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::indexOf(const QString &arg0, jchar arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CI)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jint TextUtils::indexOf(jstring arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::indexOf(const QString &arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint TextUtils::indexOf(jstring arg0, jchar arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint TextUtils::indexOf(const QString &arg0, jchar arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;CII)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	jint TextUtils::indexOf(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;II)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint TextUtils::indexOf(const QString &arg0, const QString &arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"indexOf",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;II)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	jboolean TextUtils::isDigitsOnly(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isDigitsOnly",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean TextUtils::isDigitsOnly(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isDigitsOnly",
			"(Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean TextUtils::isEmpty(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isEmpty",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean TextUtils::isEmpty(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isEmpty",
			"(Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean TextUtils::isGraphic(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(C)Z",
			arg0
		);
	}
	jboolean TextUtils::isGraphic(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean TextUtils::isGraphic(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"isGraphic",
			"(Ljava/lang/CharSequence;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring TextUtils::join(jstring arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring TextUtils::join(const QString &arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;[Ljava/lang/Object;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jstring TextUtils::join(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring TextUtils::join(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"join",
			"(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jint TextUtils::lastIndexOf(jstring arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;C)I",
			arg0,
			arg1
		);
	}
	jint TextUtils::lastIndexOf(const QString &arg0, jchar arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;C)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint TextUtils::lastIndexOf(jstring arg0, jchar arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CI)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint TextUtils::lastIndexOf(const QString &arg0, jchar arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CI)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jint TextUtils::lastIndexOf(jstring arg0, jchar arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint TextUtils::lastIndexOf(const QString &arg0, jchar arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.TextUtils",
			"lastIndexOf",
			"(Ljava/lang/CharSequence;CII)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	jstring TextUtils::listEllipsize(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, jstring arg2, __jni_impl::android::text::TextPaint arg3, jfloat arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"listEllipsize",
			"(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;Landroid/text/TextPaint;FI)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jstring TextUtils::listEllipsize(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2, __jni_impl::android::text::TextPaint arg3, jfloat arg4, jint arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"listEllipsize",
			"(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;Landroid/text/TextPaint;FI)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jstring TextUtils::makeSafeForPresentation(jstring arg0, jint arg1, jfloat arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"makeSafeForPresentation",
			"(Ljava/lang/String;IFI)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring TextUtils::makeSafeForPresentation(const QString &arg0, jint arg1, jfloat arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"makeSafeForPresentation",
			"(Ljava/lang/String;IFI)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jboolean TextUtils::regionMatches(jstring arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"regionMatches",
			"(Ljava/lang/CharSequence;ILjava/lang/CharSequence;II)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean TextUtils::regionMatches(const QString &arg0, jint arg1, const QString &arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.TextUtils",
			"regionMatches",
			"(Ljava/lang/CharSequence;ILjava/lang/CharSequence;II)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	jstring TextUtils::replace(jstring arg0, jarray arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"replace",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring TextUtils::replace(const QString &arg0, jarray arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"replace",
			"(Ljava/lang/CharSequence;[Ljava/lang/String;[Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		).object<jstring>();
	}
	jarray TextUtils::split(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	jarray TextUtils::split(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	jarray TextUtils::split(jstring arg0, __jni_impl::java::util::regex::Pattern arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/util/regex/Pattern;)[Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray TextUtils::split(const QString &arg0, __jni_impl::java::util::regex::Pattern arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"split",
			"(Ljava/lang/String;Ljava/util/regex/Pattern;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jstring TextUtils::stringOrSpannedString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"stringOrSpannedString",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring TextUtils::stringOrSpannedString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"stringOrSpannedString",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring TextUtils::substring(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"substring",
			"(Ljava/lang/CharSequence;II)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring TextUtils::substring(const QString &arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils",
			"substring",
			"(Ljava/lang/CharSequence;II)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		).object<jstring>();
	}
	void TextUtils::writeToParcel(jstring arg0, __jni_impl::android::os::Parcel arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"writeToParcel",
			"(Ljava/lang/CharSequence;Landroid/os/Parcel;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void TextUtils::writeToParcel(const QString &arg0, __jni_impl::android::os::Parcel arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.TextUtils",
			"writeToParcel",
			"(Ljava/lang/CharSequence;Landroid/os/Parcel;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class TextUtils : public __jni_impl::android::text::TextUtils
	{
	public:
		TextUtils(QAndroidJniObject obj) { __thiz = obj; }
		TextUtils()
		{
			__constructor();
		}
	};
} // namespace android::text

