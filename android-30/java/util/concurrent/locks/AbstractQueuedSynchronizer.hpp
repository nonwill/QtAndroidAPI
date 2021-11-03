#pragma once

#include "./AbstractOwnableSynchronizer.hpp"

class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AbstractQueuedSynchronizer(const char *className, const char *sig, Ts...agv) : java::util::concurrent::locks::AbstractOwnableSynchronizer(className, sig, std::forward<Ts>(agv)...) {}
		AbstractQueuedSynchronizer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void acquire(jint arg0);
		void acquireInterruptibly(jint arg0);
		void acquireShared(jint arg0);
		void acquireSharedInterruptibly(jint arg0);
		JObject getExclusiveQueuedThreads();
		java::lang::Thread getFirstQueuedThread();
		jint getQueueLength();
		JObject getQueuedThreads();
		JObject getSharedQueuedThreads();
		jint getWaitQueueLength(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		JObject getWaitingThreads(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean hasContended();
		jboolean hasQueuedPredecessors();
		jboolean hasQueuedThreads();
		jboolean hasWaiters(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean isQueued(java::lang::Thread arg0);
		jboolean owns(java::util::concurrent::locks::AbstractQueuedSynchronizer_ConditionObject arg0);
		jboolean release(jint arg0);
		jboolean releaseShared(jint arg0);
		JString toString();
		jboolean tryAcquireNanos(jint arg0, jlong arg1);
		jboolean tryAcquireSharedNanos(jint arg0, jlong arg1);
	};
} // namespace java::util::concurrent::locks

