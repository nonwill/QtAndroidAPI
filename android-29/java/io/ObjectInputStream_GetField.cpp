#include "./ObjectStreamClass.hpp"
#include "./ObjectInputStream_GetField.hpp"

namespace java::io
{
	// Fields
	
	ObjectInputStream_GetField::ObjectInputStream_GetField(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ObjectInputStream_GetField::ObjectInputStream_GetField()
	{
		__thiz = QAndroidJniObject(
			"java.io.ObjectInputStream$GetField",
			"()V"
		);
	}
	
	// Methods
	jboolean ObjectInputStream_GetField::defaulted(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"defaulted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ObjectInputStream_GetField::defaulted(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"defaulted",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean ObjectInputStream_GetField::get(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean ObjectInputStream_GetField::get(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"get",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jbyte ObjectInputStream_GetField::get(jstring arg0, jbyte arg1)
	{
		return __thiz.callMethod<jbyte>(
			"get",
			"(Ljava/lang/String;B)B",
			arg0,
			arg1
		);
	}
	jbyte ObjectInputStream_GetField::get(const QString &arg0, jbyte arg1)
	{
		return __thiz.callMethod<jbyte>(
			"get",
			"(Ljava/lang/String;B)B",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jchar ObjectInputStream_GetField::get(jstring arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"get",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jchar ObjectInputStream_GetField::get(const QString &arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"get",
			"(Ljava/lang/String;C)C",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jdouble ObjectInputStream_GetField::get(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jdouble ObjectInputStream_GetField::get(const QString &arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"get",
			"(Ljava/lang/String;D)D",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jfloat ObjectInputStream_GetField::get(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jfloat ObjectInputStream_GetField::get(const QString &arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(Ljava/lang/String;F)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint ObjectInputStream_GetField::get(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint ObjectInputStream_GetField::get(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jobject ObjectInputStream_GetField::get(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject ObjectInputStream_GetField::get(const QString &arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jobject>();
	}
	jlong ObjectInputStream_GetField::get(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlong ObjectInputStream_GetField::get(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"get",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jshort ObjectInputStream_GetField::get(jstring arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"get",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	jshort ObjectInputStream_GetField::get(const QString &arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"get",
			"(Ljava/lang/String;S)S",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ObjectInputStream_GetField::getObjectStreamClass()
	{
		return __thiz.callObjectMethod(
			"getObjectStreamClass",
			"()Ljava/io/ObjectStreamClass;"
		);
	}
} // namespace java::io
