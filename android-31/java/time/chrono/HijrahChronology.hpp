#pragma once

#include "../../../JObject.hpp"
#include "./AbstractChronology.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang
{
	class Void;
}
namespace java::time
{
	class Clock;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time::chrono
{
	class HijrahDate;
}
namespace java::time::chrono
{
	class HijrahEra;
}
namespace java::time::format
{
	class ResolverStyle;
}
namespace java::time::temporal
{
	class ChronoField;
}
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class Properties;
}

namespace java::time::chrono
{
	class HijrahChronology : public java::time::chrono::AbstractChronology
	{
	public:
		// Fields
		static java::time::chrono::HijrahChronology INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit HijrahChronology(const char *className, const char *sig, Ts...agv) : java::time::chrono::AbstractChronology(className, sig, std::forward<Ts>(agv)...) {}
		HijrahChronology(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::time::chrono::HijrahDate date(JObject arg0);
		java::time::chrono::HijrahDate date(jint arg0, jint arg1, jint arg2);
		java::time::chrono::HijrahDate date(JObject arg0, jint arg1, jint arg2, jint arg3);
		java::time::chrono::HijrahDate dateEpochDay(jlong arg0);
		java::time::chrono::HijrahDate dateNow();
		java::time::chrono::HijrahDate dateNow(java::time::Clock arg0);
		java::time::chrono::HijrahDate dateNow(java::time::ZoneId arg0);
		java::time::chrono::HijrahDate dateYearDay(jint arg0, jint arg1);
		java::time::chrono::HijrahDate dateYearDay(JObject arg0, jint arg1, jint arg2);
		java::time::chrono::HijrahEra eraOf(jint arg0);
		JObject eras();
		jstring getCalendarType();
		jstring getId();
		jboolean isLeapYear(jlong arg0);
		JObject localDateTime(JObject arg0);
		jint prolepticYear(JObject arg0, jint arg1);
		java::time::temporal::ValueRange range(java::time::temporal::ChronoField arg0);
		java::time::chrono::HijrahDate resolveDate(JObject arg0, java::time::format::ResolverStyle arg1);
		JObject zonedDateTime(JObject arg0);
		JObject zonedDateTime(java::time::Instant arg0, java::time::ZoneId arg1);
	};
} // namespace java::time::chrono

