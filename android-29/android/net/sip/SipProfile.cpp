#include "../../os/Parcel.hpp"
#include "./SipProfile.hpp"

namespace android::net::sip
{
	// Fields
	__JniBaseClass SipProfile::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.sip.SipProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SipProfile::SipProfile(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SipProfile::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring SipProfile::getAuthUserName()
	{
		return callObjectMethod(
			"getAuthUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SipProfile::getAutoRegistration()
	{
		return callMethod<jboolean>(
			"getAutoRegistration",
			"()Z"
		);
	}
	jstring SipProfile::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SipProfile::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring SipProfile::getProfileName()
	{
		return callObjectMethod(
			"getProfileName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getProtocol()
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getProxyAddress()
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SipProfile::getSendKeepAlive()
	{
		return callMethod<jboolean>(
			"getSendKeepAlive",
			"()Z"
		);
	}
	jstring SipProfile::getSipDomain()
	{
		return callObjectMethod(
			"getSipDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getUriString()
	{
		return callObjectMethod(
			"getUriString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getUserName()
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SipProfile::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::sip

