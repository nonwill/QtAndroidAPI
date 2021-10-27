#include "../../os/Parcel.hpp"
#include "./AutofillValue.hpp"

namespace android::view::autofill
{
	// Fields
	QAndroidJniObject AutofillValue::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.autofill.AutofillValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AutofillValue::AutofillValue(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AutofillValue::forDate(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forDate",
			"(J)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	QAndroidJniObject AutofillValue::forList(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forList",
			"(I)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	QAndroidJniObject AutofillValue::forText(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	QAndroidJniObject AutofillValue::forText(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/autofill/AutofillValue;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject AutofillValue::forToggle(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.autofill.AutofillValue",
			"forToggle",
			"(Z)Landroid/view/autofill/AutofillValue;",
			arg0
		);
	}
	jint AutofillValue::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AutofillValue::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong AutofillValue::getDateValue()
	{
		return __thiz.callMethod<jlong>(
			"getDateValue",
			"()J"
		);
	}
	jint AutofillValue::getListValue()
	{
		return __thiz.callMethod<jint>(
			"getListValue",
			"()I"
		);
	}
	jstring AutofillValue::getTextValue()
	{
		return __thiz.callObjectMethod(
			"getTextValue",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean AutofillValue::getToggleValue()
	{
		return __thiz.callMethod<jboolean>(
			"getToggleValue",
			"()Z"
		);
	}
	jint AutofillValue::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AutofillValue::isDate()
	{
		return __thiz.callMethod<jboolean>(
			"isDate",
			"()Z"
		);
	}
	jboolean AutofillValue::isList()
	{
		return __thiz.callMethod<jboolean>(
			"isList",
			"()Z"
		);
	}
	jboolean AutofillValue::isText()
	{
		return __thiz.callMethod<jboolean>(
			"isText",
			"()Z"
		);
	}
	jboolean AutofillValue::isToggle()
	{
		return __thiz.callMethod<jboolean>(
			"isToggle",
			"()Z"
		);
	}
	jstring AutofillValue::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AutofillValue::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::autofill
