#include "./WallpaperColors.hpp"
#include "./WallpaperInfo.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "./WallpaperManager.hpp"

namespace android::app
{
	// Fields
	jstring WallpaperManager::ACTION_CHANGE_LIVE_WALLPAPER()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_CHANGE_LIVE_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::ACTION_CROP_AND_SET_WALLPAPER()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_CROP_AND_SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::ACTION_LIVE_WALLPAPER_CHOOSER()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_LIVE_WALLPAPER_CHOOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::COMMAND_DROP()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_DROP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::COMMAND_SECONDARY_TAP()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_SECONDARY_TAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::COMMAND_TAP()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_TAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::EXTRA_LIVE_WALLPAPER_COMPONENT()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"EXTRA_LIVE_WALLPAPER_COMPONENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WallpaperManager::FLAG_LOCK()
	{
		return getStaticField<jint>(
			"android.app.WallpaperManager",
			"FLAG_LOCK"
		);
	}
	jint WallpaperManager::FLAG_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.WallpaperManager",
			"FLAG_SYSTEM"
		);
	}
	jstring WallpaperManager::WALLPAPER_PREVIEW_META_DATA()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"WALLPAPER_PREVIEW_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	WallpaperManager::WallpaperManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::WallpaperManager WallpaperManager::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.WallpaperManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/app/WallpaperManager;",
			arg0.object()
		);
	}
	void WallpaperManager::addOnColorsChangedListener(JObject arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"addOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WallpaperManager::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void WallpaperManager::clear(jint arg0)
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	void WallpaperManager::clearWallpaper()
	{
		callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	void WallpaperManager::clearWallpaperOffsets(JObject arg0)
	{
		callMethod<void>(
			"clearWallpaperOffsets",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	void WallpaperManager::forgetLoadedWallpaper()
	{
		callMethod<void>(
			"forgetLoadedWallpaper",
			"()V"
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable()
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable(jint arg0)
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4)
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"(IIZFF)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4, jint arg5)
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"(IIZFFI)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	android::content::Intent WallpaperManager::getCropAndSetWallpaperIntent(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getCropAndSetWallpaperIntent",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	jint WallpaperManager::getDesiredMinimumHeight()
	{
		return callMethod<jint>(
			"getDesiredMinimumHeight",
			"()I"
		);
	}
	jint WallpaperManager::getDesiredMinimumWidth()
	{
		return callMethod<jint>(
			"getDesiredMinimumWidth",
			"()I"
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::getDrawable()
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::getFastDrawable()
	{
		return callObjectMethod(
			"getFastDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::app::WallpaperColors WallpaperManager::getWallpaperColors(jint arg0)
	{
		return callObjectMethod(
			"getWallpaperColors",
			"(I)Landroid/app/WallpaperColors;",
			arg0
		);
	}
	android::os::ParcelFileDescriptor WallpaperManager::getWallpaperFile(jint arg0)
	{
		return callObjectMethod(
			"getWallpaperFile",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	jint WallpaperManager::getWallpaperId(jint arg0)
	{
		return callMethod<jint>(
			"getWallpaperId",
			"(I)I",
			arg0
		);
	}
	android::app::WallpaperInfo WallpaperManager::getWallpaperInfo()
	{
		return callObjectMethod(
			"getWallpaperInfo",
			"()Landroid/app/WallpaperInfo;"
		);
	}
	jboolean WallpaperManager::hasResourceWallpaper(jint arg0)
	{
		return callMethod<jboolean>(
			"hasResourceWallpaper",
			"(I)Z",
			arg0
		);
	}
	jboolean WallpaperManager::isSetWallpaperAllowed()
	{
		return callMethod<jboolean>(
			"isSetWallpaperAllowed",
			"()Z"
		);
	}
	jboolean WallpaperManager::isWallpaperSupported()
	{
		return callMethod<jboolean>(
			"isWallpaperSupported",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::peekDrawable()
	{
		return callObjectMethod(
			"peekDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable WallpaperManager::peekFastDrawable()
	{
		return callObjectMethod(
			"peekFastDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void WallpaperManager::removeOnColorsChangedListener(JObject arg0)
	{
		callMethod<void>(
			"removeOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;)V",
			arg0.object()
		);
	}
	void WallpaperManager::sendWallpaperCommand(JObject arg0, jstring arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
	{
		callMethod<void>(
			"sendWallpaperCommand",
			"(Landroid/os/IBinder;Ljava/lang/String;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	jint WallpaperManager::setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Z)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint WallpaperManager::setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3)
	{
		return callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;ZI)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void WallpaperManager::setBitmap(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void WallpaperManager::setDisplayPadding(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setDisplayPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint WallpaperManager::setResource(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"setResource",
			"(II)I",
			arg0,
			arg1
		);
	}
	void WallpaperManager::setResource(jint arg0)
	{
		callMethod<void>(
			"setResource",
			"(I)V",
			arg0
		);
	}
	jint WallpaperManager::setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Z)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint WallpaperManager::setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3)
	{
		return callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;ZI)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void WallpaperManager::setStream(java::io::InputStream arg0)
	{
		callMethod<void>(
			"setStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void WallpaperManager::setWallpaperOffsetSteps(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setWallpaperOffsetSteps",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void WallpaperManager::setWallpaperOffsets(JObject arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"setWallpaperOffsets",
			"(Landroid/os/IBinder;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void WallpaperManager::suggestDesiredDimensions(jint arg0, jint arg1)
	{
		callMethod<void>(
			"suggestDesiredDimensions",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

