#include "../../java/lang/Number.hpp"
#include "./JSONArray.hpp"
#include "./JSONTokener.hpp"
#include "./JSONObject.hpp"

namespace org::json
{
	// Fields
	jobject JSONObject::_NULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.json.JSONObject",
			"NULL",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	JSONObject::JSONObject(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JSONObject::JSONObject()
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"()V"
		);
	}
	JSONObject::JSONObject(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	JSONObject::JSONObject(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	JSONObject::JSONObject(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	JSONObject::JSONObject(org::json::JSONTokener &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONTokener;)V",
			arg0.__jniObject().object()
		);
	}
	JSONObject::JSONObject(org::json::JSONObject &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.json.JSONObject",
			"(Lorg/json/JSONObject;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jstring JSONObject::numberToString(java::lang::Number arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"numberToString",
			"(Ljava/lang/Number;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring JSONObject::quote(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONObject::quote(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"quote",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jobject JSONObject::wrap(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"org.json.JSONObject",
			"wrap",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject JSONObject::accumulate(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"accumulate",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::accumulate(const QString &arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"accumulate",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jobject JSONObject::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject JSONObject::get(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jboolean JSONObject::getBoolean(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::getBoolean(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jdouble JSONObject::getDouble(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble JSONObject::getDouble(const QString &arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(Ljava/lang/String;)D",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint JSONObject::getInt(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint JSONObject::getInt(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JSONObject::getJSONArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::getJSONArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JSONObject::getJSONObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::getJSONObject(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong JSONObject::getLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong JSONObject::getLong(const QString &arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring JSONObject::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONObject::getString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jboolean JSONObject::has(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"has",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::has(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"has",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean JSONObject::isNull(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::isNull(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JSONObject::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Iterator;"
		);
	}
	jint JSONObject::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	QAndroidJniObject JSONObject::names()
	{
		return __thiz.callObjectMethod(
			"names",
			"()Lorg/json/JSONArray;"
		);
	}
	jobject JSONObject::opt(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"opt",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject JSONObject::opt(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"opt",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jboolean JSONObject::optBoolean(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean JSONObject::optBoolean(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean JSONObject::optBoolean(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jboolean JSONObject::optBoolean(const QString &arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"optBoolean",
			"(Ljava/lang/String;Z)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jdouble JSONObject::optDouble(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble JSONObject::optDouble(const QString &arg0)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;)D",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jdouble JSONObject::optDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jdouble JSONObject::optDouble(const QString &arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"optDouble",
			"(Ljava/lang/String;D)D",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint JSONObject::optInt(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint JSONObject::optInt(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint JSONObject::optInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jint JSONObject::optInt(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"optInt",
			"(Ljava/lang/String;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject JSONObject::optJSONArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::optJSONArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONArray",
			"(Ljava/lang/String;)Lorg/json/JSONArray;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JSONObject::optJSONObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			arg0
		);
	}
	QAndroidJniObject JSONObject::optJSONObject(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"optJSONObject",
			"(Ljava/lang/String;)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong JSONObject::optLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong JSONObject::optLong(const QString &arg0)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;)J",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong JSONObject::optLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlong JSONObject::optLong(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"optLong",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring JSONObject::optString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring JSONObject::optString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring JSONObject::optString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring JSONObject::optString(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"optString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;Z)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(const QString &arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;Z)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;D)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(const QString &arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;D)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;I)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;I)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(const QString &arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;J)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::put(const QString &arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/String;J)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject JSONObject::putOpt(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putOpt",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject JSONObject::putOpt(const QString &arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"putOpt",
			"(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jobject JSONObject::remove(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject JSONObject::remove(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject JSONObject::toJSONArray(org::json::JSONArray arg0)
	{
		return __thiz.callObjectMethod(
			"toJSONArray",
			"(Lorg/json/JSONArray;)Lorg/json/JSONArray;",
			arg0.__jniObject().object()
		);
	}
	jstring JSONObject::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring JSONObject::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace org::json
