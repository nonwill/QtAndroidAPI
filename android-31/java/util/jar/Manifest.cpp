#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/StringBuffer.hpp"
#include "./Attributes.hpp"
#include "./Manifest.hpp"

namespace java::util::jar
{
	// Fields
	
	// QJniObject forward
	Manifest::Manifest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Manifest::Manifest()
		: JObject(
			"java.util.jar.Manifest",
			"()V"
		) {}
	Manifest::Manifest(java::io::InputStream arg0)
		: JObject(
			"java.util.jar.Manifest",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	Manifest::Manifest(java::util::jar::Manifest &arg0)
		: JObject(
			"java.util.jar.Manifest",
			"(Ljava/util/jar/Manifest;)V",
			arg0.object()
		) {}
	
	// Methods
	void Manifest::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JObject Manifest::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean Manifest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::jar::Attributes Manifest::getAttributes(JString arg0)
	{
		return callObjectMethod(
			"getAttributes",
			"(Ljava/lang/String;)Ljava/util/jar/Attributes;",
			arg0.object<jstring>()
		);
	}
	JObject Manifest::getEntries()
	{
		return callObjectMethod(
			"getEntries",
			"()Ljava/util/Map;"
		);
	}
	java::util::jar::Attributes Manifest::getMainAttributes()
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jint Manifest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Manifest::read(java::io::InputStream arg0)
	{
		callMethod<void>(
			"read",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void Manifest::write(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace java::util::jar

