#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Thread;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_WriteLock;
}

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReentrantReadWriteLock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantReadWriteLock(QAndroidJniObject obj);
		
		// Constructors
		ReentrantReadWriteLock();
		ReentrantReadWriteLock(jboolean arg0);
		
		// Methods
		jint getQueueLength();
		jint getReadHoldCount();
		jint getReadLockCount();
		jint getWaitQueueLength(__JniBaseClass arg0);
		jint getWriteHoldCount();
		jboolean hasQueuedThread(java::lang::Thread arg0);
		jboolean hasQueuedThreads();
		jboolean hasWaiters(__JniBaseClass arg0);
		jboolean isFair();
		jboolean isWriteLocked();
		jboolean isWriteLockedByCurrentThread();
		java::util::concurrent::locks::ReentrantReadWriteLock_ReadLock readLock();
		jstring toString();
		java::util::concurrent::locks::ReentrantReadWriteLock_WriteLock writeLock();
	};
} // namespace java::util::concurrent::locks

