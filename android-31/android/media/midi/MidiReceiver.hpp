#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::media::midi
{
	class MidiReceiver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiReceiver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiReceiver(QAndroidJniObject obj);
		
		// Constructors
		MidiReceiver();
		MidiReceiver(jint arg0);
		
		// Methods
		void flush();
		jint getMaxMessageSize();
		void onFlush();
		void onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3);
		void send(JByteArray arg0, jint arg1, jint arg2);
		void send(JByteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace android::media::midi

