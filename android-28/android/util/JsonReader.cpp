#include "./JsonToken.hpp"
#include "../../java/io/Reader.hpp"
#include "./JsonReader.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	JsonReader::JsonReader(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	JsonReader::JsonReader(java::io::Reader arg0)
		: __JniBaseClass(
			"android.util.JsonReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	void JsonReader::beginArray()
	{
		callMethod<void>(
			"beginArray",
			"()V"
		);
	}
	void JsonReader::beginObject()
	{
		callMethod<void>(
			"beginObject",
			"()V"
		);
	}
	void JsonReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void JsonReader::endArray()
	{
		callMethod<void>(
			"endArray",
			"()V"
		);
	}
	void JsonReader::endObject()
	{
		callMethod<void>(
			"endObject",
			"()V"
		);
	}
	jboolean JsonReader::hasNext()
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jboolean JsonReader::isLenient()
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jboolean JsonReader::nextBoolean()
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jdouble JsonReader::nextDouble()
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jint JsonReader::nextInt()
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jlong JsonReader::nextLong()
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jstring JsonReader::nextName()
	{
		return callObjectMethod(
			"nextName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JsonReader::nextNull()
	{
		callMethod<void>(
			"nextNull",
			"()V"
		);
	}
	jstring JsonReader::nextString()
	{
		return callObjectMethod(
			"nextString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::util::JsonToken JsonReader::peek()
	{
		return callObjectMethod(
			"peek",
			"()Landroid/util/JsonToken;"
		);
	}
	void JsonReader::setLenient(jboolean arg0)
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void JsonReader::skipValue()
	{
		callMethod<void>(
			"skipValue",
			"()V"
		);
	}
	jstring JsonReader::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

