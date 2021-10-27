#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./AbstractOwnableSynchronizer.hpp"

namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer_ConditionObject;
}

namespace java::util::concurrent::locks
{
	class AbstractQueuedSynchronizer : public java::util::concurrent::locks::AbstractOwnableSynchronizer
	{
	public:
		// Fields
		
		AbstractQueuedSynchronizer(QAndroidJniObject obj);
		// Constructors
		AbstractQueuedSynchronizer() = default;
		
		// Methods
		void acquire(jint arg0);
		void acquireInterruptibly(jint arg0);
		void acquireShared(jint arg0);
		void acquireSharedInterruptibly(jint arg0);
		QAndroidJniObject getExclusiveQueuedThreads();
		QAndroidJniObject getFirstQueuedThread();
		jint getQueueLength();
		QAndroidJniObject getQueuedThreads();
		QAndroidJniObject getSharedQueuedThreads();
		jint getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		QAndroidJniObject getWaitingThreads(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean hasContended();
		jboolean hasQueuedPredecessors();
		jboolean hasQueuedThreads();
		jboolean hasWaiters(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean isQueued(java::lang::Thread arg0);
		jboolean owns(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean release(jint arg0);
		jboolean releaseShared(jint arg0);
		jstring toString();
		jboolean tryAcquireNanos(jint arg0, jlong arg1);
		jboolean tryAcquireSharedNanos(jint arg0, jlong arg1);
	};
} // namespace java::util::concurrent::locks

