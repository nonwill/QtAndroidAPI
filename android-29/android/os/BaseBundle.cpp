#include "./PersistableBundle.hpp"
#include "./BaseBundle.hpp"

namespace android::os
{
	// Fields
	
	BaseBundle::BaseBundle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BaseBundle::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean BaseBundle::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BaseBundle::containsKey(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject BaseBundle::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject BaseBundle::get(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jboolean BaseBundle::getBoolean(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BaseBundle::getBoolean(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean BaseBundle::getBoolean(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean BaseBundle::getBoolean(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jbooleanArray BaseBundle::getBooleanArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBooleanArray",
			"(Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jbooleanArray BaseBundle::getBooleanArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getBooleanArray",
			"(Ljava/lang/String;)[Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbooleanArray>();
	}
	jdouble BaseBundle::getDouble(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble BaseBundle::getDouble(const QString &arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jdouble BaseBundle::getDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jdouble BaseBundle::getDouble(const QString &arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;D)D",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jdoubleArray BaseBundle::getDoubleArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDoubleArray",
			"(Ljava/lang/String;)[D",
			arg0
		).object<jdoubleArray>();
	}
	jdoubleArray BaseBundle::getDoubleArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDoubleArray",
			"(Ljava/lang/String;)[D",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jdoubleArray>();
	}
	jint BaseBundle::getInt(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint BaseBundle::getInt(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint BaseBundle::getInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint BaseBundle::getInt(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jintArray BaseBundle::getIntArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntArray",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jintArray BaseBundle::getIntArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getIntArray",
			"(Ljava/lang/String;)[I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jintArray>();
	}
	jlong BaseBundle::getLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong BaseBundle::getLong(const QString &arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong BaseBundle::getLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlong BaseBundle::getLong(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jlongArray BaseBundle::getLongArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLongArray",
			"(Ljava/lang/String;)[J",
			arg0
		).object<jlongArray>();
	}
	jlongArray BaseBundle::getLongArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getLongArray",
			"(Ljava/lang/String;)[J",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jlongArray>();
	}
	jstring BaseBundle::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring BaseBundle::getString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring BaseBundle::getString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BaseBundle::getString(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jarray BaseBundle::getStringArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray BaseBundle::getStringArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jboolean BaseBundle::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject BaseBundle::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void BaseBundle::putAll(android::os::PersistableBundle arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	void BaseBundle::putBoolean(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putBoolean(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"putBoolean",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putBooleanArray(jstring arg0, jbooleanArray arg1)
	{
		__thiz.callMethod<void>(
			"putBooleanArray",
			"(Ljava/lang/String;[Z)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putBooleanArray(const QString &arg0, jbooleanArray arg1)
	{
		__thiz.callMethod<void>(
			"putBooleanArray",
			"(Ljava/lang/String;[Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putDouble(jstring arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putDouble(const QString &arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"putDouble",
			"(Ljava/lang/String;D)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putDoubleArray(jstring arg0, jdoubleArray arg1)
	{
		__thiz.callMethod<void>(
			"putDoubleArray",
			"(Ljava/lang/String;[D)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putDoubleArray(const QString &arg0, jdoubleArray arg1)
	{
		__thiz.callMethod<void>(
			"putDoubleArray",
			"(Ljava/lang/String;[D)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putInt(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putInt(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"putInt",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putIntArray(jstring arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"putIntArray",
			"(Ljava/lang/String;[I)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putIntArray(const QString &arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"putIntArray",
			"(Ljava/lang/String;[I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putLong(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putLong(const QString &arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"putLong",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putLongArray(jstring arg0, jlongArray arg1)
	{
		__thiz.callMethod<void>(
			"putLongArray",
			"(Ljava/lang/String;[J)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putLongArray(const QString &arg0, jlongArray arg1)
	{
		__thiz.callMethod<void>(
			"putLongArray",
			"(Ljava/lang/String;[J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::putString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putString(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"putString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void BaseBundle::putStringArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putStringArray",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void BaseBundle::putStringArray(const QString &arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putStringArray",
			"(Ljava/lang/String;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void BaseBundle::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BaseBundle::remove(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint BaseBundle::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
} // namespace android::os
