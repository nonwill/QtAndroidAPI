#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.hpp"
#include "./Adler32.hpp"

namespace java::util::zip
{
	// Fields
	
	// QJniObject forward
	Adler32::Adler32(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Adler32::Adler32()
		: JObject(
			"java.util.zip.Adler32",
			"()V"
		) {}
	
	// Methods
	jlong Adler32::getValue()
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	void Adler32::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Adler32::update(jint arg0)
	{
		callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	void Adler32::update(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Adler32::update(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

