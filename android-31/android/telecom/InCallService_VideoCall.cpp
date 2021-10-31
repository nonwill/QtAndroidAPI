#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "./InCallService_VideoCall_Callback.hpp"
#include "./VideoProfile.hpp"
#include "../view/Surface.hpp"
#include "./InCallService_VideoCall.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	InCallService_VideoCall::InCallService_VideoCall(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InCallService_VideoCall::InCallService_VideoCall()
		: __JniBaseClass(
			"android.telecom.InCallService$VideoCall",
			"()V"
		) {}
	
	// Methods
	void InCallService_VideoCall::registerCallback(android::telecom::InCallService_VideoCall_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::registerCallback(android::telecom::InCallService_VideoCall_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InCallService_VideoCall::requestCallDataUsage()
	{
		callMethod<void>(
			"requestCallDataUsage",
			"()V"
		);
	}
	void InCallService_VideoCall::requestCameraCapabilities()
	{
		callMethod<void>(
			"requestCameraCapabilities",
			"()V"
		);
	}
	void InCallService_VideoCall::sendSessionModifyRequest(android::telecom::VideoProfile arg0)
	{
		callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::sendSessionModifyResponse(android::telecom::VideoProfile arg0)
	{
		callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setCamera(jstring arg0)
	{
		callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InCallService_VideoCall::setDeviceOrientation(jint arg0)
	{
		callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void InCallService_VideoCall::setDisplaySurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setPauseImage(android::net::Uri arg0)
	{
		callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setPreviewSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setZoom(jfloat arg0)
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void InCallService_VideoCall::unregisterCallback(android::telecom::InCallService_VideoCall_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom
