#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MmTelFeature_MmTelCapabilities.hpp"

namespace android::telephony::ims::feature
{
	// Fields
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_SMS"
		);
	}
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_UT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_UT"
		);
	}
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_VIDEO"
		);
	}
	jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_VOICE"
		);
	}
	
	// QAndroidJniObject forward
	MmTelFeature_MmTelCapabilities::MmTelFeature_MmTelCapabilities(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MmTelFeature_MmTelCapabilities::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MmTelFeature_MmTelCapabilities::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString MmTelFeature_MmTelCapabilities::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::ims::feature

