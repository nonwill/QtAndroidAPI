#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::service::voice
{
	class VoiceInteractionSession_Request : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		JString getCallingPackage();
		jint getCallingUid();
		android::os::Bundle getExtras();
		jboolean isActive();
		JString toString();
	};
} // namespace android::service::voice

