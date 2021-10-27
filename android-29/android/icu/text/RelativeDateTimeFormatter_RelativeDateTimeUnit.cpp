#include "./RelativeDateTimeFormatter_RelativeDateTimeUnit.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"DAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::FRIDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"FRIDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"HOUR",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MINUTE",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::MONDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MONDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"MONTH",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::QUARTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"QUARTER",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::SATURDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SATURDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SECOND",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::SUNDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"SUNDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::THURSDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"THURSDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::TUESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"TUESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"WEDNESDAY",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"WEEK",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"YEAR",
			"Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		);
	}
	
	RelativeDateTimeFormatter_RelativeDateTimeUnit::RelativeDateTimeFormatter_RelativeDateTimeUnit(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;",
			arg0
		);
	}
	QAndroidJniObject RelativeDateTimeFormatter_RelativeDateTimeUnit::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RelativeDateTimeFormatter_RelativeDateTimeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$RelativeDateTimeUnit",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;"
		).object<jarray>();
	}
} // namespace android::icu::text
