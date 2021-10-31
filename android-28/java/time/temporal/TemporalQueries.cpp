#include "./TemporalQueries.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QAndroidJniObject forward
	TemporalQueries::TemporalQueries(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass TemporalQueries::chronology()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"chronology",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass TemporalQueries::localDate()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localDate",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass TemporalQueries::localTime()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"localTime",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass TemporalQueries::offset()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"offset",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass TemporalQueries::precision()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"precision",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass TemporalQueries::zone()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zone",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	__JniBaseClass TemporalQueries::zoneId()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalQueries",
			"zoneId",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
} // namespace java::time::temporal

