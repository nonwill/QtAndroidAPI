#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../io/InputStream.hpp"
#include "../io/OutputStream.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContentHandler.hpp"
#include "./URL.hpp"
#include "../security/Permission.hpp"
#include "../util/Hashtable.hpp"
#include "../util/concurrent/ConcurrentHashMap.hpp"
#include "./URLConnection.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	URLConnection::URLConnection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean URLConnection::getDefaultAllowUserInteraction()
	{
		return callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultAllowUserInteraction",
			"()Z"
		);
	}
	JString URLConnection::getDefaultRequestProperty(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"getDefaultRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jboolean URLConnection::getDefaultUseCaches(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.net.URLConnection",
			"getDefaultUseCaches",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject URLConnection::getFileNameMap()
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"getFileNameMap",
			"()Ljava/net/FileNameMap;"
		);
	}
	JString URLConnection::guessContentTypeFromName(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString URLConnection::guessContentTypeFromStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLConnection",
			"guessContentTypeFromStream",
			"(Ljava/io/InputStream;)Ljava/lang/String;",
			arg0.object()
		);
	}
	void URLConnection::setContentHandlerFactory(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setContentHandlerFactory",
			"(Ljava/net/ContentHandlerFactory;)V",
			arg0.object()
		);
	}
	void URLConnection::setDefaultAllowUserInteraction(jboolean arg0)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultAllowUserInteraction",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setDefaultRequestProperty(JString arg0, JString arg1)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void URLConnection::setDefaultUseCaches(JString arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setDefaultUseCaches",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void URLConnection::setFileNameMap(JObject arg0)
	{
		callStaticMethod<void>(
			"java.net.URLConnection",
			"setFileNameMap",
			"(Ljava/net/FileNameMap;)V",
			arg0.object()
		);
	}
	void URLConnection::addRequestProperty(JString arg0, JString arg1)
	{
		callMethod<void>(
			"addRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void URLConnection::connect()
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	jboolean URLConnection::getAllowUserInteraction()
	{
		return callMethod<jboolean>(
			"getAllowUserInteraction",
			"()Z"
		);
	}
	jint URLConnection::getConnectTimeout()
	{
		return callMethod<jint>(
			"getConnectTimeout",
			"()I"
		);
	}
	JObject URLConnection::getContent()
	{
		return callObjectMethod(
			"getContent",
			"()Ljava/lang/Object;"
		);
	}
	JObject URLConnection::getContent(JArray arg0)
	{
		return callObjectMethod(
			"getContent",
			"([Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jarray>()
		);
	}
	JString URLConnection::getContentEncoding()
	{
		return callObjectMethod(
			"getContentEncoding",
			"()Ljava/lang/String;"
		);
	}
	jint URLConnection::getContentLength()
	{
		return callMethod<jint>(
			"getContentLength",
			"()I"
		);
	}
	jlong URLConnection::getContentLengthLong()
	{
		return callMethod<jlong>(
			"getContentLengthLong",
			"()J"
		);
	}
	JString URLConnection::getContentType()
	{
		return callObjectMethod(
			"getContentType",
			"()Ljava/lang/String;"
		);
	}
	jlong URLConnection::getDate()
	{
		return callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	jboolean URLConnection::getDefaultUseCaches()
	{
		return callMethod<jboolean>(
			"getDefaultUseCaches",
			"()Z"
		);
	}
	jboolean URLConnection::getDoInput()
	{
		return callMethod<jboolean>(
			"getDoInput",
			"()Z"
		);
	}
	jboolean URLConnection::getDoOutput()
	{
		return callMethod<jboolean>(
			"getDoOutput",
			"()Z"
		);
	}
	jlong URLConnection::getExpiration()
	{
		return callMethod<jlong>(
			"getExpiration",
			"()J"
		);
	}
	JString URLConnection::getHeaderField(jint arg0)
	{
		return callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString URLConnection::getHeaderField(JString arg0)
	{
		return callObjectMethod(
			"getHeaderField",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jlong URLConnection::getHeaderFieldDate(JString arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint URLConnection::getHeaderFieldInt(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"getHeaderFieldInt",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString URLConnection::getHeaderFieldKey(jint arg0)
	{
		return callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jlong URLConnection::getHeaderFieldLong(JString arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getHeaderFieldLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject URLConnection::getHeaderFields()
	{
		return callObjectMethod(
			"getHeaderFields",
			"()Ljava/util/Map;"
		);
	}
	jlong URLConnection::getIfModifiedSince()
	{
		return callMethod<jlong>(
			"getIfModifiedSince",
			"()J"
		);
	}
	java::io::InputStream URLConnection::getInputStream()
	{
		return callObjectMethod(
			"getInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jlong URLConnection::getLastModified()
	{
		return callMethod<jlong>(
			"getLastModified",
			"()J"
		);
	}
	java::io::OutputStream URLConnection::getOutputStream()
	{
		return callObjectMethod(
			"getOutputStream",
			"()Ljava/io/OutputStream;"
		);
	}
	java::security::Permission URLConnection::getPermission()
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	jint URLConnection::getReadTimeout()
	{
		return callMethod<jint>(
			"getReadTimeout",
			"()I"
		);
	}
	JObject URLConnection::getRequestProperties()
	{
		return callObjectMethod(
			"getRequestProperties",
			"()Ljava/util/Map;"
		);
	}
	JString URLConnection::getRequestProperty(JString arg0)
	{
		return callObjectMethod(
			"getRequestProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::net::URL URLConnection::getURL()
	{
		return callObjectMethod(
			"getURL",
			"()Ljava/net/URL;"
		);
	}
	jboolean URLConnection::getUseCaches()
	{
		return callMethod<jboolean>(
			"getUseCaches",
			"()Z"
		);
	}
	void URLConnection::setAllowUserInteraction(jboolean arg0)
	{
		callMethod<void>(
			"setAllowUserInteraction",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setConnectTimeout(jint arg0)
	{
		callMethod<void>(
			"setConnectTimeout",
			"(I)V",
			arg0
		);
	}
	void URLConnection::setDefaultUseCaches(jboolean arg0)
	{
		callMethod<void>(
			"setDefaultUseCaches",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setDoInput(jboolean arg0)
	{
		callMethod<void>(
			"setDoInput",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setDoOutput(jboolean arg0)
	{
		callMethod<void>(
			"setDoOutput",
			"(Z)V",
			arg0
		);
	}
	void URLConnection::setIfModifiedSince(jlong arg0)
	{
		callMethod<void>(
			"setIfModifiedSince",
			"(J)V",
			arg0
		);
	}
	void URLConnection::setReadTimeout(jint arg0)
	{
		callMethod<void>(
			"setReadTimeout",
			"(I)V",
			arg0
		);
	}
	void URLConnection::setRequestProperty(JString arg0, JString arg1)
	{
		callMethod<void>(
			"setRequestProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void URLConnection::setUseCaches(jboolean arg0)
	{
		callMethod<void>(
			"setUseCaches",
			"(Z)V",
			arg0
		);
	}
	JString URLConnection::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

