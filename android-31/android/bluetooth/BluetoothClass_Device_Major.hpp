#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::bluetooth
{
	class BluetoothClass_Device_Major : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_VIDEO();
		static jint COMPUTER();
		static jint HEALTH();
		static jint IMAGING();
		static jint MISC();
		static jint NETWORKING();
		static jint PERIPHERAL();
		static jint PHONE();
		static jint TOY();
		static jint UNCATEGORIZED();
		static jint WEARABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothClass_Device_Major(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothClass_Device_Major(QAndroidJniObject obj);
		
		// Constructors
		BluetoothClass_Device_Major();
		
		// Methods
	};
} // namespace android::bluetooth
