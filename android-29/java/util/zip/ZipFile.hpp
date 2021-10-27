#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::util::jar
{
	class JarEntry;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}

namespace __jni_impl::java::util::zip
{
	class ZipFile : public __JniBaseClass
	{
	public:
		// Fields
		static jint OPEN_DELETE();
		static jint OPEN_READ();
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::io::File arg0, jint arg1);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::File arg0, jint arg1, __jni_impl::java::nio::charset::Charset arg2);
		
		// Methods
		void close();
		QAndroidJniObject entries();
		jstring getComment();
		QAndroidJniObject getEntry(jstring arg0);
		QAndroidJniObject getEntry(const QString &arg0);
		QAndroidJniObject getInputStream(__jni_impl::java::util::zip::ZipEntry arg0);
		jstring getName();
		jint size();
		QAndroidJniObject stream();
	};
} // namespace __jni_impl::java::util::zip

#include "../../io/File.hpp"
#include "../../io/InputStream.hpp"
#include "../../nio/charset/Charset.hpp"
#include "../jar/JarEntry.hpp"
#include "./ZipEntry.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	jint ZipFile::OPEN_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipFile",
			"OPEN_DELETE"
		);
	}
	jint ZipFile::OPEN_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipFile",
			"OPEN_READ"
		);
	}
	
	// Constructors
	void ZipFile::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void ZipFile::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipFile::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ZipFile::__constructor(__jni_impl::java::io::File arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ZipFile::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ZipFile::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ZipFile::__constructor(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ZipFile::__constructor(__jni_impl::java::io::File arg0, jint arg1, __jni_impl::java::nio::charset::Charset arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;ILjava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void ZipFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ZipFile::entries()
	{
		return __thiz.callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring ZipFile::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ZipFile::getEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0
		);
	}
	QAndroidJniObject ZipFile::getEntry(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ZipFile::getInputStream(__jni_impl::java::util::zip::ZipEntry arg0)
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
	jstring ZipFile::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZipFile::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ZipFile::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipFile : public __jni_impl::java::util::zip::ZipFile
	{
	public:
		ZipFile(QAndroidJniObject obj) { __thiz = obj; }
		ZipFile(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		ZipFile(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ZipFile(__jni_impl::java::io::File arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ZipFile(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ZipFile(jstring arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ZipFile(__jni_impl::java::io::File arg0, jint arg1, __jni_impl::java::nio::charset::Charset arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::zip

