#include "../../JByteArray.hpp"
#include "./InputStream.hpp"
#include "./FilterInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	FilterInputStream::FilterInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	
	// Methods
	jint FilterInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void FilterInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FilterInputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean FilterInputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint FilterInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint FilterInputStream::read(JByteArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint FilterInputStream::read(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void FilterInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong FilterInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

