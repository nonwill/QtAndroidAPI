#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::os
{
	class AsyncTask_Status : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FINISHED();
		static QAndroidJniObject PENDING();
		static QAndroidJniObject RUNNING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject AsyncTask_Status::FINISHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask$Status",
			"FINISHED",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	QAndroidJniObject AsyncTask_Status::PENDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask$Status",
			"PENDING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	QAndroidJniObject AsyncTask_Status::RUNNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.AsyncTask$Status",
			"RUNNING",
			"Landroid/os/AsyncTask$Status;"
		);
	}
	
	// Constructors
	void AsyncTask_Status::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.AsyncTask$Status",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AsyncTask_Status::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"valueOf",
			"(Ljava/lang/String;)Landroid/os/AsyncTask$Status;",
			arg0
		);
	}
	QAndroidJniObject AsyncTask_Status::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"valueOf",
			"(Ljava/lang/String;)Landroid/os/AsyncTask$Status;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray AsyncTask_Status::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.AsyncTask$Status",
			"values",
			"()[Landroid/os/AsyncTask$Status;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class AsyncTask_Status : public __jni_impl::android::os::AsyncTask_Status
	{
	public:
		AsyncTask_Status(QAndroidJniObject obj) { __thiz = obj; }
		AsyncTask_Status()
		{
			__constructor();
		}
	};
} // namespace android::os

