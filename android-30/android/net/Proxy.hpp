#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::net
{
	class Proxy : public JObject
	{
	public:
		// Fields
		static jstring EXTRA_PROXY_INFO();
		static jstring PROXY_CHANGE_ACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QJniObject obj);
		
		// Constructors
		Proxy();
		
		// Methods
		static jstring getDefaultHost();
		static jint getDefaultPort();
		static jstring getHost(android::content::Context arg0);
		static jint getPort(android::content::Context arg0);
	};
} // namespace android::net

