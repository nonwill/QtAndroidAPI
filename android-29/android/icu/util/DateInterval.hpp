#pragma once

#include "../../../JObject.hpp"


namespace android::icu::util
{
	class DateInterval : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateInterval(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateInterval(QJniObject obj);
		
		// Constructors
		DateInterval(jlong arg0, jlong arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jlong getFromDate();
		jlong getToDate();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

