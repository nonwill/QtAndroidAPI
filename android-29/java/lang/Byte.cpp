#include "../util/Optional.hpp"
#include "./Byte.hpp"

namespace java::lang
{
	// Fields
	jint Byte::BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Byte",
			"BYTES"
		);
	}
	jbyte Byte::MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Byte",
			"MAX_VALUE"
		);
	}
	jbyte Byte::MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jbyte>(
			"java.lang.Byte",
			"MIN_VALUE"
		);
	}
	jint Byte::SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.lang.Byte",
			"SIZE"
		);
	}
	jclass Byte::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Byte",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	Byte::Byte(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Byte::Byte(jbyte &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Byte",
			"(B)V",
			arg0
		);
	}
	Byte::Byte(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Byte",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Byte::Byte(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.Byte",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Byte::compare(jbyte arg0, jbyte arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Byte",
			"compare",
			"(BB)I",
			arg0,
			arg1
		);
	}
	jint Byte::compareUnsigned(jbyte arg0, jbyte arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Byte",
			"compareUnsigned",
			"(BB)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Byte::decode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	QAndroidJniObject Byte::decode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Byte::hashCode(jbyte arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Byte",
			"hashCode",
			"(B)I",
			arg0
		);
	}
	jbyte Byte::parseByte(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;)B",
			arg0
		);
	}
	jbyte Byte::parseByte(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;)B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyte Byte::parseByte(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;I)B",
			arg0,
			arg1
		);
	}
	jbyte Byte::parseByte(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jbyte>(
			"java.lang.Byte",
			"parseByte",
			"(Ljava/lang/String;I)B",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring Byte::toString(jbyte arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"toString",
			"(B)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Byte::toUnsignedInt(jbyte arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.Byte",
			"toUnsignedInt",
			"(B)I",
			arg0
		);
	}
	jlong Byte::toUnsignedLong(jbyte arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.Byte",
			"toUnsignedLong",
			"(B)J",
			arg0
		);
	}
	QAndroidJniObject Byte::valueOf(jbyte arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(B)Ljava/lang/Byte;",
			arg0
		);
	}
	QAndroidJniObject Byte::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	QAndroidJniObject Byte::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Byte::valueOf(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Byte;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Byte::valueOf(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Byte",
			"valueOf",
			"(Ljava/lang/String;I)Ljava/lang/Byte;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jbyte Byte::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B"
		);
	}
	jint Byte::compareTo(java::lang::Byte arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Byte;)I",
			arg0.__jniObject().object()
		);
	}
	jint Byte::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject Byte::describeConstable()
	{
		return __thiz.callObjectMethod(
			"describeConstable",
			"()Ljava/util/Optional;"
		);
	}
	jdouble Byte::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D"
		);
	}
	jboolean Byte::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat Byte::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F"
		);
	}
	jint Byte::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Byte::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jlong Byte::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J"
		);
	}
	jshort Byte::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S"
		);
	}
	jstring Byte::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang
