#include "../net/Uri.hpp"
#include "./RemoteConnection_VideoProvider_Callback.hpp"
#include "./VideoProfile.hpp"
#include "../view/Surface.hpp"
#include "./RemoteConnection_VideoProvider.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteConnection_VideoProvider::RemoteConnection_VideoProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void RemoteConnection_VideoProvider::registerCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::requestCallDataUsage()
	{
		callMethod<void>(
			"requestCallDataUsage",
			"()V"
		);
	}
	void RemoteConnection_VideoProvider::requestCameraCapabilities()
	{
		callMethod<void>(
			"requestCameraCapabilities",
			"()V"
		);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1)
	{
		callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyResponse(android::telecom::VideoProfile arg0)
	{
		callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setCamera(jstring arg0)
	{
		callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::setDeviceOrientation(jint arg0)
	{
		callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::setDisplaySurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setPauseImage(android::net::Uri arg0)
	{
		callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setPreviewSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setZoom(jfloat arg0)
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::unregisterCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom
