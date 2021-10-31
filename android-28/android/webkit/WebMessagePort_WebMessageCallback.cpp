#include "./WebMessage.hpp"
#include "./WebMessagePort.hpp"
#include "./WebMessagePort_WebMessageCallback.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebMessagePort_WebMessageCallback::WebMessagePort_WebMessageCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebMessagePort_WebMessageCallback::WebMessagePort_WebMessageCallback()
		: __JniBaseClass(
			"android.webkit.WebMessagePort$WebMessageCallback",
			"()V"
		) {}
	
	// Methods
	void WebMessagePort_WebMessageCallback::onMessage(android::webkit::WebMessagePort arg0, android::webkit::WebMessage arg1)
	{
		callMethod<void>(
			"onMessage",
			"(Landroid/webkit/WebMessagePort;Landroid/webkit/WebMessage;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit
