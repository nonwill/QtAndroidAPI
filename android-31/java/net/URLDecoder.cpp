#include "../nio/charset/Charset.hpp"
#include "./URLDecoder.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	URLDecoder::URLDecoder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	URLDecoder::URLDecoder()
		: __JniBaseClass(
			"java.net.URLDecoder",
			"()V"
		) {}
	
	// Methods
	jstring URLDecoder::decode(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring URLDecoder::decode(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring URLDecoder::decode(jstring arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLDecoder",
			"decode",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
} // namespace java::net

