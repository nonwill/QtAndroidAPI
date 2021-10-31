#include "./CodingErrorAction.hpp"

namespace java::nio::charset
{
	// Fields
	java::nio::charset::CodingErrorAction CodingErrorAction::IGNORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"IGNORE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	java::nio::charset::CodingErrorAction CodingErrorAction::REPLACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPLACE",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	java::nio::charset::CodingErrorAction CodingErrorAction::REPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.CodingErrorAction",
			"REPORT",
			"Ljava/nio/charset/CodingErrorAction;"
		);
	}
	
	// QAndroidJniObject forward
	CodingErrorAction::CodingErrorAction(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring CodingErrorAction::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

