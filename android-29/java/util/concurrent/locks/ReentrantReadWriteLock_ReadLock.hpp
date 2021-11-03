#pragma once

#include "../../../../JObject.hpp"

class JString;
namespace java::util::concurrent
{
	class TimeUnit;
}
namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock;
}

namespace java::util::concurrent::locks
{
	class ReentrantReadWriteLock_ReadLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReentrantReadWriteLock_ReadLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReentrantReadWriteLock_ReadLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void lock() const;
		void lockInterruptibly() const;
		JObject newCondition() const;
		JString toString() const;
		jboolean tryLock() const;
		jboolean tryLock(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void unlock() const;
	};
} // namespace java::util::concurrent::locks

