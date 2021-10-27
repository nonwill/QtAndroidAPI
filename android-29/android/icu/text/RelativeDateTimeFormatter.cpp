#include "./BreakIterator.hpp"
#include "./DisplayContext.hpp"
#include "./NumberFormat.hpp"
#include "./PluralRules.hpp"
#include "./RelativeDateTimeFormatter_AbsoluteUnit.hpp"
#include "./RelativeDateTimeFormatter_Direction.hpp"
#include "./RelativeDateTimeFormatter_RelativeDateTimeUnit.hpp"
#include "./RelativeDateTimeFormatter_RelativeUnit.hpp"
#include "./RelativeDateTimeFormatter_Style.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/EnumMap.hpp"
#include "../../../java/util/Locale.hpp"
#include "./RelativeDateTimeFormatter.hpp"

namespace android::icu::text
{
	// Fields
	
	RelativeDateTimeFormatter::RelativeDateTimeFormatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"()Landroid/icu/text/RelativeDateTimeFormatter;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getInstance(java::util::Locale arg0, android::icu::text::NumberFormat arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/NumberFormat;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getInstance(android::icu::util::ULocale arg0, android::icu::text::NumberFormat arg1, android::icu::text::RelativeDateTimeFormatter_Style arg2, android::icu::text::DisplayContext arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/NumberFormat;Landroid/icu/text/RelativeDateTimeFormatter$Style;Landroid/icu/text/DisplayContext;)Landroid/icu/text/RelativeDateTimeFormatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring RelativeDateTimeFormatter::combineDateAndTime(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"combineDateAndTime",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::combineDateAndTime(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"combineDateAndTime",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::format(android::icu::text::RelativeDateTimeFormatter_Direction arg0, android::icu::text::RelativeDateTimeFormatter_AbsoluteUnit arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Landroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::format(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_Direction arg1, android::icu::text::RelativeDateTimeFormatter_RelativeUnit arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$Direction;Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jstring>();
	}
	jstring RelativeDateTimeFormatter::formatNumeric(jdouble arg0, android::icu::text::RelativeDateTimeFormatter_RelativeDateTimeUnit arg1)
	{
		return __thiz.callObjectMethod(
			"formatNumeric",
			"(DLandroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject RelativeDateTimeFormatter::getCapitalizationContext()
	{
		return __thiz.callObjectMethod(
			"getCapitalizationContext",
			"()Landroid/icu/text/DisplayContext;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getFormatStyle()
	{
		return __thiz.callObjectMethod(
			"getFormatStyle",
			"()Landroid/icu/text/RelativeDateTimeFormatter$Style;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter::getNumberFormat()
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
} // namespace android::icu::text

