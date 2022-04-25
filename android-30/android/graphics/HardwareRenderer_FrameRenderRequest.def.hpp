#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class HardwareRenderer;
}

namespace android::graphics
{
	class HardwareRenderer_FrameRenderRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HardwareRenderer_FrameRenderRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwareRenderer_FrameRenderRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::HardwareRenderer_FrameRenderRequest setFrameCommitCallback(JObject arg0, JObject arg1) const;
		android::graphics::HardwareRenderer_FrameRenderRequest setVsyncTime(jlong arg0) const;
		android::graphics::HardwareRenderer_FrameRenderRequest setWaitForPresent(jboolean arg0) const;
		jint syncAndDraw() const;
	};
} // namespace android::graphics
