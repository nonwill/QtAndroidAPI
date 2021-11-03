#pragma once

#include "../../../JObject.hpp"


namespace android::icu::text
{
	class UnicodeFilter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeFilter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean contains(jint arg0);
		jint matches(JObject arg0, jintArray arg1, jint arg2, jboolean arg3);
	};
} // namespace android::icu::text

