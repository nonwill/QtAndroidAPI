#include "../../JLongArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Vector.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Vector::Vector(QAndroidJniObject obj) : java::util::AbstractList(obj) {}
	
	// Constructors
	Vector::Vector()
		: java::util::AbstractList(
			"java.util.Vector",
			"()V"
		) {}
	Vector::Vector(jint arg0)
		: java::util::AbstractList(
			"java.util.Vector",
			"(I)V",
			arg0
		) {}
	Vector::Vector(JObject arg0)
		: java::util::AbstractList(
			"java.util.Vector",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	Vector::Vector(jint arg0, jint arg1)
		: java::util::AbstractList(
			"java.util.Vector",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean Vector::add(JObject arg0)
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void Vector::add(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	jboolean Vector::addAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	jboolean Vector::addAll(jint arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	void Vector::addElement(JObject arg0)
	{
		callMethod<void>(
			"addElement",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	jint Vector::capacity()
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	void Vector::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject Vector::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean Vector::contains(JObject arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean Vector::containsAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void Vector::copyInto(JObjectArray arg0)
	{
		callMethod<void>(
			"copyInto",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	JObject Vector::elementAt(jint arg0)
	{
		return callObjectMethod(
			"elementAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject Vector::elements()
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	void Vector::ensureCapacity(jint arg0)
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	jboolean Vector::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Vector::firstElement()
	{
		return callObjectMethod(
			"firstElement",
			"()Ljava/lang/Object;"
		);
	}
	void Vector::forEach(JObject arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	JObject Vector::get(jint arg0)
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint Vector::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Vector::indexOf(JObject arg0)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Vector::indexOf(JObject arg0, jint arg1)
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Vector::insertElementAt(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"insertElementAt",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	jboolean Vector::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	JObject Vector::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject Vector::lastElement()
	{
		return callObjectMethod(
			"lastElement",
			"()Ljava/lang/Object;"
		);
	}
	jint Vector::lastIndexOf(JObject arg0)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Vector::lastIndexOf(JObject arg0, jint arg1)
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	JObject Vector::listIterator()
	{
		return callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	JObject Vector::listIterator(jint arg0)
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	jboolean Vector::remove(JObject arg0)
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Vector::remove(jint arg0)
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jboolean Vector::removeAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	void Vector::removeAllElements()
	{
		callMethod<void>(
			"removeAllElements",
			"()V"
		);
	}
	jboolean Vector::removeElement(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeElement",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	void Vector::removeElementAt(jint arg0)
	{
		callMethod<void>(
			"removeElementAt",
			"(I)V",
			arg0
		);
	}
	jboolean Vector::removeIf(JObject arg0)
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	void Vector::replaceAll(JObject arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.object()
		);
	}
	jboolean Vector::retainAll(JObject arg0)
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	JObject Vector::set(jint arg0, JObject arg1)
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	void Vector::setElementAt(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"setElementAt",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Vector::setSize(jint arg0)
	{
		callMethod<void>(
			"setSize",
			"(I)V",
			arg0
		);
	}
	jint Vector::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void Vector::sort(JObject arg0)
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
	JObject Vector::spliterator()
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	JObject Vector::subList(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObjectArray Vector::toArray()
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	JObjectArray Vector::toArray(JObjectArray arg0)
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	JString Vector::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Vector::trimToSize()
	{
		callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::util

