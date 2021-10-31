#include "./Locale_FilteringMode.hpp"

namespace java::util
{
	// Fields
	java::util::Locale_FilteringMode Locale_FilteringMode::AUTOSELECT_FILTERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"AUTOSELECT_FILTERING",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::EXTENDED_FILTERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"EXTENDED_FILTERING",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::IGNORE_EXTENDED_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"IGNORE_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::MAP_EXTENDED_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"MAP_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	java::util::Locale_FilteringMode Locale_FilteringMode::REJECT_EXTENDED_RANGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale$FilteringMode",
			"REJECT_EXTENDED_RANGES",
			"Ljava/util/Locale$FilteringMode;"
		);
	}
	
	// QAndroidJniObject forward
	Locale_FilteringMode::Locale_FilteringMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Locale_FilteringMode Locale_FilteringMode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$FilteringMode",
			"valueOf",
			"(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;",
			arg0
		);
	}
	jarray Locale_FilteringMode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale$FilteringMode",
			"values",
			"()[Ljava/util/Locale$FilteringMode;"
		).object<jarray>();
	}
} // namespace java::util

