#include "../../../../os/Parcel.hpp"
#include "../../../../os/UserHandle.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./DomainVerificationUserState.hpp"

namespace android::content::pm::verify::domain
{
	// Fields
	JObject DomainVerificationUserState::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DomainVerificationUserState::DOMAIN_STATE_NONE()
	{
		return getStaticField<jint>(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"DOMAIN_STATE_NONE"
		);
	}
	jint DomainVerificationUserState::DOMAIN_STATE_SELECTED()
	{
		return getStaticField<jint>(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"DOMAIN_STATE_SELECTED"
		);
	}
	jint DomainVerificationUserState::DOMAIN_STATE_VERIFIED()
	{
		return getStaticField<jint>(
			"android.content.pm.verify.domain.DomainVerificationUserState",
			"DOMAIN_STATE_VERIFIED"
		);
	}
	
	// QAndroidJniObject forward
	DomainVerificationUserState::DomainVerificationUserState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DomainVerificationUserState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DomainVerificationUserState::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject DomainVerificationUserState::getHostToStateMap()
	{
		return callObjectMethod(
			"getHostToStateMap",
			"()Ljava/util/Map;"
		);
	}
	JString DomainVerificationUserState::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::os::UserHandle DomainVerificationUserState::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	jint DomainVerificationUserState::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DomainVerificationUserState::isLinkHandlingAllowed()
	{
		return callMethod<jboolean>(
			"isLinkHandlingAllowed",
			"()Z"
		);
	}
	JString DomainVerificationUserState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DomainVerificationUserState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm::verify::domain

