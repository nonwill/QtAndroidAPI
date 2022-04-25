#pragma once

#include "../../../JObject.hpp"

namespace android::media::midi
{
	class MidiReceiver;
}

namespace android::media::midi
{
	class MidiSender : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiSender(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiSender(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MidiSender();
		
		// Methods
		void connect(android::media::midi::MidiReceiver arg0) const;
		void disconnect(android::media::midi::MidiReceiver arg0) const;
		void onConnect(android::media::midi::MidiReceiver arg0) const;
		void onDisconnect(android::media::midi::MidiReceiver arg0) const;
	};
} // namespace android::media::midi
