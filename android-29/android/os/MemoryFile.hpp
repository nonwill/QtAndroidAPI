#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::android::os
{
	class MemoryFile : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		jboolean allowPurging(jboolean arg0);
		void close();
		QAndroidJniObject getInputStream();
		QAndroidJniObject getOutputStream();
		jboolean isPurgingAllowed();
		jint length();
		jint readBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		void writeBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::os

#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void MemoryFile::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.MemoryFile",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void MemoryFile::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.MemoryFile",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jboolean MemoryFile::allowPurging(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"allowPurging",
			"(Z)Z",
			arg0
		);
	}
	void MemoryFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MemoryFile::getInputStream()
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject MemoryFile::getOutputStream()
	{
		return __thiz.callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	jboolean MemoryFile::isPurgingAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isPurgingAllowed",
			"()Z"
		);
	}
	jint MemoryFile::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint MemoryFile::readBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"readBytes",
			"([BIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void MemoryFile::writeBytes(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"([BIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class MemoryFile : public __jni_impl::android::os::MemoryFile
	{
	public:
		MemoryFile(QAndroidJniObject obj) { __thiz = obj; }
		MemoryFile(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::os

