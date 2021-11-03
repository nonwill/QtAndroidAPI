#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuilder.hpp"
#include "../time/Instant.hpp"
#include "./Date.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Date::Date(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Date::Date()
		: JObject(
			"java.util.Date",
			"()V"
		) {}
	Date::Date(JString arg0)
		: JObject(
			"java.util.Date",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Date::Date(jlong arg0)
		: JObject(
			"java.util.Date",
			"(J)V",
			arg0
		) {}
	Date::Date(jint arg0, jint arg1, jint arg2)
		: JObject(
			"java.util.Date",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	Date::Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"java.util.Date",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	Date::Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"java.util.Date",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jlong Date::UTC(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return callStaticMethod<jlong>(
			"java.util.Date",
			"UTC",
			"(IIIIII)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	java::util::Date Date::from(java::time::Instant arg0)
	{
		return callStaticObjectMethod(
			"java.util.Date",
			"from",
			"(Ljava/time/Instant;)Ljava/util/Date;",
			arg0.object()
		);
	}
	jlong Date::parse(JString arg0)
	{
		return callStaticMethod<jlong>(
			"java.util.Date",
			"parse",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	jboolean Date::after(java::util::Date arg0)
	{
		return callMethod<jboolean>(
			"after",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	jboolean Date::before(java::util::Date arg0)
	{
		return callMethod<jboolean>(
			"before",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	JObject Date::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jint Date::compareTo(JObject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jint Date::compareTo(java::util::Date arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/util/Date;)I",
			arg0.object()
		);
	}
	jboolean Date::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Date::getDate()
	{
		return callMethod<jint>(
			"getDate",
			"()I"
		);
	}
	jint Date::getDay()
	{
		return callMethod<jint>(
			"getDay",
			"()I"
		);
	}
	jint Date::getHours()
	{
		return callMethod<jint>(
			"getHours",
			"()I"
		);
	}
	jint Date::getMinutes()
	{
		return callMethod<jint>(
			"getMinutes",
			"()I"
		);
	}
	jint Date::getMonth()
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint Date::getSeconds()
	{
		return callMethod<jint>(
			"getSeconds",
			"()I"
		);
	}
	jlong Date::getTime()
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jint Date::getTimezoneOffset()
	{
		return callMethod<jint>(
			"getTimezoneOffset",
			"()I"
		);
	}
	jint Date::getYear()
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jint Date::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Date::setDate(jint arg0)
	{
		callMethod<void>(
			"setDate",
			"(I)V",
			arg0
		);
	}
	void Date::setHours(jint arg0)
	{
		callMethod<void>(
			"setHours",
			"(I)V",
			arg0
		);
	}
	void Date::setMinutes(jint arg0)
	{
		callMethod<void>(
			"setMinutes",
			"(I)V",
			arg0
		);
	}
	void Date::setMonth(jint arg0)
	{
		callMethod<void>(
			"setMonth",
			"(I)V",
			arg0
		);
	}
	void Date::setSeconds(jint arg0)
	{
		callMethod<void>(
			"setSeconds",
			"(I)V",
			arg0
		);
	}
	void Date::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Date::setYear(jint arg0)
	{
		callMethod<void>(
			"setYear",
			"(I)V",
			arg0
		);
	}
	JString Date::toGMTString()
	{
		return callObjectMethod(
			"toGMTString",
			"()Ljava/lang/String;"
		);
	}
	java::time::Instant Date::toInstant()
	{
		return callObjectMethod(
			"toInstant",
			"()Ljava/time/Instant;"
		);
	}
	JString Date::toLocaleString()
	{
		return callObjectMethod(
			"toLocaleString",
			"()Ljava/lang/String;"
		);
	}
	JString Date::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

