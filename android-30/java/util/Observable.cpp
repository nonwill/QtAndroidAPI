#include "../../JObject.hpp"
#include "./Vector.hpp"
#include "./Observable.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Observable::Observable(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Observable::Observable()
		: JObject(
			"java.util.Observable",
			"()V"
		) {}
	
	// Methods
	void Observable::addObserver(JObject arg0)
	{
		callMethod<void>(
			"addObserver",
			"(Ljava/util/Observer;)V",
			arg0.object()
		);
	}
	jint Observable::countObservers()
	{
		return callMethod<jint>(
			"countObservers",
			"()I"
		);
	}
	void Observable::deleteObserver(JObject arg0)
	{
		callMethod<void>(
			"deleteObserver",
			"(Ljava/util/Observer;)V",
			arg0.object()
		);
	}
	void Observable::deleteObservers()
	{
		callMethod<void>(
			"deleteObservers",
			"()V"
		);
	}
	jboolean Observable::hasChanged()
	{
		return callMethod<jboolean>(
			"hasChanged",
			"()Z"
		);
	}
	void Observable::notifyObservers()
	{
		callMethod<void>(
			"notifyObservers",
			"()V"
		);
	}
	void Observable::notifyObservers(JObject arg0)
	{
		callMethod<void>(
			"notifyObservers",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace java::util

