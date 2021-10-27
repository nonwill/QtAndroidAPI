#include "../../content/Context.hpp"
#include "./Formatter.hpp"

namespace android::text::format
{
	// Fields
	
	Formatter::Formatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Formatter::Formatter()
	{
		__thiz = QAndroidJniObject(
			"android.text.format.Formatter",
			"()V"
		);
	}
	
	// Methods
	jstring Formatter::formatFileSize(android::content::Context arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring Formatter::formatIpAddress(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatIpAddress",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Formatter::formatShortFileSize(android::content::Context arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Formatter",
			"formatShortFileSize",
			"(Landroid/content/Context;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
} // namespace android::text::format

