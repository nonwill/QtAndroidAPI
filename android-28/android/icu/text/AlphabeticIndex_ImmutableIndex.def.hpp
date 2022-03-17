#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class AlphabeticIndex_Bucket;
}
class JString;

namespace android::icu::text
{
	class AlphabeticIndex_ImmutableIndex : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex_ImmutableIndex(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex_ImmutableIndex(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::icu::text::AlphabeticIndex_Bucket getBucket(jint arg0) const;
		jint getBucketCount() const;
		jint getBucketIndex(JString arg0) const;
		JObject iterator() const;
	};
} // namespace android::icu::text

