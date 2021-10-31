#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CameraExtensionSession;
}

namespace android::hardware::camera2
{
	class CameraExtensionSession_StateCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraExtensionSession_StateCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionSession_StateCallback(QAndroidJniObject obj);
		
		// Constructors
		CameraExtensionSession_StateCallback();
		
		// Methods
		void onClosed(android::hardware::camera2::CameraExtensionSession arg0);
		void onConfigureFailed(android::hardware::camera2::CameraExtensionSession arg0);
		void onConfigured(android::hardware::camera2::CameraExtensionSession arg0);
	};
} // namespace android::hardware::camera2

