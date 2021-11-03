#include "../../../JObject.hpp"
#include "../../../JThrowable.hpp"
#include "./CountedCompleter.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	CountedCompleter::CountedCompleter(QAndroidJniObject obj) : java::util::concurrent::ForkJoinTask(obj) {}
	
	// Constructors
	
	// Methods
	void CountedCompleter::addToPendingCount(jint arg0)
	{
		callMethod<void>(
			"addToPendingCount",
			"(I)V",
			arg0
		);
	}
	jboolean CountedCompleter::compareAndSetPendingCount(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"compareAndSetPendingCount",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void CountedCompleter::complete(JObject arg0)
	{
		callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void CountedCompleter::compute()
	{
		callMethod<void>(
			"compute",
			"()V"
		);
	}
	jint CountedCompleter::decrementPendingCountUnlessZero()
	{
		return callMethod<jint>(
			"decrementPendingCountUnlessZero",
			"()I"
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::firstComplete()
	{
		return callObjectMethod(
			"firstComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::getCompleter()
	{
		return callObjectMethod(
			"getCompleter",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	jint CountedCompleter::getPendingCount()
	{
		return callMethod<jint>(
			"getPendingCount",
			"()I"
		);
	}
	JObject CountedCompleter::getRawResult()
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::getRoot()
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::helpComplete(jint arg0)
	{
		callMethod<void>(
			"helpComplete",
			"(I)V",
			arg0
		);
	}
	java::util::concurrent::CountedCompleter CountedCompleter::nextComplete()
	{
		return callObjectMethod(
			"nextComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::onCompletion(java::util::concurrent::CountedCompleter arg0)
	{
		callMethod<void>(
			"onCompletion",
			"(Ljava/util/concurrent/CountedCompleter;)V",
			arg0.object()
		);
	}
	jboolean CountedCompleter::onExceptionalCompletion(JThrowable arg0, java::util::concurrent::CountedCompleter arg1)
	{
		return callMethod<jboolean>(
			"onExceptionalCompletion",
			"(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z",
			arg0.object<jthrowable>(),
			arg1.object()
		);
	}
	void CountedCompleter::propagateCompletion()
	{
		callMethod<void>(
			"propagateCompletion",
			"()V"
		);
	}
	void CountedCompleter::quietlyCompleteRoot()
	{
		callMethod<void>(
			"quietlyCompleteRoot",
			"()V"
		);
	}
	void CountedCompleter::setPendingCount(jint arg0)
	{
		callMethod<void>(
			"setPendingCount",
			"(I)V",
			arg0
		);
	}
	void CountedCompleter::tryComplete()
	{
		callMethod<void>(
			"tryComplete",
			"()V"
		);
	}
} // namespace java::util::concurrent

