#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./ConcurrentLinkedDeque.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ConcurrentLinkedDeque::ConcurrentLinkedDeque(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConcurrentLinkedDeque::ConcurrentLinkedDeque()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"()V"
		);
	}
	ConcurrentLinkedDeque::ConcurrentLinkedDeque(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ConcurrentLinkedDeque",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean ConcurrentLinkedDeque::add(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentLinkedDeque::addAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	void ConcurrentLinkedDeque::addFirst(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addFirst",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ConcurrentLinkedDeque::addLast(jobject arg0)
	{
		__thiz.callMethod<void>(
			"addLast",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ConcurrentLinkedDeque::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ConcurrentLinkedDeque::contains(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ConcurrentLinkedDeque::descendingIterator()
	{
		return __thiz.callObjectMethod(
			"descendingIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jobject ConcurrentLinkedDeque::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ConcurrentLinkedDeque::forEach(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	jobject ConcurrentLinkedDeque::getFirst()
	{
		return __thiz.callObjectMethod(
			"getFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::getLast()
	{
		return __thiz.callObjectMethod(
			"getLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ConcurrentLinkedDeque::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject ConcurrentLinkedDeque::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jboolean ConcurrentLinkedDeque::offer(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offer",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentLinkedDeque::offerFirst(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerFirst",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentLinkedDeque::offerLast(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"offerLast",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ConcurrentLinkedDeque::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::peekFirst()
	{
		return __thiz.callObjectMethod(
			"peekFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::peekLast()
	{
		return __thiz.callObjectMethod(
			"peekLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::poll()
	{
		return __thiz.callObjectMethod(
			"poll",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::pollFirst()
	{
		return __thiz.callObjectMethod(
			"pollFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::pollLast()
	{
		return __thiz.callObjectMethod(
			"pollLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject ConcurrentLinkedDeque::pop()
	{
		return __thiz.callObjectMethod(
			"pop",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ConcurrentLinkedDeque::push(jobject arg0)
	{
		__thiz.callMethod<void>(
			"push",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jboolean ConcurrentLinkedDeque::remove(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ConcurrentLinkedDeque::remove()
	{
		return __thiz.callObjectMethod(
			"remove",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ConcurrentLinkedDeque::removeAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject ConcurrentLinkedDeque::removeFirst()
	{
		return __thiz.callObjectMethod(
			"removeFirst",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ConcurrentLinkedDeque::removeFirstOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeFirstOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentLinkedDeque::removeIf(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.__jniObject().object()
		);
	}
	jobject ConcurrentLinkedDeque::removeLast()
	{
		return __thiz.callObjectMethod(
			"removeLast",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ConcurrentLinkedDeque::removeLastOccurrence(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeLastOccurrence",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean ConcurrentLinkedDeque::retainAll(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.__jniObject().object()
		);
	}
	jint ConcurrentLinkedDeque::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ConcurrentLinkedDeque::spliterator()
	{
		return __thiz.callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	jobjectArray ConcurrentLinkedDeque::toArray()
	{
		return __thiz.callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jobjectArray ConcurrentLinkedDeque::toArray(jobjectArray arg0)
	{
		return __thiz.callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jstring ConcurrentLinkedDeque::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::concurrent
