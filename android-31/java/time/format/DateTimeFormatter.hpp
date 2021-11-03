#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace java::lang
{
	class Boolean;
}
class JString;
class JObject;
namespace java::lang
{
	class RuntimeException;
}
class JString;
namespace java::text
{
	class Format;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::time
{
	class Period;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time::format
{
	class DateTimeParseException;
}
namespace java::time::format
{
	class DecimalStyle;
}
namespace java::time::format
{
	class FormatStyle;
}
namespace java::time::format
{
	class ResolverStyle;
}
namespace java::util
{
	class Locale;
}

namespace java::time::format
{
	class DateTimeFormatter : public JObject
	{
	public:
		// Fields
		static java::time::format::DateTimeFormatter BASIC_ISO_DATE();
		static java::time::format::DateTimeFormatter ISO_DATE();
		static java::time::format::DateTimeFormatter ISO_DATE_TIME();
		static java::time::format::DateTimeFormatter ISO_INSTANT();
		static java::time::format::DateTimeFormatter ISO_LOCAL_DATE();
		static java::time::format::DateTimeFormatter ISO_LOCAL_DATE_TIME();
		static java::time::format::DateTimeFormatter ISO_LOCAL_TIME();
		static java::time::format::DateTimeFormatter ISO_OFFSET_DATE();
		static java::time::format::DateTimeFormatter ISO_OFFSET_DATE_TIME();
		static java::time::format::DateTimeFormatter ISO_OFFSET_TIME();
		static java::time::format::DateTimeFormatter ISO_ORDINAL_DATE();
		static java::time::format::DateTimeFormatter ISO_TIME();
		static java::time::format::DateTimeFormatter ISO_WEEK_DATE();
		static java::time::format::DateTimeFormatter ISO_ZONED_DATE_TIME();
		static java::time::format::DateTimeFormatter RFC_1123_DATE_TIME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::format::DateTimeFormatter ofLocalizedDate(java::time::format::FormatStyle arg0);
		static java::time::format::DateTimeFormatter ofLocalizedDateTime(java::time::format::FormatStyle arg0);
		static java::time::format::DateTimeFormatter ofLocalizedDateTime(java::time::format::FormatStyle arg0, java::time::format::FormatStyle arg1);
		static java::time::format::DateTimeFormatter ofLocalizedTime(java::time::format::FormatStyle arg0);
		static java::time::format::DateTimeFormatter ofPattern(JString arg0);
		static java::time::format::DateTimeFormatter ofPattern(JString arg0, java::util::Locale arg1);
		static JObject parsedExcessDays();
		static JObject parsedLeapSecond();
		JString format(JObject arg0);
		void formatTo(JObject arg0, JObject arg1);
		JObject getChronology();
		java::time::format::DecimalStyle getDecimalStyle();
		java::util::Locale getLocale();
		JObject getResolverFields();
		java::time::format::ResolverStyle getResolverStyle();
		java::time::ZoneId getZone();
		java::time::format::DateTimeFormatter localizedBy(java::util::Locale arg0);
		JObject parse(JString arg0, JObject arg1);
		JObject parse(JString arg0);
		JObject parse(JString arg0, java::text::ParsePosition arg1);
		JObject parseBest(JString arg0, JArray arg1);
		JObject parseUnresolved(JString arg0, java::text::ParsePosition arg1);
		java::text::Format toFormat();
		java::text::Format toFormat(JObject arg0);
		JString toString();
		java::time::format::DateTimeFormatter withChronology(JObject arg0);
		java::time::format::DateTimeFormatter withDecimalStyle(java::time::format::DecimalStyle arg0);
		java::time::format::DateTimeFormatter withLocale(java::util::Locale arg0);
		java::time::format::DateTimeFormatter withResolverFields(JArray arg0);
		java::time::format::DateTimeFormatter withResolverFields(JObject arg0);
		java::time::format::DateTimeFormatter withResolverStyle(java::time::format::ResolverStyle arg0);
		java::time::format::DateTimeFormatter withZone(java::time::ZoneId arg0);
	};
} // namespace java::time::format

