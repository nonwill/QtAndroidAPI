#include "../../lang/Double.hpp"
#include "../../lang/IllegalStateException.hpp"
#include "../../lang/Integer.hpp"
#include "../../lang/Long.hpp"
#include "../../lang/StringBuilder.hpp"
#include "../ArrayList.hpp"
#include "../DoubleSummaryStatistics.hpp"
#include "../HashMap.hpp"
#include "../HashSet.hpp"
#include "../IntSummaryStatistics.hpp"
#include "../LongSummaryStatistics.hpp"
#include "../Optional.hpp"
#include "../StringJoiner.hpp"
#include "./Collectors.hpp"

namespace java::util::stream
{
	// Fields
	
	// QJniObject forward
	Collectors::Collectors(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Collectors::averagingDouble(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::averagingInt(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::averagingLong(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"averagingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::collectingAndThen(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"collectingAndThen",
			"(Ljava/util/stream/Collector;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::counting()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"counting",
			"()Ljava/util/stream/Collector;"
		);
	}
	__JniBaseClass Collectors::filtering(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"filtering",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::flatMapping(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"flatMapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::groupingBy(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::groupingBy(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::groupingBy(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingBy",
			"(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::groupingByConcurrent(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::groupingByConcurrent(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::groupingByConcurrent(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"groupingByConcurrent",
			"(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::joining()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"()Ljava/util/stream/Collector;"
		);
	}
	__JniBaseClass Collectors::joining(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0
		);
	}
	__JniBaseClass Collectors::joining(jstring arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"joining",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Collectors::mapping(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"mapping",
			"(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::maxBy(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"maxBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::minBy(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"minBy",
			"(Ljava/util/Comparator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::partitioningBy(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::partitioningBy(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"partitioningBy",
			"(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::reducing(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::reducing(jobject arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass Collectors::reducing(jobject arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"reducing",
			"(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::summarizingDouble(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::summarizingInt(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::summarizingLong(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summarizingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::summingDouble(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingDouble",
			"(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::summingInt(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingInt",
			"(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::summingLong(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"summingLong",
			"(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::teeing(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"teeing",
			"(Ljava/util/stream/Collector;Ljava/util/stream/Collector;Ljava/util/function/BiFunction;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::toCollection(__JniBaseClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toCollection",
			"(Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object()
		);
	}
	__JniBaseClass Collectors::toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::toConcurrentMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toConcurrentMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	__JniBaseClass Collectors::toList()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toList",
			"()Ljava/util/stream/Collector;"
		);
	}
	__JniBaseClass Collectors::toMap(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::toMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::toMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	__JniBaseClass Collectors::toSet()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toSet",
			"()Ljava/util/stream/Collector;"
		);
	}
	__JniBaseClass Collectors::toUnmodifiableList()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableList",
			"()Ljava/util/stream/Collector;"
		);
	}
	__JniBaseClass Collectors::toUnmodifiableMap(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Collectors::toUnmodifiableMap(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableMap",
			"(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass Collectors::toUnmodifiableSet()
	{
		return callStaticObjectMethod(
			"java.util.stream.Collectors",
			"toUnmodifiableSet",
			"()Ljava/util/stream/Collector;"
		);
	}
} // namespace java::util::stream

