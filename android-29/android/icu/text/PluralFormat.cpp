#include "./NumberFormat.hpp"
#include "./PluralRules.hpp"
#include "./PluralRules_PluralType.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "./PluralFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	PluralFormat::PluralFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PluralFormat::PluralFormat()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"()V"
		);
	}
	PluralFormat::PluralFormat(android::icu::text::PluralRules &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;)V",
			arg0.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	PluralFormat::PluralFormat(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	PluralFormat::PluralFormat(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(android::icu::text::PluralRules &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	PluralFormat::PluralFormat(android::icu::text::PluralRules &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules_PluralType &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	PluralFormat::PluralFormat(java::util::Locale &arg0, android::icu::text::PluralRules &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(java::util::Locale &arg0, android::icu::text::PluralRules_PluralType &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules_PluralType &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	PluralFormat::PluralFormat(android::icu::util::ULocale &arg0, android::icu::text::PluralRules_PluralType &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	void PluralFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PluralFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PluralFormat::equals(android::icu::text::PluralFormat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralFormat;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean PluralFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PluralFormat::format(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject PluralFormat::format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint PluralFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject PluralFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PluralFormat::parse(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobject PluralFormat::parseObject(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject PluralFormat::parseObject(const QString &arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	void PluralFormat::setNumberFormat(android::icu::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PluralFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PluralFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text
