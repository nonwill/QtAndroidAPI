#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::text
{
	class ClipboardManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipboardManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipboardManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ClipboardManager();
		
		// Methods
		JString getText() const;
		jboolean hasText() const;
		void setText(JString arg0) const;
	};
} // namespace android::text
