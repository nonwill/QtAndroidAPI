#pragma once

#include "../../JObject.hpp"


namespace android::text
{
	class ClipboardManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClipboardManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipboardManager(QJniObject obj);
		
		// Constructors
		ClipboardManager();
		
		// Methods
		jstring getText();
		jboolean hasText();
		void setText(jstring arg0);
	};
} // namespace android::text

