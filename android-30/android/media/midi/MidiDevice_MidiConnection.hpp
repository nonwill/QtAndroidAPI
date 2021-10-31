#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::midi
{
	class MidiDevice;
}

namespace android::media::midi
{
	class MidiDevice_MidiConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDevice_MidiConnection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MidiDevice_MidiConnection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
	};
} // namespace android::media::midi

