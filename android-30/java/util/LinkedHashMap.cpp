#include "../io/ObjectOutputStream.hpp"
#include "./LinkedHashMap.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	LinkedHashMap::LinkedHashMap(QAndroidJniObject obj) : java::util::HashMap(obj) {}
	
	// Constructors
	LinkedHashMap::LinkedHashMap()
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"()V"
		) {}
	LinkedHashMap::LinkedHashMap(jint arg0)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(I)V",
			arg0
		) {}
	LinkedHashMap::LinkedHashMap(__JniBaseClass arg0)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		) {}
	LinkedHashMap::LinkedHashMap(jint arg0, jfloat arg1)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(IF)V",
			arg0,
			arg1
		) {}
	LinkedHashMap::LinkedHashMap(jint arg0, jfloat arg1, jboolean arg2)
		: java::util::HashMap(
			"java.util.LinkedHashMap",
			"(IFZ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	void LinkedHashMap::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean LinkedHashMap::containsValue(jobject arg0)
	{
		return callMethod<jboolean>(
			"containsValue",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass LinkedHashMap::entrySet()
	{
		return callObjectMethod(
			"entrySet",
			"()Ljava/util/Set;"
		);
	}
	void LinkedHashMap::forEach(__JniBaseClass arg0)
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/BiConsumer;)V",
			arg0.object()
		);
	}
	jobject LinkedHashMap::get(jobject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject LinkedHashMap::getOrDefault(jobject arg0, jobject arg1)
	{
		return callObjectMethod(
			"getOrDefault",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	__JniBaseClass LinkedHashMap::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void LinkedHashMap::replaceAll(__JniBaseClass arg0)
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/BiFunction;)V",
			arg0.object()
		);
	}
	__JniBaseClass LinkedHashMap::values()
	{
		return callObjectMethod(
			"values",
			"()Ljava/util/Collection;"
		);
	}
} // namespace java::util
