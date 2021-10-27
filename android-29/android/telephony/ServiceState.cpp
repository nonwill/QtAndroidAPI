#include "../os/Parcel.hpp"
#include "./ServiceState.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject ServiceState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.ServiceState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ServiceState::DUPLEX_MODE_FDD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_FDD"
		);
	}
	jint ServiceState::DUPLEX_MODE_TDD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_TDD"
		);
	}
	jint ServiceState::DUPLEX_MODE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"DUPLEX_MODE_UNKNOWN"
		);
	}
	jint ServiceState::STATE_EMERGENCY_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_EMERGENCY_ONLY"
		);
	}
	jint ServiceState::STATE_IN_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_IN_SERVICE"
		);
	}
	jint ServiceState::STATE_OUT_OF_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_OUT_OF_SERVICE"
		);
	}
	jint ServiceState::STATE_POWER_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"STATE_POWER_OFF"
		);
	}
	jint ServiceState::UNKNOWN_ID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.ServiceState",
			"UNKNOWN_ID"
		);
	}
	
	ServiceState::ServiceState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ServiceState::ServiceState()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.ServiceState",
			"()V"
		);
	}
	ServiceState::ServiceState(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.ServiceState",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	ServiceState::ServiceState(android::telephony::ServiceState &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telephony.ServiceState",
			"(Landroid/telephony/ServiceState;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ServiceState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ServiceState::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ServiceState::getCdmaNetworkId()
	{
		return __thiz.callMethod<jint>(
			"getCdmaNetworkId",
			"()I"
		);
	}
	jint ServiceState::getCdmaSystemId()
	{
		return __thiz.callMethod<jint>(
			"getCdmaSystemId",
			"()I"
		);
	}
	jintArray ServiceState::getCellBandwidths()
	{
		return __thiz.callObjectMethod(
			"getCellBandwidths",
			"()[I"
		).object<jintArray>();
	}
	jint ServiceState::getChannelNumber()
	{
		return __thiz.callMethod<jint>(
			"getChannelNumber",
			"()I"
		);
	}
	jint ServiceState::getDuplexMode()
	{
		return __thiz.callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	jboolean ServiceState::getIsManualSelection()
	{
		return __thiz.callMethod<jboolean>(
			"getIsManualSelection",
			"()Z"
		);
	}
	jstring ServiceState::getOperatorAlphaLong()
	{
		return __thiz.callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ServiceState::getOperatorAlphaShort()
	{
		return __thiz.callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ServiceState::getOperatorNumeric()
	{
		return __thiz.callObjectMethod(
			"getOperatorNumeric",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ServiceState::getRoaming()
	{
		return __thiz.callMethod<jboolean>(
			"getRoaming",
			"()Z"
		);
	}
	jint ServiceState::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint ServiceState::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ServiceState::setIsManualSelection(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIsManualSelection",
			"(Z)V",
			arg0
		);
	}
	void ServiceState::setOperatorName(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setOperatorName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ServiceState::setOperatorName(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"setOperatorName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void ServiceState::setRoaming(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setRoaming",
			"(Z)V",
			arg0
		);
	}
	void ServiceState::setState(jint arg0)
	{
		__thiz.callMethod<void>(
			"setState",
			"(I)V",
			arg0
		);
	}
	void ServiceState::setStateOff()
	{
		__thiz.callMethod<void>(
			"setStateOff",
			"()V"
		);
	}
	void ServiceState::setStateOutOfService()
	{
		__thiz.callMethod<void>(
			"setStateOutOfService",
			"()V"
		);
	}
	jstring ServiceState::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ServiceState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony
