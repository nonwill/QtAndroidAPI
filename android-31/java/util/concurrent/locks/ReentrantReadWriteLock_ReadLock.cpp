#include "../../../../JString.hpp"
#include "../TimeUnit.hpp"
#include "./ReentrantReadWriteLock.hpp"
#include "./ReentrantReadWriteLock_ReadLock.hpp"

namespace java::util::concurrent::locks
{
	// Fields
	
	// QJniObject forward
	ReentrantReadWriteLock_ReadLock::ReentrantReadWriteLock_ReadLock(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ReentrantReadWriteLock_ReadLock::lock()
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	void ReentrantReadWriteLock_ReadLock::lockInterruptibly()
	{
		callMethod<void>(
			"lockInterruptibly",
			"()V"
		);
	}
	JObject ReentrantReadWriteLock_ReadLock::newCondition()
	{
		return callObjectMethod(
			"newCondition",
			"()Ljava/util/concurrent/locks/Condition;"
		);
	}
	JString ReentrantReadWriteLock_ReadLock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	jboolean ReentrantReadWriteLock_ReadLock::tryLock()
	{
		return callMethod<jboolean>(
			"tryLock",
			"()Z"
		);
	}
	jboolean ReentrantReadWriteLock_ReadLock::tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callMethod<jboolean>(
			"tryLock",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.object()
		);
	}
	void ReentrantReadWriteLock_ReadLock::unlock()
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace java::util::concurrent::locks

