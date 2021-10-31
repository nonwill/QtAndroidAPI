#include "./WifiManager_WpsCallback.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QAndroidJniObject forward
	WifiManager_WpsCallback::WifiManager_WpsCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiManager_WpsCallback::WifiManager_WpsCallback()
		: __JniBaseClass(
			"android.net.wifi.WifiManager$WpsCallback",
			"()V"
		) {}
	
	// Methods
	void WifiManager_WpsCallback::onFailed(jint arg0)
	{
		callMethod<void>(
			"onFailed",
			"(I)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onStarted(jstring arg0)
	{
		callMethod<void>(
			"onStarted",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WifiManager_WpsCallback::onSucceeded()
	{
		callMethod<void>(
			"onSucceeded",
			"()V"
		);
	}
} // namespace android::net::wifi
