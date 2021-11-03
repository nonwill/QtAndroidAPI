#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NotificationChannelGroup.hpp"

namespace android::app
{
	// Fields
	JObject NotificationChannelGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationChannelGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	NotificationChannelGroup::NotificationChannelGroup(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NotificationChannelGroup::NotificationChannelGroup(JString arg0, JString arg1)
		: JObject(
			"android.app.NotificationChannelGroup",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::app::NotificationChannelGroup NotificationChannelGroup::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/NotificationChannelGroup;"
		);
	}
	jint NotificationChannelGroup::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NotificationChannelGroup::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject NotificationChannelGroup::getChannels()
	{
		return callObjectMethod(
			"getChannels",
			"()Ljava/util/List;"
		);
	}
	JString NotificationChannelGroup::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannelGroup::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannelGroup::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint NotificationChannelGroup::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NotificationChannelGroup::isBlocked()
	{
		return callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	void NotificationChannelGroup::setDescription(JString arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString NotificationChannelGroup::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NotificationChannelGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

