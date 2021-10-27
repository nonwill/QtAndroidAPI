#include "./TracingConfig.hpp"
#include "./TracingConfig_Builder.hpp"

namespace android::webkit
{
	// Fields
	
	TracingConfig_Builder::TracingConfig_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TracingConfig_Builder::TracingConfig_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.TracingConfig$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TracingConfig_Builder::addCategories(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"addCategories",
			"([I)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject TracingConfig_Builder::addCategories(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"addCategories",
			"([Ljava/lang/String;)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
	QAndroidJniObject TracingConfig_Builder::addCategories(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addCategories",
			"(Ljava/util/Collection;)Landroid/webkit/TracingConfig$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TracingConfig_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/webkit/TracingConfig;"
		);
	}
	QAndroidJniObject TracingConfig_Builder::setTracingMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTracingMode",
			"(I)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
} // namespace android::webkit
