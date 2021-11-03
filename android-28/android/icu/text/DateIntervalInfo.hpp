#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo;
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
	class DateIntervalInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateIntervalInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalInfo(QJniObject obj);
		
		// Constructors
		DateIntervalInfo(android::icu::util::ULocale arg0);
		DateIntervalInfo(java::util::Locale arg0);
		
		// Methods
		jobject clone();
		android::icu::text::DateIntervalInfo cloneAsThawed();
		jboolean equals(jobject arg0);
		android::icu::text::DateIntervalInfo freeze();
		jboolean getDefaultOrder();
		jstring getFallbackIntervalPattern();
		android::icu::text::DateIntervalInfo_PatternInfo getIntervalPattern(jstring arg0, jint arg1);
		jint hashCode();
		jboolean isFrozen();
		void setFallbackIntervalPattern(jstring arg0);
		void setIntervalPattern(jstring arg0, jint arg1, jstring arg2);
	};
} // namespace android::icu::text

