#include "./StringIndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"()V"
		);
	}
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"(I)V",
			arg0
		);
	}
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StringIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang
