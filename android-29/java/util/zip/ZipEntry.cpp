#include "../../nio/file/attribute/FileTime.hpp"
#include "../../time/LocalDateTime.hpp"
#include "./ZipEntry.hpp"

namespace java::util::zip
{
	// Fields
	jint ZipEntry::DEFLATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"DEFLATED"
		);
	}
	jint ZipEntry::STORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipEntry",
			"STORED"
		);
	}
	
	ZipEntry::ZipEntry(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipEntry::ZipEntry(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ZipEntry::ZipEntry(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ZipEntry::ZipEntry(java::util::zip::ZipEntry &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jobject ZipEntry::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring ZipEntry::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ZipEntry::getCompressedSize()
	{
		return __thiz.callMethod<jlong>(
			"getCompressedSize",
			"()J"
		);
	}
	jlong ZipEntry::getCrc()
	{
		return __thiz.callMethod<jlong>(
			"getCrc",
			"()J"
		);
	}
	QAndroidJniObject ZipEntry::getCreationTime()
	{
		return __thiz.callObjectMethod(
			"getCreationTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	jbyteArray ZipEntry::getExtra()
	{
		return __thiz.callObjectMethod(
			"getExtra",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject ZipEntry::getLastAccessTime()
	{
		return __thiz.callObjectMethod(
			"getLastAccessTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	QAndroidJniObject ZipEntry::getLastModifiedTime()
	{
		return __thiz.callObjectMethod(
			"getLastModifiedTime",
			"()Ljava/nio/file/attribute/FileTime;"
		);
	}
	jint ZipEntry::getMethod()
	{
		return __thiz.callMethod<jint>(
			"getMethod",
			"()I"
		);
	}
	jstring ZipEntry::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ZipEntry::getSize()
	{
		return __thiz.callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jlong ZipEntry::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	QAndroidJniObject ZipEntry::getTimeLocal()
	{
		return __thiz.callObjectMethod(
			"getTimeLocal",
			"()Ljava/time/LocalDateTime;"
		);
	}
	jint ZipEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ZipEntry::isDirectory()
	{
		return __thiz.callMethod<jboolean>(
			"isDirectory",
			"()Z"
		);
	}
	void ZipEntry::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipEntry::setComment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ZipEntry::setCompressedSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCompressedSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setCrc(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCrc",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject ZipEntry::setCreationTime(java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callObjectMethod(
			"setCreationTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.__jniObject().object()
		);
	}
	void ZipEntry::setExtra(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setExtra",
			"([B)V",
			arg0
		);
	}
	QAndroidJniObject ZipEntry::setLastAccessTime(java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callObjectMethod(
			"setLastAccessTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ZipEntry::setLastModifiedTime(java::nio::file::attribute::FileTime arg0)
	{
		return __thiz.callObjectMethod(
			"setLastModifiedTime",
			"(Ljava/nio/file/attribute/FileTime;)Ljava/util/zip/ZipEntry;",
			arg0.__jniObject().object()
		);
	}
	void ZipEntry::setMethod(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipEntry::setSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void ZipEntry::setTimeLocal(java::time::LocalDateTime arg0)
	{
		__thiz.callMethod<void>(
			"setTimeLocal",
			"(Ljava/time/LocalDateTime;)V",
			arg0.__jniObject().object()
		);
	}
	jstring ZipEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::zip
