#include "../../app/WallpaperColors.hpp"
#include "../../content/Context.hpp"
#include "../../os/Bundle.hpp"
#include "./WallpaperService.hpp"
#include "../../view/MotionEvent.hpp"
#include "../../view/WindowInsets.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./WallpaperService_Engine.hpp"

namespace android::service::wallpaper
{
	// Fields
	
	// QJniObject forward
	WallpaperService_Engine::WallpaperService_Engine(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WallpaperService_Engine::WallpaperService_Engine(android::service::wallpaper::WallpaperService arg0)
		: __JniBaseClass(
			"android.service.wallpaper.WallpaperService$Engine",
			"(Landroid/service/wallpaper/WallpaperService;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WallpaperService_Engine::getDesiredMinimumHeight()
	{
		return callMethod<jint>(
			"getDesiredMinimumHeight",
			"()I"
		);
	}
	jint WallpaperService_Engine::getDesiredMinimumWidth()
	{
		return callMethod<jint>(
			"getDesiredMinimumWidth",
			"()I"
		);
	}
	android::content::Context WallpaperService_Engine::getDisplayContext()
	{
		return callObjectMethod(
			"getDisplayContext",
			"()Landroid/content/Context;"
		);
	}
	__JniBaseClass WallpaperService_Engine::getSurfaceHolder()
	{
		return callObjectMethod(
			"getSurfaceHolder",
			"()Landroid/view/SurfaceHolder;"
		);
	}
	jboolean WallpaperService_Engine::isPreview()
	{
		return callMethod<jboolean>(
			"isPreview",
			"()Z"
		);
	}
	jboolean WallpaperService_Engine::isVisible()
	{
		return callMethod<jboolean>(
			"isVisible",
			"()Z"
		);
	}
	void WallpaperService_Engine::notifyColorsChanged()
	{
		callMethod<void>(
			"notifyColorsChanged",
			"()V"
		);
	}
	void WallpaperService_Engine::onApplyWindowInsets(android::view::WindowInsets arg0)
	{
		callMethod<void>(
			"onApplyWindowInsets",
			"(Landroid/view/WindowInsets;)V",
			arg0.object()
		);
	}
	android::os::Bundle WallpaperService_Engine::onCommand(jstring arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4, jboolean arg5)
	{
		return callObjectMethod(
			"onCommand",
			"(Ljava/lang/String;IIILandroid/os/Bundle;Z)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5
		);
	}
	android::app::WallpaperColors WallpaperService_Engine::onComputeColors()
	{
		return callObjectMethod(
			"onComputeColors",
			"()Landroid/app/WallpaperColors;"
		);
	}
	void WallpaperService_Engine::onCreate(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onCreate",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void WallpaperService_Engine::onDesiredSizeChanged(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onDesiredSizeChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void WallpaperService_Engine::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	void WallpaperService_Engine::onOffsetsChanged(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
			"onOffsetsChanged",
			"(FFFFII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void WallpaperService_Engine::onSurfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onSurfaceChanged",
			"(Landroid/view/SurfaceHolder;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void WallpaperService_Engine::onSurfaceCreated(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onSurfaceCreated",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void WallpaperService_Engine::onSurfaceDestroyed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onSurfaceDestroyed",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void WallpaperService_Engine::onSurfaceRedrawNeeded(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onSurfaceRedrawNeeded",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void WallpaperService_Engine::onTouchEvent(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	void WallpaperService_Engine::onVisibilityChanged(jboolean arg0)
	{
		callMethod<void>(
			"onVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	void WallpaperService_Engine::setOffsetNotificationsEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setOffsetNotificationsEnabled",
			"(Z)V",
			arg0
		);
	}
	void WallpaperService_Engine::setTouchEventsEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setTouchEventsEnabled",
			"(Z)V",
			arg0
		);
	}
} // namespace android::service::wallpaper

