#include "./WebSettings_RenderPriority.hpp"

namespace android::webkit
{
	// Fields
	QAndroidJniObject WebSettings_RenderPriority::HIGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"HIGH",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	QAndroidJniObject WebSettings_RenderPriority::LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"LOW",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	QAndroidJniObject WebSettings_RenderPriority::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.webkit.WebSettings$RenderPriority",
			"NORMAL",
			"Landroid/webkit/WebSettings$RenderPriority;"
		);
	}
	
	WebSettings_RenderPriority::WebSettings_RenderPriority(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WebSettings_RenderPriority::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;",
			arg0
		);
	}
	QAndroidJniObject WebSettings_RenderPriority::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray WebSettings_RenderPriority::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.WebSettings$RenderPriority",
			"values",
			"()[Landroid/webkit/WebSettings$RenderPriority;"
		).object<jarray>();
	}
} // namespace android::webkit
