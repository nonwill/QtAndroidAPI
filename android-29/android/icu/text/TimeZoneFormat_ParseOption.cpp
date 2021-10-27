#include "./TimeZoneFormat_ParseOption.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject TimeZoneFormat_ParseOption::ALL_STYLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"ALL_STYLES",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	QAndroidJniObject TimeZoneFormat_ParseOption::TZ_DATABASE_ABBREVIATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"TZ_DATABASE_ABBREVIATIONS",
			"Landroid/icu/text/TimeZoneFormat$ParseOption;"
		);
	}
	
	TimeZoneFormat_ParseOption::TimeZoneFormat_ParseOption(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TimeZoneFormat_ParseOption::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$ParseOption;",
			arg0
		);
	}
	QAndroidJniObject TimeZoneFormat_ParseOption::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$ParseOption;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TimeZoneFormat_ParseOption::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneFormat$ParseOption",
			"values",
			"()[Landroid/icu/text/TimeZoneFormat$ParseOption;"
		).object<jarray>();
	}
} // namespace android::icu::text
