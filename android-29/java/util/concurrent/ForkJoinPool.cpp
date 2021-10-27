#include "../../lang/RuntimePermission.hpp"
#include "../../security/AccessControlContext.hpp"
#include "./CountedCompleter.hpp"
#include "./ForkJoinTask.hpp"
#include "./ForkJoinWorkerThread.hpp"
#include "./TimeUnit.hpp"
#include "./ForkJoinPool.hpp"

namespace java::util::concurrent
{
	// Fields
	QAndroidJniObject ForkJoinPool::defaultForkJoinWorkerThreadFactory()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.concurrent.ForkJoinPool",
			"defaultForkJoinWorkerThreadFactory",
			"Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;"
		);
	}
	
	ForkJoinPool::ForkJoinPool(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ForkJoinPool::ForkJoinPool()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"()V"
		);
	}
	ForkJoinPool::ForkJoinPool(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"(I)V",
			arg0
		);
	}
	ForkJoinPool::ForkJoinPool(jint &arg0, __JniBaseClass &arg1, __JniBaseClass &arg2, jboolean &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	ForkJoinPool::ForkJoinPool(jint &arg0, __JniBaseClass &arg1, __JniBaseClass &arg2, jboolean &arg3, jint &arg4, jint &arg5, jint &arg6, __JniBaseClass &arg7, jlong &arg8, java::util::concurrent::TimeUnit &arg9)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ForkJoinPool",
			"(ILjava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;Ljava/lang/Thread$UncaughtExceptionHandler;ZIIILjava/util/function/Predicate;JLjava/util/concurrent/TimeUnit;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8,
			arg9.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ForkJoinPool::commonPool()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.concurrent.ForkJoinPool",
			"commonPool",
			"()Ljava/util/concurrent/ForkJoinPool;"
		);
	}
	jint ForkJoinPool::getCommonPoolParallelism()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.util.concurrent.ForkJoinPool",
			"getCommonPoolParallelism",
			"()I"
		);
	}
	void ForkJoinPool::managedBlock(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.concurrent.ForkJoinPool",
			"managedBlock",
			"(Ljava/util/concurrent/ForkJoinPool$ManagedBlocker;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ForkJoinPool::awaitQuiescence(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitQuiescence",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ForkJoinPool::awaitTermination(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ForkJoinPool::execute(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void ForkJoinPool::execute(java::util::concurrent::ForkJoinTask arg0)
	{
		__thiz.callMethod<void>(
			"execute",
			"(Ljava/util/concurrent/ForkJoinTask;)V",
			arg0.__jniObject().object()
		);
	}
	jint ForkJoinPool::getActiveThreadCount()
	{
		return __thiz.callMethod<jint>(
			"getActiveThreadCount",
			"()I"
		);
	}
	jboolean ForkJoinPool::getAsyncMode()
	{
		return __thiz.callMethod<jboolean>(
			"getAsyncMode",
			"()Z"
		);
	}
	QAndroidJniObject ForkJoinPool::getFactory()
	{
		return __thiz.callObjectMethod(
			"getFactory",
			"()Ljava/util/concurrent/ForkJoinPool$ForkJoinWorkerThreadFactory;"
		);
	}
	jint ForkJoinPool::getParallelism()
	{
		return __thiz.callMethod<jint>(
			"getParallelism",
			"()I"
		);
	}
	jint ForkJoinPool::getPoolSize()
	{
		return __thiz.callMethod<jint>(
			"getPoolSize",
			"()I"
		);
	}
	jint ForkJoinPool::getQueuedSubmissionCount()
	{
		return __thiz.callMethod<jint>(
			"getQueuedSubmissionCount",
			"()I"
		);
	}
	jlong ForkJoinPool::getQueuedTaskCount()
	{
		return __thiz.callMethod<jlong>(
			"getQueuedTaskCount",
			"()J"
		);
	}
	jint ForkJoinPool::getRunningThreadCount()
	{
		return __thiz.callMethod<jint>(
			"getRunningThreadCount",
			"()I"
		);
	}
	jlong ForkJoinPool::getStealCount()
	{
		return __thiz.callMethod<jlong>(
			"getStealCount",
			"()J"
		);
	}
	QAndroidJniObject ForkJoinPool::getUncaughtExceptionHandler()
	{
		return __thiz.callObjectMethod(
			"getUncaughtExceptionHandler",
			"()Ljava/lang/Thread$UncaughtExceptionHandler;"
		);
	}
	jboolean ForkJoinPool::hasQueuedSubmissions()
	{
		return __thiz.callMethod<jboolean>(
			"hasQueuedSubmissions",
			"()Z"
		);
	}
	jobject ForkJoinPool::invoke(java::util::concurrent::ForkJoinTask arg0)
	{
		return __thiz.callObjectMethod(
			"invoke",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject ForkJoinPool::invokeAll(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"invokeAll",
			"(Ljava/util/Collection;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	jboolean ForkJoinPool::isQuiescent()
	{
		return __thiz.callMethod<jboolean>(
			"isQuiescent",
			"()Z"
		);
	}
	jboolean ForkJoinPool::isShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean ForkJoinPool::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jboolean ForkJoinPool::isTerminating()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminating",
			"()Z"
		);
	}
	void ForkJoinPool::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	QAndroidJniObject ForkJoinPool::shutdownNow()
	{
		return __thiz.callObjectMethod(
			"shutdownNow",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ForkJoinPool::submit(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ForkJoinPool::submit(java::util::concurrent::ForkJoinTask arg0)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/util/concurrent/ForkJoinTask;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ForkJoinPool::submit(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"submit",
			"(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/ForkJoinTask;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring ForkJoinPool::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent
