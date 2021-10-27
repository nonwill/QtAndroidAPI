#include "../io/ObjectInputStream.hpp"
#include "./Clock.hpp"
#include "./DayOfWeek.hpp"
#include "./Instant.hpp"
#include "./LocalDateTime.hpp"
#include "./LocalTime.hpp"
#include "./Month.hpp"
#include "./OffsetDateTime.hpp"
#include "./OffsetTime.hpp"
#include "./Period.hpp"
#include "./ZoneId.hpp"
#include "./ZoneOffset.hpp"
#include "./ZonedDateTime.hpp"
#include "./chrono/IsoChronology.hpp"
#include "./chrono/IsoEra.hpp"
#include "./format/DateTimeFormatter.hpp"
#include "./temporal/ValueRange.hpp"
#include "./LocalDate.hpp"

namespace java::time
{
	// Fields
	QAndroidJniObject LocalDate::EPOCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDate",
			"EPOCH",
			"Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDate::MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDate",
			"MAX",
			"Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDate::MIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.LocalDate",
			"MIN",
			"Ljava/time/LocalDate;"
		);
	}
	
	LocalDate::LocalDate(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LocalDate::from(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"from",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::now()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"()Ljava/time/LocalDate;"
		);
	}
	QAndroidJniObject LocalDate::now(java::time::Clock arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/Clock;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::now(java::time::ZoneId arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"now",
			"(Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::of(jint arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"of",
			"(III)Ljava/time/LocalDate;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LocalDate::of(jint arg0, java::time::Month arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"of",
			"(ILjava/time/Month;I)Ljava/time/LocalDate;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject LocalDate::ofEpochDay(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"ofEpochDay",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::ofInstant(java::time::Instant arg0, java::time::ZoneId arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"ofInstant",
			"(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/LocalDate;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::ofYearDay(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"ofYearDay",
			"(II)Ljava/time/LocalDate;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalDate::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/LocalDate;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LocalDate::parse(jstring arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::parse(const QString &arg0, java::time::format::DateTimeFormatter arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.LocalDate",
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDate;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::adjustInto(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::atStartOfDay()
	{
		return __thiz.callObjectMethod(
			"atStartOfDay",
			"()Ljava/time/LocalDateTime;"
		);
	}
	QAndroidJniObject LocalDate::atStartOfDay(java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"atStartOfDay",
			"(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::atTime(java::time::LocalTime arg0)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(Ljava/time/LocalTime;)Ljava/time/LocalDateTime;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::atTime(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(II)Ljava/time/LocalDateTime;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject LocalDate::atTime(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(III)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LocalDate::atTime(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(IIII)Ljava/time/LocalDateTime;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject LocalDate::atTime(java::time::OffsetTime arg0)
	{
		return __thiz.callObjectMethod(
			"atTime",
			"(Ljava/time/OffsetTime;)Ljava/time/OffsetDateTime;",
			arg0.__jniObject().object()
		);
	}
	jint LocalDate::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint LocalDate::compareTo(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/time/chrono/ChronoLocalDate;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::datesUntil(java::time::LocalDate arg0)
	{
		return __thiz.callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::datesUntil(java::time::LocalDate arg0, java::time::Period arg1)
	{
		return __thiz.callObjectMethod(
			"datesUntil",
			"(Ljava/time/LocalDate;Ljava/time/Period;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocalDate::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocalDate::format(java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jint LocalDate::get(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/time/temporal/TemporalField;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/IsoChronology;"
		);
	}
	jint LocalDate::getDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	QAndroidJniObject LocalDate::getDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint LocalDate::getDayOfYear()
	{
		return __thiz.callMethod<jint>(
			"getDayOfYear",
			"()I"
		);
	}
	QAndroidJniObject LocalDate::getEra()
	{
		return __thiz.callObjectMethod(
			"getEra",
			"()Ljava/time/chrono/IsoEra;"
		);
	}
	jlong LocalDate::getLong(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/time/temporal/TemporalField;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::getMonth()
	{
		return __thiz.callObjectMethod(
			"getMonth",
			"()Ljava/time/Month;"
		);
	}
	jint LocalDate::getMonthValue()
	{
		return __thiz.callMethod<jint>(
			"getMonthValue",
			"()I"
		);
	}
	jint LocalDate::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint LocalDate::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean LocalDate::isAfter(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAfter",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDate::isBefore(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBefore",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDate::isEqual(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEqual",
			"(Ljava/time/chrono/ChronoLocalDate;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocalDate::isLeapYear()
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"()Z"
		);
	}
	jboolean LocalDate::isSupported(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupported",
			"(Ljava/time/temporal/TemporalField;)Z",
			arg0.__jniObject().object()
		);
	}
	jint LocalDate::lengthOfMonth()
	{
		return __thiz.callMethod<jint>(
			"lengthOfMonth",
			"()I"
		);
	}
	jint LocalDate::lengthOfYear()
	{
		return __thiz.callMethod<jint>(
			"lengthOfYear",
			"()I"
		);
	}
	QAndroidJniObject LocalDate::minus(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::minus(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"minus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::minusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::minusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::minusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::minusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"minusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plus(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::plus(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"plus",
			"(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::plusDays(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusDays",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plusMonths(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusMonths",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plusWeeks(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusWeeks",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::plusYears(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"plusYears",
			"(J)Ljava/time/LocalDate;",
			arg0
		);
	}
	jobject LocalDate::query(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject LocalDate::range(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jlong LocalDate::toEpochDay()
	{
		return __thiz.callMethod<jlong>(
			"toEpochDay",
			"()J"
		);
	}
	jlong LocalDate::toEpochSecond(java::time::LocalTime arg0, java::time::ZoneOffset arg1)
	{
		return __thiz.callMethod<jlong>(
			"toEpochSecond",
			"(Ljava/time/LocalTime;Ljava/time/ZoneOffset;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring LocalDate::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LocalDate::until(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"until",
			"(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/Period;",
			arg0.__jniObject().object()
		);
	}
	jlong LocalDate::until(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"until",
			"(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::with(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDate;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocalDate::with(__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDate;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject LocalDate::withDayOfMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::withDayOfYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withDayOfYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::withMonth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withMonth",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
	QAndroidJniObject LocalDate::withYear(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withYear",
			"(I)Ljava/time/LocalDate;",
			arg0
		);
	}
} // namespace java::time
