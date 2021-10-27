#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::net
{
	class SocketPermission;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::security::cert
{
	class CertificateFactory;
}

namespace __jni_impl::java::security
{
	class CodeSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::URL arg0, jarray arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getCertificates();
		jarray getCodeSigners();
		QAndroidJniObject getLocation();
		jint hashCode();
		jboolean implies(__jni_impl::java::security::CodeSource arg0);
		jstring toString();
	};
} // namespace __jni_impl::java::security

#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../net/SocketPermission.hpp"
#include "../net/URL.hpp"
#include "cert/CertificateFactory.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void CodeSource::__constructor(__jni_impl::java::net::URL arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.CodeSource",
			"(Ljava/net/URL;[Ljava/security/CodeSigner;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean CodeSource::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray CodeSource::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jarray CodeSource::getCodeSigners()
	{
		return __thiz.callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
	}
	QAndroidJniObject CodeSource::getLocation()
	{
		return __thiz.callObjectMethod(
			"getLocation",
			"()Ljava/net/URL;"
		);
	}
	jint CodeSource::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean CodeSource::implies(__jni_impl::java::security::CodeSource arg0)
	{
		return __thiz.callMethod<jboolean>(
			"implies",
			"(Ljava/security/CodeSource;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring CodeSource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class CodeSource : public __jni_impl::java::security::CodeSource
	{
	public:
		CodeSource(QAndroidJniObject obj) { __thiz = obj; }
		CodeSource(__jni_impl::java::net::URL arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security

