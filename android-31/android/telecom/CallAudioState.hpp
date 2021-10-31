#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class CallAudioState : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint ROUTE_BLUETOOTH();
		static jint ROUTE_EARPIECE();
		static jint ROUTE_SPEAKER();
		static jint ROUTE_WIRED_HEADSET();
		static jint ROUTE_WIRED_OR_EARPIECE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallAudioState(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallAudioState(QAndroidJniObject obj);
		
		// Constructors
		CallAudioState(jboolean arg0, jint arg1, jint arg2);
		
		// Methods
		static jstring audioRouteToString(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::bluetooth::BluetoothDevice getActiveBluetoothDevice();
		jint getRoute();
		__JniBaseClass getSupportedBluetoothDevices();
		jint getSupportedRouteMask();
		jboolean isMuted();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom
