#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AccessibleObject.hpp"
#include "./Field.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	Field::Field(QAndroidJniObject obj) : java::lang::reflect::AccessibleObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Field::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Field::get(JObject arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject Field::getAnnotatedType()
	{
		return callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Field::getAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Field::getAnnotationsByType(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	jboolean Field::getBoolean(JObject arg0)
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jbyte Field::getByte(JObject arg0)
	{
		return callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/Object;)B",
			arg0.object<jobject>()
		);
	}
	jchar Field::getChar(JObject arg0)
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/Object;)C",
			arg0.object<jobject>()
		);
	}
	JArray Field::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JClass Field::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	jdouble Field::getDouble(JObject arg0)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/Object;)D",
			arg0.object<jobject>()
		);
	}
	jfloat Field::getFloat(JObject arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/Object;)F",
			arg0.object<jobject>()
		);
	}
	JObject Field::getGenericType()
	{
		return callObjectMethod(
			"getGenericType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jint Field::getInt(JObject arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	jlong Field::getLong(JObject arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/Object;)J",
			arg0.object<jobject>()
		);
	}
	jint Field::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	JString Field::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jshort Field::getShort(JObject arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/Object;)S",
			arg0.object<jobject>()
		);
	}
	JClass Field::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	jint Field::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Field::isEnumConstant()
	{
		return callMethod<jboolean>(
			"isEnumConstant",
			"()Z"
		);
	}
	jboolean Field::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	void Field::set(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	void Field::setAccessible(jboolean arg0)
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	void Field::setBoolean(JObject arg0, jboolean arg1)
	{
		callMethod<void>(
			"setBoolean",
			"(Ljava/lang/Object;Z)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setByte(JObject arg0, jbyte arg1)
	{
		callMethod<void>(
			"setByte",
			"(Ljava/lang/Object;B)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setChar(JObject arg0, jchar arg1)
	{
		callMethod<void>(
			"setChar",
			"(Ljava/lang/Object;C)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setDouble(JObject arg0, jdouble arg1)
	{
		callMethod<void>(
			"setDouble",
			"(Ljava/lang/Object;D)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setFloat(JObject arg0, jfloat arg1)
	{
		callMethod<void>(
			"setFloat",
			"(Ljava/lang/Object;F)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setInt(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"setInt",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setLong(JObject arg0, jlong arg1)
	{
		callMethod<void>(
			"setLong",
			"(Ljava/lang/Object;J)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void Field::setShort(JObject arg0, jshort arg1)
	{
		callMethod<void>(
			"setShort",
			"(Ljava/lang/Object;S)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	JString Field::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	JString Field::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

