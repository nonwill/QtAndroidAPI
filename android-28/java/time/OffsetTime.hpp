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
	class Instant;
}
namespace java::time
{
	class LocalDate;
}
namespace java::time
{
	class LocalTime;
}
namespace java::time
{
	class OffsetDateTime;
}
namespace java::time
{
	class ZoneId;
}
namespace java::time
{
	class ZoneOffset;
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
	class OffsetTime : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::OffsetTime MAX();
		static java::time::OffsetTime MIN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OffsetTime(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OffsetTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::OffsetTime from(__JniBaseClass arg0);
		static java::time::OffsetTime now();
		static java::time::OffsetTime now(java::time::Clock arg0);
		static java::time::OffsetTime now(java::time::ZoneId arg0);
		static java::time::OffsetTime of(java::time::LocalTime arg0, java::time::ZoneOffset arg1);
		static java::time::OffsetTime of(jint arg0, jint arg1, jint arg2, jint arg3, java::time::ZoneOffset arg4);
		static java::time::OffsetTime ofInstant(java::time::Instant arg0, java::time::ZoneId arg1);
		static java::time::OffsetTime parse(jstring arg0);
		static java::time::OffsetTime parse(jstring arg0, java::time::format::DateTimeFormatter arg1);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		java::time::OffsetDateTime atDate(java::time::LocalDate arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::OffsetTime arg0);
		jboolean equals(jobject arg0);
		jstring format(java::time::format::DateTimeFormatter arg0);
		jint get(__JniBaseClass arg0);
		jint getHour();
		jlong getLong(__JniBaseClass arg0);
		jint getMinute();
		jint getNano();
		java::time::ZoneOffset getOffset();
		jint getSecond();
		jint hashCode();
		jboolean isAfter(java::time::OffsetTime arg0);
		jboolean isBefore(java::time::OffsetTime arg0);
		jboolean isEqual(java::time::OffsetTime arg0);
		jboolean isSupported(__JniBaseClass arg0);
		java::time::OffsetTime minus(__JniBaseClass arg0);
		java::time::OffsetTime minus(jlong arg0, __JniBaseClass arg1);
		java::time::OffsetTime minusHours(jlong arg0);
		java::time::OffsetTime minusMinutes(jlong arg0);
		java::time::OffsetTime minusNanos(jlong arg0);
		java::time::OffsetTime minusSeconds(jlong arg0);
		java::time::OffsetTime plus(__JniBaseClass arg0);
		java::time::OffsetTime plus(jlong arg0, __JniBaseClass arg1);
		java::time::OffsetTime plusHours(jlong arg0);
		java::time::OffsetTime plusMinutes(jlong arg0);
		java::time::OffsetTime plusNanos(jlong arg0);
		java::time::OffsetTime plusSeconds(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jlong toEpochSecond(java::time::LocalDate arg0);
		java::time::LocalTime toLocalTime();
		jstring toString();
		java::time::OffsetTime truncatedTo(__JniBaseClass arg0);
		jlong until(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::OffsetTime with(__JniBaseClass arg0);
		java::time::OffsetTime with(__JniBaseClass arg0, jlong arg1);
		java::time::OffsetTime withHour(jint arg0);
		java::time::OffsetTime withMinute(jint arg0);
		java::time::OffsetTime withNano(jint arg0);
		java::time::OffsetTime withOffsetSameInstant(java::time::ZoneOffset arg0);
		java::time::OffsetTime withOffsetSameLocal(java::time::ZoneOffset arg0);
		java::time::OffsetTime withSecond(jint arg0);
	};
} // namespace java::time
