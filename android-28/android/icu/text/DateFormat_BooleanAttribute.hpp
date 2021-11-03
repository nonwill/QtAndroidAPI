#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class DateFormat_BooleanAttribute : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DateFormat_BooleanAttribute PARSE_ALLOW_NUMERIC();
		static android::icu::text::DateFormat_BooleanAttribute PARSE_ALLOW_WHITESPACE();
		static android::icu::text::DateFormat_BooleanAttribute PARSE_MULTIPLE_PATTERNS_FOR_MATCH();
		static android::icu::text::DateFormat_BooleanAttribute PARSE_PARTIAL_LITERAL_MATCH();
		static android::icu::text::DateFormat_BooleanAttribute PARSE_PARTIAL_MATCH();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateFormat_BooleanAttribute(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DateFormat_BooleanAttribute(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::DateFormat_BooleanAttribute valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

