#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer;
}

namespace __jni_impl::java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer_ConditionObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer arg0);
		
		// Methods
		jboolean await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		void await();
		jlong awaitNanos(jlong arg0);
		void awaitUninterruptibly();
		jboolean awaitUntil(__jni_impl::java::util::Date arg0);
		void signal();
		void signalAll();
	};
} // namespace __jni_impl::java::util::concurrent::locks

#include "../../Date.hpp"
#include "../TimeUnit.hpp"
#include "AbstractQueuedLongSynchronizer.hpp"

namespace __jni_impl::java::util::concurrent::locks
{
	// Fields
	
	// Constructors
	void AbstractQueuedLongSynchronizer_ConditionObject::__constructor(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.locks.AbstractQueuedLongSynchronizer$ConditionObject",
			"(Ljava/util/concurrent/locks/AbstractQueuedLongSynchronizer;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::await(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"await",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::await()
	{
		__thiz.callMethod<void>(
			"await",
			"()V"
		);
	}
	jlong AbstractQueuedLongSynchronizer_ConditionObject::awaitNanos(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"awaitNanos",
			"(J)J",
			arg0
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::awaitUninterruptibly()
	{
		__thiz.callMethod<void>(
			"awaitUninterruptibly",
			"()V"
		);
	}
	jboolean AbstractQueuedLongSynchronizer_ConditionObject::awaitUntil(__jni_impl::java::util::Date arg0)
	{
		return __thiz.callMethod<jboolean>(
			"awaitUntil",
			"(Ljava/util/Date;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signal()
	{
		__thiz.callMethod<void>(
			"signal",
			"()V"
		);
	}
	void AbstractQueuedLongSynchronizer_ConditionObject::signalAll()
	{
		__thiz.callMethod<void>(
			"signalAll",
			"()V"
		);
	}
} // namespace __jni_impl::java::util::concurrent::locks

namespace java::util::concurrent::locks
{
	class AbstractQueuedLongSynchronizer_ConditionObject : public __jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ConditionObject
	{
	public:
		AbstractQueuedLongSynchronizer_ConditionObject(QAndroidJniObject obj) { __thiz = obj; }
		AbstractQueuedLongSynchronizer_ConditionObject(__jni_impl::java::util::concurrent::locks::AbstractQueuedLongSynchronizer arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent::locks

