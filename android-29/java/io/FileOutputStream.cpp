#include "./File.hpp"
#include "./FileDescriptor.hpp"
#include "../nio/channels/FileChannel.hpp"
#include "./FileOutputStream.hpp"

namespace java::io
{
	// Fields
	
	FileOutputStream::FileOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileOutputStream::FileOutputStream(java::io::File &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	FileOutputStream::FileOutputStream(java::io::FileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	FileOutputStream::FileOutputStream(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	FileOutputStream::FileOutputStream(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	FileOutputStream::FileOutputStream(java::io::File &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	FileOutputStream::FileOutputStream(jstring &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	FileOutputStream::FileOutputStream(const QString &arg0, jboolean &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileOutputStream",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	void FileOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileOutputStream::getChannel()
	{
		return __thiz.callObjectMethod(
			"getChannel",
			"()Ljava/nio/channels/FileChannel;"
		);
	}
	QAndroidJniObject FileOutputStream::getFD()
	{
		return __thiz.callObjectMethod(
			"getFD",
			"()Ljava/io/FileDescriptor;"
		);
	}
	void FileOutputStream::write(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void FileOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void FileOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io
