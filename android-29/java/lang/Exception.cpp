#include "./Exception.hpp"

namespace java::lang
{
	// Fields
	
	Exception::Exception(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Exception::Exception()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"()V"
		);
	}
	Exception::Exception(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Exception::Exception(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Exception::Exception(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	Exception::Exception(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	Exception::Exception(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

