#include "../../JLongArray.hpp"
#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NotificationChannel.hpp"

namespace android::app
{
	// Fields
	JObject NotificationChannel::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString NotificationChannel::DEFAULT_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"DEFAULT_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	NotificationChannel::NotificationChannel(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NotificationChannel::NotificationChannel(JString arg0, JString arg1, jint arg2)
		: JObject(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jboolean NotificationChannel::canBypassDnd()
	{
		return callMethod<jboolean>(
			"canBypassDnd",
			"()Z"
		);
	}
	jboolean NotificationChannel::canShowBadge()
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jint NotificationChannel::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NotificationChannel::enableLights(jboolean arg0)
	{
		callMethod<void>(
			"enableLights",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::enableVibration(jboolean arg0)
	{
		callMethod<void>(
			"enableVibration",
			"(Z)V",
			arg0
		);
	}
	jboolean NotificationChannel::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::AudioAttributes NotificationChannel::getAudioAttributes()
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	JString NotificationChannel::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannel::getGroup()
	{
		return callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannel::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jint NotificationChannel::getImportance()
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jint NotificationChannel::getLightColor()
	{
		return callMethod<jint>(
			"getLightColor",
			"()I"
		);
	}
	jint NotificationChannel::getLockscreenVisibility()
	{
		return callMethod<jint>(
			"getLockscreenVisibility",
			"()I"
		);
	}
	JString NotificationChannel::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::net::Uri NotificationChannel::getSound()
	{
		return callObjectMethod(
			"getSound",
			"()Landroid/net/Uri;"
		);
	}
	JLongArray NotificationChannel::getVibrationPattern()
	{
		return callObjectMethod(
			"getVibrationPattern",
			"()[J"
		);
	}
	jint NotificationChannel::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void NotificationChannel::setBypassDnd(jboolean arg0)
	{
		callMethod<void>(
			"setBypassDnd",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setDescription(JString arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NotificationChannel::setGroup(JString arg0)
	{
		callMethod<void>(
			"setGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NotificationChannel::setImportance(jint arg0)
	{
		callMethod<void>(
			"setImportance",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLightColor(jint arg0)
	{
		callMethod<void>(
			"setLightColor",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLockscreenVisibility(jint arg0)
	{
		callMethod<void>(
			"setLockscreenVisibility",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setName(JString arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void NotificationChannel::setShowBadge(jboolean arg0)
	{
		callMethod<void>(
			"setShowBadge",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1)
	{
		callMethod<void>(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NotificationChannel::setVibrationPattern(JLongArray arg0)
	{
		callMethod<void>(
			"setVibrationPattern",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	jboolean NotificationChannel::shouldShowLights()
	{
		return callMethod<jboolean>(
			"shouldShowLights",
			"()Z"
		);
	}
	jboolean NotificationChannel::shouldVibrate()
	{
		return callMethod<jboolean>(
			"shouldVibrate",
			"()Z"
		);
	}
	JString NotificationChannel::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NotificationChannel::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

