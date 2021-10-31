#include "./PendingIntent.hpp"
#include "../os/Parcel.hpp"
#include "./AuthenticationRequiredException.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass AuthenticationRequiredException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AuthenticationRequiredException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AuthenticationRequiredException::AuthenticationRequiredException(QAndroidJniObject obj) : java::lang::SecurityException(obj) {}
	
	// Constructors
	AuthenticationRequiredException::AuthenticationRequiredException(jthrowable arg0, android::app::PendingIntent arg1)
		: java::lang::SecurityException(
			"android.app.AuthenticationRequiredException",
			"(Ljava/lang/Throwable;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jint AuthenticationRequiredException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::PendingIntent AuthenticationRequiredException::getUserAction()
	{
		return callObjectMethod(
			"getUserAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	void AuthenticationRequiredException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

