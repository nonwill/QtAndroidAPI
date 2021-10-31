#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Random.hpp"

namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class Thread;
}
namespace java::lang
{
	class ThreadLocal;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}

namespace java::util::concurrent
{
	class ThreadLocalRandom : public java::util::Random
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadLocalRandom(const char *className, const char *sig, Ts...agv) : java::util::Random(className, sig, std::forward<Ts>(agv)...) {}
		ThreadLocalRandom(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::ThreadLocalRandom current();
		__JniBaseClass doubles();
		__JniBaseClass doubles(jlong arg0);
		__JniBaseClass doubles(jdouble arg0, jdouble arg1);
		__JniBaseClass doubles(jlong arg0, jdouble arg1, jdouble arg2);
		__JniBaseClass ints();
		__JniBaseClass ints(jlong arg0);
		__JniBaseClass ints(jint arg0, jint arg1);
		__JniBaseClass ints(jlong arg0, jint arg1, jint arg2);
		__JniBaseClass longs();
		__JniBaseClass longs(jlong arg0);
		__JniBaseClass longs(jlong arg0, jlong arg1);
		__JniBaseClass longs(jlong arg0, jlong arg1, jlong arg2);
		jboolean nextBoolean();
		jdouble nextDouble();
		jdouble nextDouble(jdouble arg0);
		jdouble nextDouble(jdouble arg0, jdouble arg1);
		jfloat nextFloat();
		jdouble nextGaussian();
		jint nextInt();
		jint nextInt(jint arg0);
		jint nextInt(jint arg0, jint arg1);
		jlong nextLong();
		jlong nextLong(jlong arg0);
		jlong nextLong(jlong arg0, jlong arg1);
		void setSeed(jlong arg0);
	};
} // namespace java::util::concurrent
