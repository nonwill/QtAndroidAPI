#include "./Light.hpp"
#include "./LightState.hpp"
#include "./LightsRequest.hpp"
#include "./LightsRequest_Builder.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QAndroidJniObject forward
	LightsRequest_Builder::LightsRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LightsRequest_Builder::LightsRequest_Builder()
		: __JniBaseClass(
			"android.hardware.lights.LightsRequest$Builder",
			"()V"
		) {}
	
	// Methods
	android::hardware::lights::LightsRequest_Builder LightsRequest_Builder::addLight(android::hardware::lights::Light arg0, android::hardware::lights::LightState arg1)
	{
		return callObjectMethod(
			"addLight",
			"(Landroid/hardware/lights/Light;Landroid/hardware/lights/LightState;)Landroid/hardware/lights/LightsRequest$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::hardware::lights::LightsRequest LightsRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/lights/LightsRequest;"
		);
	}
	android::hardware::lights::LightsRequest_Builder LightsRequest_Builder::clearLight(android::hardware::lights::Light arg0)
	{
		return callObjectMethod(
			"clearLight",
			"(Landroid/hardware/lights/Light;)Landroid/hardware/lights/LightsRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::hardware::lights
