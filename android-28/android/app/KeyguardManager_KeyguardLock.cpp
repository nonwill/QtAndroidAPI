#include "./KeyguardManager.hpp"
#include "./KeyguardManager_KeyguardLock.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	KeyguardManager_KeyguardLock::KeyguardManager_KeyguardLock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void KeyguardManager_KeyguardLock::disableKeyguard()
	{
		callMethod<void>(
			"disableKeyguard",
			"()V"
		);
	}
	void KeyguardManager_KeyguardLock::reenableKeyguard()
	{
		callMethod<void>(
			"reenableKeyguard",
			"()V"
		);
	}
} // namespace android::app
