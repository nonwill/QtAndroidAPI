#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../StringBuilder.def.hpp"
#include "./AccessibleObject.def.hpp"
#include "./Constructor.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Constructor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Constructor::getAnnotatedReceiverType() const
	{
		return callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Constructor::getAnnotatedReturnType() const
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	inline JObject Constructor::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	inline JArray Constructor::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	inline JClass Constructor::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	inline JArray Constructor::getExceptionTypes() const
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	inline JArray Constructor::getGenericExceptionTypes() const
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	inline JArray Constructor::getGenericParameterTypes() const
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	inline jint Constructor::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	inline JString Constructor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JArray Constructor::getParameterAnnotations() const
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	inline jint Constructor::getParameterCount() const
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	inline JArray Constructor::getParameterTypes() const
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	inline JArray Constructor::getTypeParameters() const
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
	}
	inline jint Constructor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Constructor::isSynthetic() const
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	inline jboolean Constructor::isVarArgs() const
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	inline JObject Constructor::newInstance(JObjectArray arg0) const
	{
		return callObjectMethod(
			"newInstance",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline void Constructor::setAccessible(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	inline JString Constructor::toGenericString() const
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Constructor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

// Base class headers
#include "./AccessibleObject.hpp"
#include "./Executable.hpp"

