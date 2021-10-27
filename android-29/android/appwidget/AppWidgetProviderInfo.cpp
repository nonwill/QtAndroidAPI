#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/pm/PackageManager.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "./AppWidgetProviderInfo.hpp"

namespace android::appwidget
{
	// Fields
	QAndroidJniObject AppWidgetProviderInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.appwidget.AppWidgetProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_BOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_BOTH"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_HORIZONTAL"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_NONE"
		);
	}
	jint AppWidgetProviderInfo::RESIZE_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"RESIZE_VERTICAL"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_HOME_SCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_HOME_SCREEN"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_KEYGUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_KEYGUARD"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_CATEGORY_SEARCHBOX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_CATEGORY_SEARCHBOX"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_FEATURE_HIDE_FROM_PICKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_HIDE_FROM_PICKER"
		);
	}
	jint AppWidgetProviderInfo::WIDGET_FEATURE_RECONFIGURABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.appwidget.AppWidgetProviderInfo",
			"WIDGET_FEATURE_RECONFIGURABLE"
		);
	}
	jint AppWidgetProviderInfo::autoAdvanceViewId()
	{
		return __thiz.getField<jint>(
			"autoAdvanceViewId"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::configure()
	{
		return __thiz.getObjectField(
			"configure",
			"Landroid/content/ComponentName;"
		);
	}
	jint AppWidgetProviderInfo::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jint AppWidgetProviderInfo::initialKeyguardLayout()
	{
		return __thiz.getField<jint>(
			"initialKeyguardLayout"
		);
	}
	jint AppWidgetProviderInfo::initialLayout()
	{
		return __thiz.getField<jint>(
			"initialLayout"
		);
	}
	jstring AppWidgetProviderInfo::label()
	{
		return __thiz.getObjectField(
			"label",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppWidgetProviderInfo::minHeight()
	{
		return __thiz.getField<jint>(
			"minHeight"
		);
	}
	jint AppWidgetProviderInfo::minResizeHeight()
	{
		return __thiz.getField<jint>(
			"minResizeHeight"
		);
	}
	jint AppWidgetProviderInfo::minResizeWidth()
	{
		return __thiz.getField<jint>(
			"minResizeWidth"
		);
	}
	jint AppWidgetProviderInfo::minWidth()
	{
		return __thiz.getField<jint>(
			"minWidth"
		);
	}
	jint AppWidgetProviderInfo::previewImage()
	{
		return __thiz.getField<jint>(
			"previewImage"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::provider()
	{
		return __thiz.getObjectField(
			"provider",
			"Landroid/content/ComponentName;"
		);
	}
	jint AppWidgetProviderInfo::resizeMode()
	{
		return __thiz.getField<jint>(
			"resizeMode"
		);
	}
	jint AppWidgetProviderInfo::updatePeriodMillis()
	{
		return __thiz.getField<jint>(
			"updatePeriodMillis"
		);
	}
	jint AppWidgetProviderInfo::widgetCategory()
	{
		return __thiz.getField<jint>(
			"widgetCategory"
		);
	}
	jint AppWidgetProviderInfo::widgetFeatures()
	{
		return __thiz.getField<jint>(
			"widgetFeatures"
		);
	}
	
	AppWidgetProviderInfo::AppWidgetProviderInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AppWidgetProviderInfo::AppWidgetProviderInfo()
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetProviderInfo",
			"()V"
		);
	}
	AppWidgetProviderInfo::AppWidgetProviderInfo(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.appwidget.AppWidgetProviderInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AppWidgetProviderInfo::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	jint AppWidgetProviderInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::getProfile()
	{
		return __thiz.callObjectMethod(
			"getProfile",
			"()Landroid/os/UserHandle;"
		);
	}
	QAndroidJniObject AppWidgetProviderInfo::loadIcon(android::content::Context arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring AppWidgetProviderInfo::loadLabel(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject AppWidgetProviderInfo::loadPreviewImage(android::content::Context arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"loadPreviewImage",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring AppWidgetProviderInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AppWidgetProviderInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::appwidget
