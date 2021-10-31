#include "./NotSerializableException.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	NotSerializableException::NotSerializableException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	NotSerializableException::NotSerializableException()
		: java::io::ObjectStreamException(
			"java.io.NotSerializableException",
			"()V"
		) {}
	NotSerializableException::NotSerializableException(jstring arg0)
		: java::io::ObjectStreamException(
			"java.io.NotSerializableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::io

