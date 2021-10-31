#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioAttributes;
}
namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class Vibrator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Vibrator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Vibrator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		jboolean hasAmplitudeControl();
		jboolean hasVibrator();
		void vibrate(android::os::VibrationEffect arg0);
		void vibrate(jlong arg0);
		void vibrate(jlongArray arg0, jint arg1);
		void vibrate(android::os::VibrationEffect arg0, android::media::AudioAttributes arg1);
		void vibrate(jlong arg0, android::media::AudioAttributes arg1);
		void vibrate(jlongArray arg0, jint arg1, android::media::AudioAttributes arg2);
	};
} // namespace android::os
