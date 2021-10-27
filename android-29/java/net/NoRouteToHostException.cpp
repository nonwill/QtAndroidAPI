#include "./NoRouteToHostException.hpp"

namespace java::net
{
	// Fields
	
	NoRouteToHostException::NoRouteToHostException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoRouteToHostException::NoRouteToHostException()
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"()V"
		);
	}
	NoRouteToHostException::NoRouteToHostException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoRouteToHostException::NoRouteToHostException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::net
