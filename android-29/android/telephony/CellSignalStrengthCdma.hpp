#pragma once

#ifndef ANDROID_TELEPHONY_CELLSIGNALSTRENGTHCDMA
#define ANDROID_TELEPHONY_CELLSIGNALSTRENGTHCDMA

#include "../../__JniBaseClass.hpp"
#include "CellSignalStrength.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellSignalStrengthCdma : public __jni_impl::android::telephony::CellSignalStrength
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getCdmaDbm();
		jint getCdmaEcio();
		jint getCdmaLevel();
		jint getDbm();
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoLevel();
		jint getEvdoSnr();
		jint getLevel();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthCdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellSignalStrengthCdma::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrengthCdma",
			"(V)V");
	}
	
	// Methods
	jint CellSignalStrengthCdma::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthCdma::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthCdma::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaDbm()
	{
		return __thiz.callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaEcio()
	{
		return __thiz.callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaLevel()
	{
		return __thiz.callMethod<jint>(
			"getCdmaLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoDbm()
	{
		return __thiz.callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoEcio()
	{
		return __thiz.callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoLevel()
	{
		return __thiz.callMethod<jint>(
			"getEvdoLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoSnr()
	{
		return __thiz.callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthCdma::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthCdma::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellSignalStrengthCdma : public __jni_impl::android::telephony::CellSignalStrengthCdma
	{
	public:
		CellSignalStrengthCdma(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrengthCdma()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLSIGNALSTRENGTHCDMA

