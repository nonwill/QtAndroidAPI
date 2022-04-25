#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class IDNA_Info : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IDNA_Info(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IDNA_Info(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		IDNA_Info();
		
		// Methods
		JObject getErrors() const;
		jboolean hasErrors() const;
		jboolean isTransitionalDifferent() const;
	};
} // namespace android::icu::text
