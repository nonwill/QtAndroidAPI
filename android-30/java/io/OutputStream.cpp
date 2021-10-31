#include "./OutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	OutputStream::OutputStream(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	OutputStream::OutputStream()
		: __JniBaseClass(
			"java.io.OutputStream",
			"()V"
		) {}
	
	// Methods
	java::io::OutputStream OutputStream::nullOutputStream()
	{
		return callStaticObjectMethod(
			"java.io.OutputStream",
			"nullOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	void OutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void OutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void OutputStream::write(jbyteArray arg0)
	{
		callMethod<void>(
			"write",
			"([B)V",
			arg0
		);
	}
	void OutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void OutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io
