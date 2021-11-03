#pragma once

#include "../../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraCaptureSession_StateCallback;
}
namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2::params
{
	class InputConfiguration;
}

namespace android::hardware::camera2::params
{
	class SessionConfiguration : public JObject
	{
	public:
		// Fields
		static jint SESSION_HIGH_SPEED();
		static jint SESSION_REGULAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SessionConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SessionConfiguration(QAndroidJniObject obj);
		
		// Constructors
		SessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraCaptureSession_StateCallback arg3);
		
		// Methods
		JObject getExecutor() const;
		android::hardware::camera2::params::InputConfiguration getInputConfiguration() const;
		JObject getOutputConfigurations() const;
		android::hardware::camera2::CaptureRequest getSessionParameters() const;
		jint getSessionType() const;
		android::hardware::camera2::CameraCaptureSession_StateCallback getStateCallback() const;
		void setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0) const;
		void setSessionParameters(android::hardware::camera2::CaptureRequest arg0) const;
	};
} // namespace android::hardware::camera2::params

