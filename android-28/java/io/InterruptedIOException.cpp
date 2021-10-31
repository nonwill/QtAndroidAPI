#include "./InterruptedIOException.hpp"

namespace java::io
{
	// Fields
	jint InterruptedIOException::bytesTransferred()
	{
		return getField<jint>(
			"bytesTransferred"
		);
	}
	
	// QJniObject forward
	InterruptedIOException::InterruptedIOException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	InterruptedIOException::InterruptedIOException()
		: java::io::IOException(
			"java.io.InterruptedIOException",
			"()V"
		) {}
	InterruptedIOException::InterruptedIOException(jstring arg0)
		: java::io::IOException(
			"java.io.InterruptedIOException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

