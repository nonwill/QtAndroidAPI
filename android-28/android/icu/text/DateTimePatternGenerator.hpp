#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DateTimePatternGenerator_PatternInfo;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DateTimePatternGenerator : public JObject
	{
	public:
		// Fields
		static jint DAY();
		static jint DAYPERIOD();
		static jint DAY_OF_WEEK_IN_MONTH();
		static jint DAY_OF_YEAR();
		static jint ERA();
		static jint FRACTIONAL_SECOND();
		static jint HOUR();
		static jint MATCH_ALL_FIELDS_LENGTH();
		static jint MATCH_HOUR_FIELD_LENGTH();
		static jint MATCH_NO_OPTIONS();
		static jint MINUTE();
		static jint MONTH();
		static jint QUARTER();
		static jint SECOND();
		static jint WEEKDAY();
		static jint WEEK_OF_MONTH();
		static jint WEEK_OF_YEAR();
		static jint YEAR();
		static jint ZONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimePatternGenerator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateTimePatternGenerator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::DateTimePatternGenerator getEmptyInstance();
		static android::icu::text::DateTimePatternGenerator getInstance();
		static android::icu::text::DateTimePatternGenerator getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::DateTimePatternGenerator getInstance(java::util::Locale arg0);
		android::icu::text::DateTimePatternGenerator addPattern(jstring arg0, jboolean arg1, android::icu::text::DateTimePatternGenerator_PatternInfo arg2);
		jobject clone();
		android::icu::text::DateTimePatternGenerator cloneAsThawed();
		android::icu::text::DateTimePatternGenerator freeze();
		jstring getAppendItemFormat(jint arg0);
		jstring getAppendItemName(jint arg0);
		jstring getBaseSkeleton(jstring arg0);
		JObject getBaseSkeletons(JObject arg0);
		jstring getBestPattern(jstring arg0);
		jstring getBestPattern(jstring arg0, jint arg1);
		jstring getDateTimeFormat();
		jstring getDecimal();
		jstring getSkeleton(jstring arg0);
		JObject getSkeletons(JObject arg0);
		jboolean isFrozen();
		jstring replaceFieldTypes(jstring arg0, jstring arg1);
		jstring replaceFieldTypes(jstring arg0, jstring arg1, jint arg2);
		void setAppendItemFormat(jint arg0, jstring arg1);
		void setAppendItemName(jint arg0, jstring arg1);
		void setDateTimeFormat(jstring arg0);
		void setDecimal(jstring arg0);
	};
} // namespace android::icu::text

