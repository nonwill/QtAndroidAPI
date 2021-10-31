#include "./AppWidgetProviderInfo.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../os/Bundle.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../widget/FrameLayout_LayoutParams.hpp"
#include "../widget/RemoteViews.hpp"
#include "./AppWidgetHostView.hpp"

namespace android::appwidget
{
	// Fields
	
	// QAndroidJniObject forward
	AppWidgetHostView::AppWidgetHostView(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	AppWidgetHostView::AppWidgetHostView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AppWidgetHostView::AppWidgetHostView(android::content::Context arg0, jint arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.appwidget.AppWidgetHostView",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::graphics::Rect AppWidgetHostView::getDefaultPaddingForWidget(android::content::Context arg0, android::content::ComponentName arg1, android::graphics::Rect arg2)
	{
		return callStaticObjectMethod(
			"android.appwidget.AppWidgetHostView",
			"getDefaultPaddingForWidget",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::widget::FrameLayout_LayoutParams AppWidgetHostView::generateLayoutParams(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",
			arg0.object()
		);
	}
	jint AppWidgetHostView::getAppWidgetId()
	{
		return callMethod<jint>(
			"getAppWidgetId",
			"()I"
		);
	}
	android::appwidget::AppWidgetProviderInfo AppWidgetHostView::getAppWidgetInfo()
	{
		return callObjectMethod(
			"getAppWidgetInfo",
			"()Landroid/appwidget/AppWidgetProviderInfo;"
		);
	}
	void AppWidgetHostView::setAppWidget(jint arg0, android::appwidget::AppWidgetProviderInfo arg1)
	{
		callMethod<void>(
			"setAppWidget",
			"(ILandroid/appwidget/AppWidgetProviderInfo;)V",
			arg0,
			arg1.object()
		);
	}
	void AppWidgetHostView::setExecutor(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setExecutor",
			"(Ljava/util/concurrent/Executor;)V",
			arg0.object()
		);
	}
	void AppWidgetHostView::updateAppWidget(android::widget::RemoteViews arg0)
	{
		callMethod<void>(
			"updateAppWidget",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		);
	}
	void AppWidgetHostView::updateAppWidgetOptions(android::os::Bundle arg0)
	{
		callMethod<void>(
			"updateAppWidgetOptions",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void AppWidgetHostView::updateAppWidgetSize(android::os::Bundle arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"updateAppWidgetSize",
			"(Landroid/os/Bundle;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::appwidget

