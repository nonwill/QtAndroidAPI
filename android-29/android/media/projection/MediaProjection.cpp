#include "../../hardware/display/VirtualDisplay.hpp"
#include "../../hardware/display/VirtualDisplay_Callback.hpp"
#include "./MediaProjection_Callback.hpp"
#include "../../os/Handler.hpp"
#include "../../view/Surface.hpp"
#include "./MediaProjection.hpp"

namespace android::media::projection
{
	// Fields
	
	MediaProjection::MediaProjection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MediaProjection::createVirtualDisplay(jstring arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::view::Surface arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7)
	{
		return __thiz.callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIIILandroid/view/Surface;Landroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	QAndroidJniObject MediaProjection::createVirtualDisplay(const QString &arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::view::Surface arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7)
	{
		return __thiz.callObjectMethod(
			"createVirtualDisplay",
			"(Ljava/lang/String;IIIILandroid/view/Surface;Landroid/hardware/display/VirtualDisplay$Callback;Landroid/os/Handler;)Landroid/hardware/display/VirtualDisplay;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object()
		);
	}
	void MediaProjection::registerCallback(android::media::projection::MediaProjection_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/projection/MediaProjection$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaProjection::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
	void MediaProjection::unregisterCallback(android::media::projection::MediaProjection_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/projection/MediaProjection$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::projection
