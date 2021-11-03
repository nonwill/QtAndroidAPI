#include "../text/ConstrainedFieldPosition.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/math/BigDecimal.hpp"
#include "./FormattedNumber.hpp"

namespace android::icu::number
{
	// Fields
	
	// QJniObject forward
	FormattedNumber::FormattedNumber(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FormattedNumber::appendTo(JObject arg0)
	{
		return callObjectMethod(
			"appendTo",
			"(Ljava/lang/Appendable;)Ljava/lang/Appendable;",
			arg0.object()
		);
	}
	jchar FormattedNumber::charAt(jint arg0)
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	jint FormattedNumber::length()
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	jboolean FormattedNumber::nextPosition(android::icu::text::ConstrainedFieldPosition arg0)
	{
		return callMethod<jboolean>(
			"nextPosition",
			"(Landroid/icu/text/ConstrainedFieldPosition;)Z",
			arg0.object()
		);
	}
	JString FormattedNumber::subSequence(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	java::math::BigDecimal FormattedNumber::toBigDecimal()
	{
		return callObjectMethod(
			"toBigDecimal",
			"()Ljava/math/BigDecimal;"
		);
	}
	JObject FormattedNumber::toCharacterIterator()
	{
		return callObjectMethod(
			"toCharacterIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	JString FormattedNumber::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::number

