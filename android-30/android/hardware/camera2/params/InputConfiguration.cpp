#include "./InputConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	InputConfiguration::InputConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputConfiguration::InputConfiguration(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.params.InputConfiguration",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean InputConfiguration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint InputConfiguration::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint InputConfiguration::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint InputConfiguration::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint InputConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InputConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

