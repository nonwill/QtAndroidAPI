#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::nfc
{
	class NdefRecord;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::nfc
{
	class NdefMessage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jarray arg0);
		void __constructor(__jni_impl::android::nfc::NdefRecord arg0, jarray arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getByteArrayLength();
		jarray getRecords();
		jint hashCode();
		jbyteArray toByteArray();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::nfc

#include "./NdefRecord.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::nfc
{
	// Fields
	QAndroidJniObject NdefMessage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.nfc.NdefMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void NdefMessage::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"([B)V",
			arg0
		);
	}
	void NdefMessage::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"([Landroid/nfc/NdefRecord;)V",
			arg0
		);
	}
	void NdefMessage::__constructor(__jni_impl::android::nfc::NdefRecord arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.nfc.NdefMessage",
			"(Landroid/nfc/NdefRecord;[Landroid/nfc/NdefRecord;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint NdefMessage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NdefMessage::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NdefMessage::getByteArrayLength()
	{
		return __thiz.callMethod<jint>(
			"getByteArrayLength",
			"()I"
		);
	}
	jarray NdefMessage::getRecords()
	{
		return __thiz.callObjectMethod(
			"getRecords",
			"()[Landroid/nfc/NdefRecord;"
		).object<jarray>();
	}
	jint NdefMessage::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jbyteArray NdefMessage::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring NdefMessage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NdefMessage::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::nfc

namespace android::nfc
{
	class NdefMessage : public __jni_impl::android::nfc::NdefMessage
	{
	public:
		NdefMessage(QAndroidJniObject obj) { __thiz = obj; }
		NdefMessage(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		NdefMessage(jarray arg0)
		{
			__constructor(
				arg0);
		}
		NdefMessage(__jni_impl::android::nfc::NdefRecord arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::nfc

