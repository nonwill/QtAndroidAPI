#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/UUID.hpp"
#include "./AudioEffect_Descriptor.hpp"

namespace android::media::audiofx
{
	// Fields
	JString AudioEffect_Descriptor::connectMode()
	{
		return getObjectField(
			"connectMode",
			"Ljava/lang/String;"
		);
	}
	JString AudioEffect_Descriptor::implementor()
	{
		return getObjectField(
			"implementor",
			"Ljava/lang/String;"
		);
	}
	JString AudioEffect_Descriptor::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	java::util::UUID AudioEffect_Descriptor::type()
	{
		return getObjectField(
			"type",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect_Descriptor::uuid()
	{
		return getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	// QAndroidJniObject forward
	AudioEffect_Descriptor::AudioEffect_Descriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AudioEffect_Descriptor::AudioEffect_Descriptor()
		: JObject(
			"android.media.audiofx.AudioEffect$Descriptor",
			"()V"
		) {}
	AudioEffect_Descriptor::AudioEffect_Descriptor(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4)
		: JObject(
			"android.media.audiofx.AudioEffect$Descriptor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		) {}
	
	// Methods
	jboolean AudioEffect_Descriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AudioEffect_Descriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::audiofx

