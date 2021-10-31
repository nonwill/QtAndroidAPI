#include "./TimeZoneNames_NameType.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::EXEMPLAR_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"EXEMPLAR_LOCATION",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::LONG_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_DAYLIGHT",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::LONG_GENERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_GENERIC",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::LONG_STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"LONG_STANDARD",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::SHORT_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_DAYLIGHT",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::SHORT_GENERIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_GENERIC",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::SHORT_STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.TimeZoneNames$NameType",
			"SHORT_STANDARD",
			"Landroid/icu/text/TimeZoneNames$NameType;"
		);
	}
	
	// QAndroidJniObject forward
	TimeZoneNames_NameType::TimeZoneNames_NameType(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::TimeZoneNames_NameType TimeZoneNames_NameType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/TimeZoneNames$NameType;",
			arg0
		);
	}
	jarray TimeZoneNames_NameType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.TimeZoneNames$NameType",
			"values",
			"()[Landroid/icu/text/TimeZoneNames$NameType;"
		).object<jarray>();
	}
} // namespace android::icu::text

