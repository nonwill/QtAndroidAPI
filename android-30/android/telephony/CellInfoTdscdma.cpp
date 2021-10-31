#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellIdentityTdscdma.hpp"
#include "./CellSignalStrength.hpp"
#include "./CellSignalStrengthTdscdma.hpp"
#include "./CellInfoTdscdma.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass CellInfoTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellInfoTdscdma::CellInfoTdscdma(QAndroidJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfoTdscdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoTdscdma::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::telephony::CellIdentityTdscdma CellInfoTdscdma::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityTdscdma;"
		);
	}
	android::telephony::CellSignalStrengthTdscdma CellInfoTdscdma::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthTdscdma;"
		);
	}
	jint CellInfoTdscdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoTdscdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

