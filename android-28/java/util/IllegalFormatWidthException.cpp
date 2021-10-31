#include "./IllegalFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalFormatWidthException::IllegalFormatWidthException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatWidthException::IllegalFormatWidthException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatWidthException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jstring IllegalFormatWidthException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatWidthException::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace java::util
