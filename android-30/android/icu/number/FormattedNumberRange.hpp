#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityResult;
}
namespace java::math
{
	class BigDecimal;
}

namespace android::icu::number
{
	class FormattedNumberRange : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormattedNumberRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FormattedNumberRange(QJniObject obj);
		
		// Constructors
		
		// Methods
		jchar charAt(jint arg0);
		jboolean equals(jobject arg0);
		java::math::BigDecimal getFirstBigDecimal();
		android::icu::number::NumberRangeFormatter_RangeIdentityResult getIdentityResult();
		java::math::BigDecimal getSecondBigDecimal();
		jint hashCode();
		jint length();
		jstring subSequence(jint arg0, jint arg1);
		JObject toCharacterIterator();
		jstring toString();
	};
} // namespace android::icu::number

