#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JBooleanArray;
namespace android::app
{
	class VoiceInteractor_Request;
}
class JString;

namespace android::app
{
	class VoiceInteractor : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::app::VoiceInteractor_Request getActiveRequest(JString arg0) const;
		JArray getActiveRequests() const;
		JString getPackageName() const;
		jboolean isDestroyed() const;
		void notifyDirectActionsChanged() const;
		jboolean registerOnDestroyedCallback(JObject arg0, JObject arg1) const;
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0) const;
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0, JString arg1) const;
		JBooleanArray supportsCommands(JArray arg0) const;
		jboolean unregisterOnDestroyedCallback(JObject arg0) const;
	};
} // namespace android::app

