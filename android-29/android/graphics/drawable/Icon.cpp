#include "../../content/Context.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../Bitmap.hpp"
#include "../BlendMode.hpp"
#include "../PorterDuff_Mode.hpp"
#include "./Drawable.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Handler.hpp"
#include "../../os/Message.hpp"
#include "../../os/Parcel.hpp"
#include "./Icon.hpp"

namespace android::graphics::drawable
{
	// Fields
	__JniBaseClass Icon::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.Icon",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Icon::TYPE_ADAPTIVE_BITMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_ADAPTIVE_BITMAP"
		);
	}
	jint Icon::TYPE_BITMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_BITMAP"
		);
	}
	jint Icon::TYPE_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_DATA"
		);
	}
	jint Icon::TYPE_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_RESOURCE"
		);
	}
	jint Icon::TYPE_URI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_URI"
		);
	}
	
	// QAndroidJniObject forward
	Icon::Icon(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::drawable::Icon Icon::createWithAdaptiveBitmap(android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithAdaptiveBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::createWithBitmap(android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::createWithContentUri(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Landroid/net/Uri;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::createWithContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	android::graphics::drawable::Icon Icon::createWithData(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithData",
			"([BII)Landroid/graphics/drawable/Icon;",
			arg0,
			arg1,
			arg2
		);
	}
	android::graphics::drawable::Icon Icon::createWithFilePath(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithFilePath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	android::graphics::drawable::Icon Icon::createWithResource(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Icon;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::drawable::Icon Icon::createWithResource(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Ljava/lang/String;I)Landroid/graphics/drawable/Icon;",
			arg0,
			arg1
		);
	}
	jint Icon::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Icon::getResId()
	{
		return callMethod<jint>(
			"getResId",
			"()I"
		);
	}
	jstring Icon::getResPackage()
	{
		return callObjectMethod(
			"getResPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Icon::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	android::net::Uri Icon::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	android::graphics::drawable::Drawable Icon::loadDrawable(android::content::Context arg0)
	{
		return callObjectMethod(
			"loadDrawable",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	void Icon::loadDrawableAsync(android::content::Context arg0, android::os::Message arg1)
	{
		callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/os/Message;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Icon::loadDrawableAsync(android::content::Context arg0, __JniBaseClass arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/graphics/drawable/Icon$OnDrawableLoadedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::graphics::drawable::Icon Icon::setTint(jint arg0)
	{
		return callObjectMethod(
			"setTint",
			"(I)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	android::graphics::drawable::Icon Icon::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		return callObjectMethod(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::setTintList(android::content::res::ColorStateList arg0)
	{
		return callObjectMethod(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	android::graphics::drawable::Icon Icon::setTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		return callObjectMethod(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)Landroid/graphics/drawable/Icon;",
			arg0.object()
		);
	}
	jstring Icon::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Icon::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics::drawable

