#include "./DisplayContext.hpp"
#include "./DisplayContext_Type.hpp"
#include "./LocaleDisplayNames_DialectHandling.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./LocaleDisplayNames.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	LocaleDisplayNames::LocaleDisplayNames(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(android::icu::util::ULocale arg0, android::icu::text::LocaleDisplayNames_DialectHandling arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1.object()
		);
	}
	android::icu::text::LocaleDisplayNames LocaleDisplayNames::getInstance(java::util::Locale arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.icu.text.LocaleDisplayNames",
			"getInstance",
			"(Ljava/util/Locale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;",
			arg0.object(),
			arg1
		);
	}
	android::icu::text::DisplayContext LocaleDisplayNames::getContext(android::icu::text::DisplayContext_Type arg0)
	{
		return callObjectMethod(
			"getContext",
			"(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;",
			arg0.object()
		);
	}
	android::icu::text::LocaleDisplayNames_DialectHandling LocaleDisplayNames::getDialectHandling()
	{
		return callObjectMethod(
			"getDialectHandling",
			"()Landroid/icu/text/LocaleDisplayNames$DialectHandling;"
		);
	}
	android::icu::util::ULocale LocaleDisplayNames::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	JObject LocaleDisplayNames::getUiList(JObject arg0, jboolean arg1, JObject arg2)
	{
		return callObjectMethod(
			"getUiList",
			"(Ljava/util/Set;ZLjava/util/Comparator;)Ljava/util/List;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JObject LocaleDisplayNames::getUiListCompareWholeItems(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"getUiListCompareWholeItems",
			"(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	jstring LocaleDisplayNames::keyDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"keyDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LocaleDisplayNames::keyValueDisplayName(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"keyValueDisplayName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring LocaleDisplayNames::languageDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"languageDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LocaleDisplayNames::localeDisplayName(android::icu::util::ULocale arg0)
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring LocaleDisplayNames::localeDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LocaleDisplayNames::localeDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"localeDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring LocaleDisplayNames::regionDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"regionDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LocaleDisplayNames::scriptDisplayName(jint arg0)
	{
		return callObjectMethod(
			"scriptDisplayName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LocaleDisplayNames::scriptDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"scriptDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LocaleDisplayNames::variantDisplayName(jstring arg0)
	{
		return callObjectMethod(
			"variantDisplayName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::icu::text

