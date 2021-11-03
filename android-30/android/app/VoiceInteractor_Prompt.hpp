#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::app
{
	class VoiceInteractor_Prompt : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_Prompt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_Prompt(QJniObject obj);
		
		// Constructors
		VoiceInteractor_Prompt(JString arg0);
		VoiceInteractor_Prompt(JArray arg0, JString arg1);
		
		// Methods
		jint countVoicePrompts();
		jint describeContents();
		JString getVisualPrompt();
		JString getVoicePromptAt(jint arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

