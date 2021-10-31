#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class VoiceInteractor_Request;
}

namespace android::app
{
	class VoiceInteractor : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::app::VoiceInteractor_Request getActiveRequest(jstring arg0);
		jarray getActiveRequests();
		jboolean isDestroyed();
		void notifyDirectActionsChanged();
		jboolean registerOnDestroyedCallback(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0);
		jboolean submitRequest(android::app::VoiceInteractor_Request arg0, jstring arg1);
		jbooleanArray supportsCommands(jarray arg0);
		jboolean unregisterOnDestroyedCallback(__JniBaseClass arg0);
	};
} // namespace android::app
