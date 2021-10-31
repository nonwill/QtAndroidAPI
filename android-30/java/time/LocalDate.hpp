#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class Clock;
}
namespace java::time
{
	class DayOfWeek;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class LocalTime;
}
namespace java::time
{
	class Month;
}
namespace java::time
{
	class OffsetDateTime;
}
namespace java::time
{
	class OffsetTime;
}
namespace java::time
{
	class Period;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time
{
	class ZonedDateTime;
}
namespace java::time::chrono
{
	class IsoChronology;
}
namespace java::time::chrono
{
	class IsoEra;
}
namespace java::time::format
{
	class DateTimeFormatter;
}
namespace java::time::temporal
{
	class ValueRange;
}

namespace java::time
{
	class LocalDate : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::LocalDate EPOCH();
		static java::time::LocalDate MAX();
		static java::time::LocalDate MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalDate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocalDate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::LocalDate from(__JniBaseClass arg0);
		static java::time::LocalDate now();
		static java::time::LocalDate now(java::time::Clock arg0);
		static java::time::LocalDate now(java::time::ZoneId arg0);
		static java::time::LocalDate of(jint arg0, jint arg1, jint arg2);
		static java::time::LocalDate of(jint arg0, java::time::Month arg1, jint arg2);
		static java::time::LocalDate ofEpochDay(jlong arg0);
		static java::time::LocalDate ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::LocalDate ofYearDay(jint arg0, jint arg1);
		static java::time::LocalDate parse(jstring arg0);
		static java::time::LocalDate parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::LocalDateTime atStartOfDay();
		java::time::ZonedDateTime atStartOfDay(java::time::ZoneId arg0);
		java::time::LocalDateTime atTime(java::time::LocalTime arg0);
		java::time::LocalDateTime atTime(jint arg0, jint arg1);
		java::time::LocalDateTime atTime(jint arg0, jint arg1, jint arg2);
		java::time::LocalDateTime atTime(jint arg0, jint arg1, jint arg2, jint arg3);
		java::time::OffsetDateTime atTime(java::time::OffsetTime arg0);
		jint compareTo(jobject arg0);
		jint compareTo(__JniBaseClass arg0);
		__JniBaseClass datesUntil(java::time::LocalDate arg0);
		__JniBaseClass datesUntil(java::time::LocalDate arg0, java::time::Period arg1);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		java::time::chrono::IsoChronology getChronology();
		jint getDayOfMonth();
		java::time::DayOfWeek getDayOfWeek();
		jint getDayOfYear();
		java::time::chrono::IsoEra getEra();
		jlong getLong(__JniBaseClass arg0);
		java::time::Month getMonth();
		jint getMonthValue();
		jint getYear();
		jint hashCode();
		jboolean isAfter(__JniBaseClass arg0);
		jboolean isBefore(__JniBaseClass arg0);
		jboolean isEqual(__JniBaseClass arg0);
		jboolean isLeapYear();
		jboolean isSupported(__JniBaseClass arg0);
		jint lengthOfMonth();
		jint lengthOfYear();
		java::time::LocalDate minus(__JniBaseClass arg0);
		java::time::LocalDate minus(jlong arg0, __JniBaseClass arg1);
		java::time::LocalDate minusDays(jlong arg0);
		java::time::LocalDate minusMonths(jlong arg0);
		java::time::LocalDate minusWeeks(jlong arg0);
		java::time::LocalDate minusYears(jlong arg0);
		java::time::LocalDate plus(__JniBaseClass arg0);
		java::time::LocalDate plus(jlong arg0, __JniBaseClass arg1);
		java::time::LocalDate plusDays(jlong arg0);
		java::time::LocalDate plusMonths(jlong arg0);
		java::time::LocalDate plusWeeks(jlong arg0);
		java::time::LocalDate plusYears(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochDay();
		jlong toEpochSecond(java::time::LocalTime arg0, java::time::ZoneOffset arg1);
		jstring toString();
		java::time::Period until(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::LocalDate with(__JniBaseClass arg0);
		java::time::LocalDate with(__JniBaseClass arg0, jlong arg1);
		java::time::LocalDate withDayOfMonth(jint arg0);
		java::time::LocalDate withDayOfYear(jint arg0);
		java::time::LocalDate withMonth(jint arg0);
		java::time::LocalDate withYear(jint arg0);
	};
} // namespace java::time
