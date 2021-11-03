#pragma once

#include "./TtsSpan_Builder.hpp"

class JString;

namespace android::text::style
{
	class TtsSpan_SemioticClassBuilder : public android::text::style::TtsSpan_Builder
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TtsSpan_SemioticClassBuilder(const char *className, const char *sig, Ts...agv) : android::text::style::TtsSpan_Builder(className, sig, std::forward<Ts>(agv)...) {}
		TtsSpan_SemioticClassBuilder(QAndroidJniObject obj);
		
		// Constructors
		TtsSpan_SemioticClassBuilder(JString arg0);
		
		// Methods
		android::text::style::TtsSpan_SemioticClassBuilder setAnimacy(JString arg0);
		android::text::style::TtsSpan_SemioticClassBuilder setCase(JString arg0);
		android::text::style::TtsSpan_SemioticClassBuilder setGender(JString arg0);
		android::text::style::TtsSpan_SemioticClassBuilder setMultiplicity(JString arg0);
	};
} // namespace android::text::style

