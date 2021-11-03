#include "./feature/MmTelFeature_MmTelCapabilities.hpp"
#include "./ImsMmTelManager_CapabilityCallback.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// QAndroidJniObject forward
	ImsMmTelManager_CapabilityCallback::ImsMmTelManager_CapabilityCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ImsMmTelManager_CapabilityCallback::ImsMmTelManager_CapabilityCallback()
		: JObject(
			"android.telephony.ims.ImsMmTelManager$CapabilityCallback",
			"()V"
		) {}
	
	// Methods
	void ImsMmTelManager_CapabilityCallback::onCapabilitiesStatusChanged(android::telephony::ims::feature::MmTelFeature_MmTelCapabilities arg0) const
	{
		callMethod<void>(
			"onCapabilitiesStatusChanged",
			"(Landroid/telephony/ims/feature/MmTelFeature$MmTelCapabilities;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

