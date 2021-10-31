#include "./EventLog.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	EventLog::EventLog(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint EventLog::getTagCode(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"getTagCode",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring EventLog::getTagName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.util.EventLog",
			"getTagName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void EventLog::readEvents(jintArray arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"android.util.EventLog",
			"readEvents",
			"([ILjava/util/Collection;)V",
			arg0,
			arg1.object()
		);
	}
	jint EventLog::writeEvent(jint arg0, jobjectArray arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(I[Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jfloat arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(IF)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jstring arg1)
	{
		return callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(ILjava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jlong arg1)
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

