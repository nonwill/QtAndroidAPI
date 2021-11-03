#pragma once

#include "../../../JObject.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::speech::tts
{
	class SynthesisRequest;
}

namespace android::speech::tts
{
	class TextToSpeechService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextToSpeechService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TextToSpeechService(QJniObject obj);
		
		// Constructors
		TextToSpeechService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onCreate();
		void onDestroy();
		jstring onGetDefaultVoiceNameFor(jstring arg0, jstring arg1, jstring arg2);
		JObject onGetVoices();
		jint onIsValidVoiceName(jstring arg0);
		jint onLoadVoice(jstring arg0);
	};
} // namespace android::speech::tts

