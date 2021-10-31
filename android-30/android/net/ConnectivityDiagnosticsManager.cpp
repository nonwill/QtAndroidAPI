#include "./ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback.hpp"
#include "./NetworkRequest.hpp"
#include "./ConnectivityDiagnosticsManager.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	ConnectivityDiagnosticsManager::ConnectivityDiagnosticsManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void ConnectivityDiagnosticsManager::registerConnectivityDiagnosticsCallback(android::net::NetworkRequest arg0, __JniBaseClass arg1, android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg2)
	{
		callMethod<void>(
			"registerConnectivityDiagnosticsCallback",
			"(Landroid/net/NetworkRequest;Ljava/util/concurrent/Executor;Landroid/net/ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void ConnectivityDiagnosticsManager::unregisterConnectivityDiagnosticsCallback(android::net::ConnectivityDiagnosticsManager_ConnectivityDiagnosticsCallback arg0)
	{
		callMethod<void>(
			"unregisterConnectivityDiagnosticsCallback",
			"(Landroid/net/ConnectivityDiagnosticsManager$ConnectivityDiagnosticsCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net
