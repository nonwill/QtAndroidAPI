#include "./FileSystemLoopException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystemLoopException::FileSystemLoopException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileSystemLoopException::FileSystemLoopException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileSystemLoopException::FileSystemLoopException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file
