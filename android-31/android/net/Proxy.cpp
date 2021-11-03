#include "../content/Context.hpp"
#include "./Proxy.hpp"

namespace android::net
{
	// Fields
	jstring Proxy::PROXY_CHANGE_ACTION()
	{
		return getStaticObjectField(
			"android.net.Proxy",
			"PROXY_CHANGE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Proxy::Proxy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Proxy::Proxy()
		: JObject(
			"android.net.Proxy",
			"()V"
		) {}
	
	// Methods
	jstring Proxy::getDefaultHost()
	{
		return callStaticObjectMethod(
			"android.net.Proxy",
			"getDefaultHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Proxy::getDefaultPort()
	{
		return callStaticMethod<jint>(
			"android.net.Proxy",
			"getDefaultPort",
			"()I"
		);
	}
	jstring Proxy::getHost(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.net.Proxy",
			"getHost",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jint Proxy::getPort(android::content::Context arg0)
	{
		return callStaticMethod<jint>(
			"android.net.Proxy",
			"getPort",
			"(Landroid/content/Context;)I",
			arg0.object()
		);
	}
} // namespace android::net

