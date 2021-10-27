#include "./ConnectTimeoutException.hpp"

namespace org::apache::http::conn
{
	// Fields
	
	ConnectTimeoutException::ConnectTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectTimeoutException::ConnectTimeoutException()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ConnectTimeoutException",
			"()V"
		);
	}
	ConnectTimeoutException::ConnectTimeoutException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ConnectTimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ConnectTimeoutException::ConnectTimeoutException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ConnectTimeoutException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace org::apache::http::conn
