#pragma once

#include "../../../JObject.hpp"

namespace android::view::translation
{
	class UiTranslationManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UiTranslationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UiTranslationManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void registerUiTranslationStateCallback(JObject arg0, JObject arg1) const;
		void unregisterUiTranslationStateCallback(JObject arg0) const;
	};
} // namespace android::view::translation
