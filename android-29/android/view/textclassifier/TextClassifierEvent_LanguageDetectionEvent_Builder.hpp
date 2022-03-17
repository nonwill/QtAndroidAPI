#pragma once

#include "./TextClassifierEvent_LanguageDetectionEvent.def.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassifierEvent_LanguageDetectionEvent_Builder::TextClassifierEvent_LanguageDetectionEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassifierEvent_LanguageDetectionEvent TextClassifierEvent_LanguageDetectionEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$LanguageDetectionEvent;"
		);
	}
} // namespace android::view::textclassifier

// Base class headers
#include "./TextClassifierEvent_Builder.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
