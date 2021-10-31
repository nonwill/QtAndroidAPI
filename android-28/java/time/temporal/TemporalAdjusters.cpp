#include "../DayOfWeek.hpp"
#include "./TemporalAdjusters.hpp"

namespace java::time::temporal
{
	// Fields
	
	// QAndroidJniObject forward
	TemporalAdjusters::TemporalAdjusters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass TemporalAdjusters::dayOfWeekInMonth(jint arg0, java::time::DayOfWeek arg1)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"dayOfWeekInMonth",
			"(ILjava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass TemporalAdjusters::firstDayOfMonth()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	__JniBaseClass TemporalAdjusters::firstDayOfNextMonth()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfNextMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	__JniBaseClass TemporalAdjusters::firstDayOfNextYear()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfNextYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	__JniBaseClass TemporalAdjusters::firstDayOfYear()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	__JniBaseClass TemporalAdjusters::firstInMonth(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	__JniBaseClass TemporalAdjusters::lastDayOfMonth()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastDayOfMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	__JniBaseClass TemporalAdjusters::lastDayOfYear()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastDayOfYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	__JniBaseClass TemporalAdjusters::lastInMonth(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	__JniBaseClass TemporalAdjusters::next(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"next",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	__JniBaseClass TemporalAdjusters::nextOrSame(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"nextOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	__JniBaseClass TemporalAdjusters::ofDateAdjuster(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"ofDateAdjuster",
			"(Ljava/util/function/UnaryOperator;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	__JniBaseClass TemporalAdjusters::previous(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previous",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	__JniBaseClass TemporalAdjusters::previousOrSame(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previousOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
} // namespace java::time::temporal

