#include "./HttpConnectionParams.hpp"

namespace org::apache::http::params
{
	// Fields
	
	HttpConnectionParams::HttpConnectionParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint HttpConnectionParams::getConnectionTimeout(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getConnectionTimeout",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object()
		);
	}
	jint HttpConnectionParams::getLinger(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getLinger",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object()
		);
	}
	jint HttpConnectionParams::getSoTimeout(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getSoTimeout",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object()
		);
	}
	jint HttpConnectionParams::getSocketBufferSize(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getSocketBufferSize",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object()
		);
	}
	jboolean HttpConnectionParams::getTcpNoDelay(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"org.apache.http.params.HttpConnectionParams",
			"getTcpNoDelay",
			"(Lorg/apache/http/params/HttpParams;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean HttpConnectionParams::isStaleCheckingEnabled(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"org.apache.http.params.HttpConnectionParams",
			"isStaleCheckingEnabled",
			"(Lorg/apache/http/params/HttpParams;)Z",
			arg0.__jniObject().object()
		);
	}
	void HttpConnectionParams::setConnectionTimeout(__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setConnectionTimeout",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void HttpConnectionParams::setLinger(__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setLinger",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void HttpConnectionParams::setSoTimeout(__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setSoTimeout",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void HttpConnectionParams::setSocketBufferSize(__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setSocketBufferSize",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void HttpConnectionParams::setStaleCheckingEnabled(__JniBaseClass arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setStaleCheckingEnabled",
			"(Lorg/apache/http/params/HttpParams;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void HttpConnectionParams::setTcpNoDelay(__JniBaseClass arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setTcpNoDelay",
			"(Lorg/apache/http/params/HttpParams;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace org::apache::http::params

