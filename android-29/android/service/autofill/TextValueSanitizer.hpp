#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::android::service::autofill
{
	class TextValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::java::util::regex::Pattern arg0, jstring arg1);
		void __constructor(__jni_impl::java::util::regex::Pattern arg0, const QString &arg1);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "../../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject TextValueSanitizer::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.TextValueSanitizer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextValueSanitizer::__constructor(__jni_impl::java::util::regex::Pattern arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.TextValueSanitizer",
			"(Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TextValueSanitizer::__constructor(__jni_impl::java::util::regex::Pattern arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.TextValueSanitizer",
			"(Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint TextValueSanitizer::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextValueSanitizer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextValueSanitizer::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class TextValueSanitizer : public __jni_impl::android::service::autofill::TextValueSanitizer
	{
	public:
		TextValueSanitizer(QAndroidJniObject obj) { __thiz = obj; }
		TextValueSanitizer(__jni_impl::java::util::regex::Pattern arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::autofill

