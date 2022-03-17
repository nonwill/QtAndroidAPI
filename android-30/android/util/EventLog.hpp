#pragma once

#include "../../JIntArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JString.hpp"
#include "./EventLog.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint EventLog::getTagCode(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"getTagCode",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString EventLog::getTagName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.util.EventLog",
			"getTagName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline void EventLog::readEvents(JIntArray arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.util.EventLog",
			"readEvents",
			"([ILjava/util/Collection;)V",
			arg0.object<jintArray>(),
			arg1.object()
		);
	}
	inline jint EventLog::writeEvent(jint arg0, JObjectArray arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(I[Ljava/lang/Object;)I",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	inline jint EventLog::writeEvent(jint arg0, jfloat arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(IF)I",
			arg0,
			arg1
		);
	}
	inline jint EventLog::writeEvent(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint EventLog::writeEvent(jint arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(ILjava/lang/String;)I",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline jint EventLog::writeEvent(jint arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(IJ)I",
			arg0,
			arg1
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
