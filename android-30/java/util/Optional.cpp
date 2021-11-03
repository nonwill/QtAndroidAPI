#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Optional.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Optional::Optional(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Optional Optional::empty()
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"empty",
			"()Ljava/util/Optional;"
		);
	}
	java::util::Optional Optional::of(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"of",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Optional::ofNullable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"ofNullable",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0.object<jobject>()
		);
	}
	jboolean Optional::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Optional::filter(JObject arg0)
	{
		return callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	java::util::Optional Optional::flatMap(JObject arg0)
	{
		return callObjectMethod(
			"flatMap",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	JObject Optional::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	jint Optional::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Optional::ifPresent(JObject arg0)
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	void Optional::ifPresentOrElse(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Optional::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Optional::isPresent()
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	java::util::Optional Optional::map(JObject arg0)
	{
		return callObjectMethod(
			"map",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	java::util::Optional Optional::_or(JObject arg0)
	{
		return callObjectMethod(
			"or",
			"(Ljava/util/function/Supplier;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	JObject Optional::orElse(JObject arg0)
	{
		return callObjectMethod(
			"orElse",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject Optional::orElseGet(JObject arg0)
	{
		return callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject Optional::orElseThrow()
	{
		return callObjectMethod(
			"orElseThrow",
			"()Ljava/lang/Object;"
		);
	}
	JObject Optional::orElseThrow(JObject arg0)
	{
		return callObjectMethod(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject Optional::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	JString Optional::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

