#include "../ArrayList.hpp"
#include "./TimeUnit.hpp"
#include "./AbstractExecutorService.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	AbstractExecutorService::AbstractExecutorService(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AbstractExecutorService::AbstractExecutorService()
		: JObject(
			"java.util.concurrent.AbstractExecutorService",
			"()V"
		) {}
	
	// Methods
	JObject AbstractExecutorService::invokeAll(JObject arg0)
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject AbstractExecutorService::invokeAll(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jobject AbstractExecutorService::invokeAny(JObject arg0)
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject AbstractExecutorService::invokeAny(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2)
	{
		return callObjectMethod(
			"invokeAny",
			"(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2.object()
		).object<jobject>();
	}
	JObject AbstractExecutorService::submit(JObject arg0)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;",
			arg0.object()
		);
	}
	JObject AbstractExecutorService::submit(JObject arg0, jobject arg1)
	{
		return callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;",
			arg0.object(),
			arg1
		);
	}
} // namespace java::util::concurrent

