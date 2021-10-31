#include "./MessagePattern_ApostropheMode.hpp"
#include "./MessagePattern_Part.hpp"
#include "./MessagePattern_Part_Type.hpp"
#include "./MessagePattern.hpp"

namespace android::icu::text
{
	// Fields
	jint MessagePattern::ARG_NAME_NOT_NUMBER()
	{
		return getStaticField<jint>(
			"android.icu.text.MessagePattern",
			"ARG_NAME_NOT_NUMBER"
		);
	}
	jint MessagePattern::ARG_NAME_NOT_VALID()
	{
		return getStaticField<jint>(
			"android.icu.text.MessagePattern",
			"ARG_NAME_NOT_VALID"
		);
	}
	jdouble MessagePattern::NO_NUMERIC_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.text.MessagePattern",
			"NO_NUMERIC_VALUE"
		);
	}
	
	// QAndroidJniObject forward
	MessagePattern::MessagePattern(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MessagePattern::MessagePattern()
		: __JniBaseClass(
			"android.icu.text.MessagePattern",
			"()V"
		) {}
	MessagePattern::MessagePattern(android::icu::text::MessagePattern_ApostropheMode arg0)
		: __JniBaseClass(
			"android.icu.text.MessagePattern",
			"(Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.object()
		) {}
	MessagePattern::MessagePattern(jstring arg0)
		: __JniBaseClass(
			"android.icu.text.MessagePattern",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint MessagePattern::validateArgumentName(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.MessagePattern",
			"validateArgumentName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring MessagePattern::autoQuoteApostropheDeep()
	{
		return callObjectMethod(
			"autoQuoteApostropheDeep",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MessagePattern::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MessagePattern::clearPatternAndSetApostropheMode(android::icu::text::MessagePattern_ApostropheMode arg0)
	{
		callMethod<void>(
			"clearPatternAndSetApostropheMode",
			"(Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.object()
		);
	}
	jobject MessagePattern::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::icu::text::MessagePattern MessagePattern::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/MessagePattern;"
		);
	}
	jint MessagePattern::countParts()
	{
		return callMethod<jint>(
			"countParts",
			"()I"
		);
	}
	jboolean MessagePattern::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::icu::text::MessagePattern MessagePattern::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/MessagePattern;"
		);
	}
	android::icu::text::MessagePattern_ApostropheMode MessagePattern::getApostropheMode()
	{
		return callObjectMethod(
			"getApostropheMode",
			"()Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	jint MessagePattern::getLimitPartIndex(jint arg0)
	{
		return callMethod<jint>(
			"getLimitPartIndex",
			"(I)I",
			arg0
		);
	}
	jdouble MessagePattern::getNumericValue(android::icu::text::MessagePattern_Part arg0)
	{
		return callMethod<jdouble>(
			"getNumericValue",
			"(Landroid/icu/text/MessagePattern$Part;)D",
			arg0.object()
		);
	}
	android::icu::text::MessagePattern_Part MessagePattern::getPart(jint arg0)
	{
		return callObjectMethod(
			"getPart",
			"(I)Landroid/icu/text/MessagePattern$Part;",
			arg0
		);
	}
	android::icu::text::MessagePattern_Part_Type MessagePattern::getPartType(jint arg0)
	{
		return callObjectMethod(
			"getPartType",
			"(I)Landroid/icu/text/MessagePattern$Part$Type;",
			arg0
		);
	}
	jint MessagePattern::getPatternIndex(jint arg0)
	{
		return callMethod<jint>(
			"getPatternIndex",
			"(I)I",
			arg0
		);
	}
	jstring MessagePattern::getPatternString()
	{
		return callObjectMethod(
			"getPatternString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble MessagePattern::getPluralOffset(jint arg0)
	{
		return callMethod<jdouble>(
			"getPluralOffset",
			"(I)D",
			arg0
		);
	}
	jstring MessagePattern::getSubstring(android::icu::text::MessagePattern_Part arg0)
	{
		return callObjectMethod(
			"getSubstring",
			"(Landroid/icu/text/MessagePattern$Part;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jboolean MessagePattern::hasNamedArguments()
	{
		return callMethod<jboolean>(
			"hasNamedArguments",
			"()Z"
		);
	}
	jboolean MessagePattern::hasNumberedArguments()
	{
		return callMethod<jboolean>(
			"hasNumberedArguments",
			"()Z"
		);
	}
	jint MessagePattern::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MessagePattern::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	android::icu::text::MessagePattern MessagePattern::parse(jstring arg0)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	android::icu::text::MessagePattern MessagePattern::parseChoiceStyle(jstring arg0)
	{
		return callObjectMethod(
			"parseChoiceStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	android::icu::text::MessagePattern MessagePattern::parsePluralStyle(jstring arg0)
	{
		return callObjectMethod(
			"parsePluralStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	android::icu::text::MessagePattern MessagePattern::parseSelectStyle(jstring arg0)
	{
		return callObjectMethod(
			"parseSelectStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0
		);
	}
	jboolean MessagePattern::partSubstringMatches(android::icu::text::MessagePattern_Part arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"partSubstringMatches",
			"(Landroid/icu/text/MessagePattern$Part;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jstring MessagePattern::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text
