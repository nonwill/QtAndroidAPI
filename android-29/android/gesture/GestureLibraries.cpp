#include "../content/Context.hpp"
#include "./GestureLibrary.hpp"
#include "../../java/io/File.hpp"
#include "./GestureLibraries.hpp"

namespace android::gesture
{
	// Fields
	
	GestureLibraries::GestureLibraries(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject GestureLibraries::fromFile(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/io/File;)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject GestureLibraries::fromFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0
		);
	}
	QAndroidJniObject GestureLibraries::fromFile(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject GestureLibraries::fromPrivateFile(android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromPrivateFile",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject GestureLibraries::fromPrivateFile(android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromPrivateFile",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject GestureLibraries::fromRawResource(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromRawResource",
			"(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::gesture
