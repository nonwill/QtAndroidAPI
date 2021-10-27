#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class MonthDay;
}

namespace __jni_impl::android::app::admin
{
	class FreezePeriod : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::time::MonthDay arg0, __jni_impl::java::time::MonthDay arg1);
		
		// Methods
		QAndroidJniObject getEnd();
		QAndroidJniObject getStart();
		jstring toString();
	};
} // namespace __jni_impl::android::app::admin

#include "../../../java/time/MonthDay.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	
	// Constructors
	void FreezePeriod::__constructor(__jni_impl::java::time::MonthDay arg0, __jni_impl::java::time::MonthDay arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.FreezePeriod",
			"(Ljava/time/MonthDay;Ljava/time/MonthDay;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FreezePeriod::getEnd()
	{
		return __thiz.callObjectMethod(
			"getEnd",
			"()Ljava/time/MonthDay;"
		);
	}
	QAndroidJniObject FreezePeriod::getStart()
	{
		return __thiz.callObjectMethod(
			"getStart",
			"()Ljava/time/MonthDay;"
		);
	}
	jstring FreezePeriod::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class FreezePeriod : public __jni_impl::android::app::admin::FreezePeriod
	{
	public:
		FreezePeriod(QAndroidJniObject obj) { __thiz = obj; }
		FreezePeriod(__jni_impl::java::time::MonthDay arg0, __jni_impl::java::time::MonthDay arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::admin

