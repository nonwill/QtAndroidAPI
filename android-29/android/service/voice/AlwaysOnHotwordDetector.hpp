#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::service::voice
{
	class AlwaysOnHotwordDetector : public __JniBaseClass
	{
	public:
		// Fields
		static jint RECOGNITION_FLAG_ALLOW_MULTIPLE_TRIGGERS();
		static jint RECOGNITION_FLAG_CAPTURE_TRIGGER_AUDIO();
		static jint RECOGNITION_MODE_USER_IDENTIFICATION();
		static jint RECOGNITION_MODE_VOICE_TRIGGER();
		static jint STATE_HARDWARE_UNAVAILABLE();
		static jint STATE_KEYPHRASE_ENROLLED();
		static jint STATE_KEYPHRASE_UNENROLLED();
		static jint STATE_KEYPHRASE_UNSUPPORTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createEnrollIntent();
		android::content::Intent createReEnrollIntent();
		android::content::Intent createUnEnrollIntent();
		jint getSupportedRecognitionModes();
		jboolean startRecognition(jint arg0);
		jboolean stopRecognition();
	};
} // namespace android::service::voice

