#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class AlphabeticIndex_ImmutableIndex;
}
namespace android::icu::text
{
	class RuleBasedCollator;
}
namespace android::icu::text
{
	class UnicodeSet;
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
	class AlphabeticIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex(QJniObject obj);
		
		// Constructors
		AlphabeticIndex(android::icu::text::RuleBasedCollator arg0);
		AlphabeticIndex(android::icu::util::ULocale arg0);
		AlphabeticIndex(java::util::Locale arg0);
		
		// Methods
		android::icu::text::AlphabeticIndex addLabels(jarray arg0);
		android::icu::text::AlphabeticIndex addLabels(android::icu::text::UnicodeSet arg0);
		android::icu::text::AlphabeticIndex addRecord(jstring arg0, jobject arg1);
		android::icu::text::AlphabeticIndex_ImmutableIndex buildImmutableIndex();
		android::icu::text::AlphabeticIndex clearRecords();
		jint getBucketCount();
		jint getBucketIndex(jstring arg0);
		__JniBaseClass getBucketLabels();
		android::icu::text::RuleBasedCollator getCollator();
		jstring getInflowLabel();
		jint getMaxLabelCount();
		jstring getOverflowLabel();
		jint getRecordCount();
		jstring getUnderflowLabel();
		__JniBaseClass iterator();
		android::icu::text::AlphabeticIndex setInflowLabel(jstring arg0);
		android::icu::text::AlphabeticIndex setMaxLabelCount(jint arg0);
		android::icu::text::AlphabeticIndex setOverflowLabel(jstring arg0);
		android::icu::text::AlphabeticIndex setUnderflowLabel(jstring arg0);
	};
} // namespace android::icu::text

