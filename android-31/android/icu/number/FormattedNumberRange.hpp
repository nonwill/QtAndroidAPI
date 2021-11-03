#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class NumberRangeFormatter_RangeIdentityResult;
}
namespace android::icu::text
{
	class ConstrainedFieldPosition;
}
class JString;
class JObject;
class JString;
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
		JObject appendTo(JObject arg0);
		jchar charAt(jint arg0);
		jboolean equals(JObject arg0);
		java::math::BigDecimal getFirstBigDecimal();
		android::icu::number::NumberRangeFormatter_RangeIdentityResult getIdentityResult();
		java::math::BigDecimal getSecondBigDecimal();
		jint hashCode();
		jint length();
		jboolean nextPosition(android::icu::text::ConstrainedFieldPosition arg0);
		JString subSequence(jint arg0, jint arg1);
		JObject toCharacterIterator();
		JString toString();
	};
} // namespace android::icu::number

