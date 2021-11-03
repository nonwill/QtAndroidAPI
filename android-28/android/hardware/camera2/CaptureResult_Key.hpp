#pragma once

#include "../../../JObject.hpp"


namespace android::hardware::camera2
{
	class CaptureResult_Key : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureResult_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureResult_Key(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2

