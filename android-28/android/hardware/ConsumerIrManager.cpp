#include "./ConsumerIrManager.hpp"

namespace android::hardware
{
	// Fields
	
	// QAndroidJniObject forward
	ConsumerIrManager::ConsumerIrManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray ConsumerIrManager::getCarrierFrequencies()
	{
		return callObjectMethod(
			"getCarrierFrequencies",
			"()[Landroid/hardware/ConsumerIrManager$CarrierFrequencyRange;"
		).object<jarray>();
	}
	jboolean ConsumerIrManager::hasIrEmitter()
	{
		return callMethod<jboolean>(
			"hasIrEmitter",
			"()Z"
		);
	}
	void ConsumerIrManager::transmit(jint arg0, jintArray arg1)
	{
		callMethod<void>(
			"transmit",
			"(I[I)V",
			arg0,
			arg1
		);
	}
} // namespace android::hardware

