#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::math
{
	class BigDecimal;
}
namespace android::icu::text
{
	class DisplayContext;
}
namespace android::icu::text
{
	class DisplayContext_Type;
}
namespace android::icu::util
{
	class Currency;
}
namespace android::icu::util
{
	class CurrencyAmount;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class Number;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::math
{
	class BigDecimal;
}
namespace java::math
{
	class BigInteger;
}
namespace java::text
{
	class FieldPosition;
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
	class NumberFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		static jint ACCOUNTINGCURRENCYSTYLE();
		static jint CASHCURRENCYSTYLE();
		static jint CURRENCYSTYLE();
		static jint FRACTION_FIELD();
		static jint INTEGERSTYLE();
		static jint INTEGER_FIELD();
		static jint ISOCURRENCYSTYLE();
		static jint NUMBERSTYLE();
		static jint PERCENTSTYLE();
		static jint PLURALCURRENCYSTYLE();
		static jint SCIENTIFICSTYLE();
		static jint STANDARDCURRENCYSTYLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat(QAndroidJniObject obj);
		
		// Constructors
		NumberFormat();
		
		// Methods
		static jarray getAvailableLocales();
		static android::icu::text::NumberFormat getCurrencyInstance();
		static android::icu::text::NumberFormat getCurrencyInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getCurrencyInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getInstance();
		static android::icu::text::NumberFormat getInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getInstance(jint arg0);
		static android::icu::text::NumberFormat getInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getInstance(android::icu::util::ULocale arg0, jint arg1);
		static android::icu::text::NumberFormat getInstance(java::util::Locale arg0, jint arg1);
		static android::icu::text::NumberFormat getIntegerInstance();
		static android::icu::text::NumberFormat getIntegerInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getIntegerInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getNumberInstance();
		static android::icu::text::NumberFormat getNumberInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getNumberInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getPercentInstance();
		static android::icu::text::NumberFormat getPercentInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getPercentInstance(java::util::Locale arg0);
		static android::icu::text::NumberFormat getScientificInstance();
		static android::icu::text::NumberFormat getScientificInstance(android::icu::util::ULocale arg0);
		static android::icu::text::NumberFormat getScientificInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(android::icu::math::BigDecimal arg0);
		jstring format(android::icu::util::CurrencyAmount arg0);
		jstring format(jdouble arg0);
		jstring format(java::math::BigDecimal arg0);
		jstring format(java::math::BigInteger arg0);
		jstring format(jlong arg0);
		java::lang::StringBuffer format(android::icu::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(android::icu::util::CurrencyAmount arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(java::math::BigDecimal arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(java::math::BigInteger arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		android::icu::text::DisplayContext getContext(android::icu::text::DisplayContext_Type arg0);
		android::icu::util::Currency getCurrency();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		jint getRoundingMode();
		jint hashCode();
		jboolean isGroupingUsed();
		jboolean isParseIntegerOnly();
		jboolean isParseStrict();
		java::lang::Number parse(jstring arg0);
		java::lang::Number parse(jstring arg0, java::text::ParsePosition arg1);
		android::icu::util::CurrencyAmount parseCurrency(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		void setContext(android::icu::text::DisplayContext arg0);
		void setCurrency(android::icu::util::Currency arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setParseStrict(jboolean arg0);
		void setRoundingMode(jint arg0);
	};
} // namespace android::icu::text
