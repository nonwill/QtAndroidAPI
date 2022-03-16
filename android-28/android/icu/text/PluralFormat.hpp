#pragma once

#include "./NumberFormat.def.hpp"
#include "./PluralRules.def.hpp"
#include "./PluralRules_PluralType.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../java/lang/Number.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.def.hpp"
#include "../../../java/text/FieldPosition.def.hpp"
#include "../../../java/text/ParsePosition.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./PluralFormat.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline PluralFormat::PluralFormat()
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"()V"
		) {}
	inline PluralFormat::PluralFormat(android::icu::text::PluralRules arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;)V",
			arg0.object()
		) {}
	inline PluralFormat::PluralFormat(android::icu::util::ULocale arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	inline PluralFormat::PluralFormat(JString arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline PluralFormat::PluralFormat(java::util::Locale arg0)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline PluralFormat::PluralFormat(android::icu::text::PluralRules arg0, JString arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PluralFormat::PluralFormat(android::icu::util::ULocale arg0, JString arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline PluralFormat::PluralFormat(java::util::Locale arg0, android::icu::text::PluralRules arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PluralFormat::PluralFormat(java::util::Locale arg0, android::icu::text::PluralRules_PluralType arg1)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules arg1, JString arg2)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	inline PluralFormat::PluralFormat(android::icu::util::ULocale arg0, android::icu::text::PluralRules_PluralType arg1, JString arg2)
		: android::icu::text::UFormat(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline void PluralFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean PluralFormat::equals(android::icu::text::PluralFormat arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralFormat;)Z",
			arg0.object()
		);
	}
	inline jboolean PluralFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PluralFormat::format(jdouble arg0) const
	{
		return callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0
		);
	}
	inline java::lang::StringBuffer PluralFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint PluralFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::lang::Number PluralFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject PluralFormat::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void PluralFormat::setNumberFormat(android::icu::text::NumberFormat arg0) const
	{
		callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.object()
		);
	}
	inline JString PluralFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
	inline JString PluralFormat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

