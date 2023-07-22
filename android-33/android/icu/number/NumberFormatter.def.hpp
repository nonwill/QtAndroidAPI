#pragma once

#include "../../../JObject.hpp"

namespace android::icu::number
{
	class LocalizedNumberFormatter;
}
namespace android::icu::number
{
	class UnlocalizedNumberFormatter;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::number
{
	class NumberFormatter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormatter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::number::UnlocalizedNumberFormatter with();
		static android::icu::number::LocalizedNumberFormatter withLocale(android::icu::util::ULocale arg0);
		static android::icu::number::LocalizedNumberFormatter withLocale(java::util::Locale arg0);
	};
} // namespace android::icu::number

