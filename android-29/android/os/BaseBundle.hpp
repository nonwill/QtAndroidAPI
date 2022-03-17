#pragma once

#include "../../JDoubleArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./PersistableBundle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BaseBundle.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void BaseBundle::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jboolean BaseBundle::containsKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject BaseBundle::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jboolean BaseBundle::getBoolean(JString arg0) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean BaseBundle::getBoolean(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JBooleanArray BaseBundle::getBooleanArray(JString arg0) const
	{
		return callObjectMethod(
			"getBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0.object<jstring>()
		);
	}
	inline jdouble BaseBundle::getDouble(JString arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline jdouble BaseBundle::getDouble(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JDoubleArray BaseBundle::getDoubleArray(JString arg0) const
	{
		return callObjectMethod(
			"getDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0.object<jstring>()
		);
	}
	inline jint BaseBundle::getInt(JString arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint BaseBundle::getInt(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JIntArray BaseBundle::getIntArray(JString arg0) const
	{
		return callObjectMethod(
			"getIntArray",
			"(Ljava/lang/String;)[I",
			arg0.object<jstring>()
		);
	}
	inline jlong BaseBundle::getLong(JString arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong BaseBundle::getLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JLongArray BaseBundle::getLongArray(JString arg0) const
	{
		return callObjectMethod(
			"getLongArray",
			"(Ljava/lang/String;)[J",
			arg0.object<jstring>()
		);
	}
	inline JString BaseBundle::getString(JString arg0) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString BaseBundle::getString(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JArray BaseBundle::getStringArray(JString arg0) const
	{
		return callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline jboolean BaseBundle::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject BaseBundle::keySet() const
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	inline void BaseBundle::putAll(android::os::PersistableBundle arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	inline void BaseBundle::putBoolean(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void BaseBundle::putBooleanArray(JString arg0, JBooleanArray arg1) const
	{
		callMethod<void>(
			"putBooleanArray",
			"(Ljava/lang/String;[Z)V",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	inline void BaseBundle::putDouble(JString arg0, jdouble arg1) const
	{
		callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void BaseBundle::putDoubleArray(JString arg0, JDoubleArray arg1) const
	{
		callMethod<void>(
			"putDoubleArray",
			"(Ljava/lang/String;[D)V",
			arg0.object<jstring>(),
			arg1.object<jdoubleArray>()
		);
	}
	inline void BaseBundle::putInt(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void BaseBundle::putIntArray(JString arg0, JIntArray arg1) const
	{
		callMethod<void>(
			"putIntArray",
			"(Ljava/lang/String;[I)V",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		);
	}
	inline void BaseBundle::putLong(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void BaseBundle::putLongArray(JString arg0, JLongArray arg1) const
	{
		callMethod<void>(
			"putLongArray",
			"(Ljava/lang/String;[J)V",
			arg0.object<jstring>(),
			arg1.object<jlongArray>()
		);
	}
	inline void BaseBundle::putString(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void BaseBundle::putStringArray(JString arg0, JArray arg1) const
	{
		callMethod<void>(
			"putStringArray",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline void BaseBundle::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jint BaseBundle::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::os

// Base class headers

