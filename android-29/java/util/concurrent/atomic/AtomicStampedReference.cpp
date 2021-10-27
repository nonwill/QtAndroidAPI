#include "./AtomicStampedReference.hpp"

namespace java::util::concurrent::atomic
{
	// Fields
	
	AtomicStampedReference::AtomicStampedReference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AtomicStampedReference::AtomicStampedReference(jobject &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.atomic.AtomicStampedReference",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean AtomicStampedReference::attemptStamp(jobject arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"attemptStamp",
			"(Ljava/lang/Object;I)Z",
			arg0,
			arg1
		);
	}
	jboolean AtomicStampedReference::compareAndSet(jobject arg0, jobject arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jobject AtomicStampedReference::get(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject AtomicStampedReference::getReference()
	{
		return __thiz.callObjectMethod(
			"getReference",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint AtomicStampedReference::getStamp()
	{
		return __thiz.callMethod<jint>(
			"getStamp",
			"()I"
		);
	}
	void AtomicStampedReference::set(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	jboolean AtomicStampedReference::weakCompareAndSet(jobject arg0, jobject arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"weakCompareAndSet",
			"(Ljava/lang/Object;Ljava/lang/Object;II)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace java::util::concurrent::atomic
