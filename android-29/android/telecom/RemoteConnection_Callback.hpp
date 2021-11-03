#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class DisconnectCause;
}
namespace android::telecom
{
	class RemoteConference;
}
namespace android::telecom
{
	class RemoteConnection;
}
namespace android::telecom
{
	class RemoteConnection_VideoProvider;
}
namespace android::telecom
{
	class StatusHints;
}
class JString;

namespace android::telecom
{
	class RemoteConnection_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteConnection_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection_Callback(QJniObject obj);
		
		// Constructors
		RemoteConnection_Callback();
		
		// Methods
		void onAddressChanged(android::telecom::RemoteConnection arg0, android::net::Uri arg1, jint arg2);
		void onCallerDisplayNameChanged(android::telecom::RemoteConnection arg0, JString arg1, jint arg2);
		void onConferenceChanged(android::telecom::RemoteConnection arg0, android::telecom::RemoteConference arg1);
		void onConferenceableConnectionsChanged(android::telecom::RemoteConnection arg0, JObject arg1);
		void onConnectionCapabilitiesChanged(android::telecom::RemoteConnection arg0, jint arg1);
		void onConnectionEvent(android::telecom::RemoteConnection arg0, JString arg1, android::os::Bundle arg2);
		void onConnectionPropertiesChanged(android::telecom::RemoteConnection arg0, jint arg1);
		void onDestroyed(android::telecom::RemoteConnection arg0);
		void onDisconnected(android::telecom::RemoteConnection arg0, android::telecom::DisconnectCause arg1);
		void onExtrasChanged(android::telecom::RemoteConnection arg0, android::os::Bundle arg1);
		void onPostDialChar(android::telecom::RemoteConnection arg0, jchar arg1);
		void onPostDialWait(android::telecom::RemoteConnection arg0, JString arg1);
		void onRingbackRequested(android::telecom::RemoteConnection arg0, jboolean arg1);
		void onStateChanged(android::telecom::RemoteConnection arg0, jint arg1);
		void onStatusHintsChanged(android::telecom::RemoteConnection arg0, android::telecom::StatusHints arg1);
		void onVideoProviderChanged(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection_VideoProvider arg1);
		void onVideoStateChanged(android::telecom::RemoteConnection arg0, jint arg1);
		void onVoipAudioChanged(android::telecom::RemoteConnection arg0, jboolean arg1);
	};
} // namespace android::telecom

