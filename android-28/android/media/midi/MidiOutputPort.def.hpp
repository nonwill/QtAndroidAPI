#pragma once

#include "./MidiSender.def.hpp"

namespace android::media::midi
{
	class MidiReceiver;
}
namespace java::io
{
	class FileDescriptor;
}

namespace android::media::midi
{
	class MidiOutputPort : public android::media::midi::MidiSender
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiOutputPort(const char *className, const char *sig, Ts...agv) : android::media::midi::MidiSender(className, sig, std::forward<Ts>(agv)...) {}
		MidiOutputPort(QAndroidJniObject obj) : android::media::midi::MidiSender(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jint getPortNumber() const;
		void onConnect(android::media::midi::MidiReceiver arg0) const;
		void onDisconnect(android::media::midi::MidiReceiver arg0) const;
	};
} // namespace android::media::midi
