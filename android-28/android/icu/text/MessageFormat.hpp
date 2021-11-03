#pragma once

#include "../../../JObject.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::text
{
	class MessagePattern_ApostropheMode;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class Format;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class MessageFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MessageFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat(QJniObject obj);
		
		// Constructors
		MessageFormat(jstring arg0);
		MessageFormat(jstring arg0, android::icu::util::ULocale arg1);
		MessageFormat(jstring arg0, java::util::Locale arg1);
		
		// Methods
		static jstring autoQuoteApostrophe(jstring arg0);
		static jstring format(jstring arg0, jobjectArray arg1);
		static jstring format(jstring arg0, JObject arg1);
		void applyPattern(jstring arg0);
		void applyPattern(jstring arg0, android::icu::text::MessagePattern_ApostropheMode arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		java::lang::StringBuffer format(jobjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObject formatToCharacterIterator(jobject arg0);
		android::icu::text::MessagePattern_ApostropheMode getApostropheMode();
		JObject getArgumentNames();
		java::text::Format getFormatByArgumentName(jstring arg0);
		jarray getFormats();
		jarray getFormatsByArgumentIndex();
		java::util::Locale getLocale();
		android::icu::util::ULocale getULocale();
		jint hashCode();
		jobjectArray parse(jstring arg0);
		jobjectArray parse(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		JObject parseToMap(jstring arg0);
		JObject parseToMap(jstring arg0, java::text::ParsePosition arg1);
		void setFormat(jint arg0, java::text::Format arg1);
		void setFormatByArgumentIndex(jint arg0, java::text::Format arg1);
		void setFormatByArgumentName(jstring arg0, java::text::Format arg1);
		void setFormats(jarray arg0);
		void setFormatsByArgumentIndex(jarray arg0);
		void setFormatsByArgumentName(JObject arg0);
		void setLocale(android::icu::util::ULocale arg0);
		void setLocale(java::util::Locale arg0);
		jstring toPattern();
		jboolean usesNamedArguments();
	};
} // namespace android::icu::text

