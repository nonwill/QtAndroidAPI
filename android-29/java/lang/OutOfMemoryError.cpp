#include "./OutOfMemoryError.hpp"

namespace java::lang
{
	// Fields
	
	OutOfMemoryError::OutOfMemoryError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OutOfMemoryError::OutOfMemoryError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.OutOfMemoryError",
			"()V"
		);
	}
	OutOfMemoryError::OutOfMemoryError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	OutOfMemoryError::OutOfMemoryError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.OutOfMemoryError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

