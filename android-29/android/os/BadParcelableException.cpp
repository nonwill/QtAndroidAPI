#include "../../java/lang/Exception.hpp"
#include "./BadParcelableException.hpp"

namespace android::os
{
	// Fields
	
	BadParcelableException::BadParcelableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BadParcelableException::BadParcelableException(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	BadParcelableException::BadParcelableException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BadParcelableException::BadParcelableException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::os
