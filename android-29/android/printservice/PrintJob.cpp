#include "../print/PrintJobId.hpp"
#include "../print/PrintJobInfo.hpp"
#include "./PrintDocument.hpp"
#include "./PrintJob.hpp"

namespace android::printservice
{
	// Fields
	
	PrintJob::PrintJob(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean PrintJob::block(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"block",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJob::block(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"block",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PrintJob::cancel()
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	jboolean PrintJob::complete()
	{
		return __thiz.callMethod<jboolean>(
			"complete",
			"()Z"
		);
	}
	jboolean PrintJob::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PrintJob::fail(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"fail",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJob::fail(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"fail",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint PrintJob::getAdvancedIntOption(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint PrintJob::getAdvancedIntOption(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PrintJob::getAdvancedStringOption(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring PrintJob::getAdvancedStringOption(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject PrintJob::getDocument()
	{
		return __thiz.callObjectMethod(
			"getDocument",
			"()Landroid/printservice/PrintDocument;"
		);
	}
	QAndroidJniObject PrintJob::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	QAndroidJniObject PrintJob::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	jstring PrintJob::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PrintJob::hasAdvancedOption(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJob::hasAdvancedOption(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint PrintJob::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrintJob::isBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	jboolean PrintJob::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean PrintJob::isCompleted()
	{
		return __thiz.callMethod<jboolean>(
			"isCompleted",
			"()Z"
		);
	}
	jboolean PrintJob::isFailed()
	{
		return __thiz.callMethod<jboolean>(
			"isFailed",
			"()Z"
		);
	}
	jboolean PrintJob::isQueued()
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"()Z"
		);
	}
	jboolean PrintJob::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void PrintJob::setProgress(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setProgress",
			"(F)V",
			arg0
		);
	}
	void PrintJob::setStatus(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(I)V",
			arg0
		);
	}
	void PrintJob::setStatus(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void PrintJob::setStatus(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PrintJob::setTag(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTag",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJob::setTag(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTag",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean PrintJob::start()
	{
		return __thiz.callMethod<jboolean>(
			"start",
			"()Z"
		);
	}
} // namespace android::printservice
