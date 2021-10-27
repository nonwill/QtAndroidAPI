#include "../../java/io/Writer.hpp"
#include "./GLDebugHelper.hpp"

namespace android::opengl
{
	// Fields
	jint GLDebugHelper::CONFIG_CHECK_GL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_GL_ERROR"
		);
	}
	jint GLDebugHelper::CONFIG_CHECK_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_CHECK_THREAD"
		);
	}
	jint GLDebugHelper::CONFIG_LOG_ARGUMENT_NAMES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"CONFIG_LOG_ARGUMENT_NAMES"
		);
	}
	jint GLDebugHelper::ERROR_WRONG_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.opengl.GLDebugHelper",
			"ERROR_WRONG_THREAD"
		);
	}
	
	GLDebugHelper::GLDebugHelper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GLDebugHelper::GLDebugHelper()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.GLDebugHelper",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject GLDebugHelper::wrap(__JniBaseClass arg0, jint arg1, java::io::Writer arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.opengl.GLDebugHelper",
			"wrap",
			"(Ljavax/microedition/khronos/egl/EGL;ILjava/io/Writer;)Ljavax/microedition/khronos/egl/EGL;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace android::opengl

