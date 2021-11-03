#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AlwaysOnHotwordDetector_ModelParamRange.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	AlwaysOnHotwordDetector_ModelParamRange::AlwaysOnHotwordDetector_ModelParamRange(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AlwaysOnHotwordDetector_ModelParamRange::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AlwaysOnHotwordDetector_ModelParamRange::getEnd()
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	jint AlwaysOnHotwordDetector_ModelParamRange::getStart()
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	jint AlwaysOnHotwordDetector_ModelParamRange::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AlwaysOnHotwordDetector_ModelParamRange::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::voice

