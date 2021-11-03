#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::util
{
	class Locale_Category;
}
namespace java::util
{
	class Locale_FilteringMode;
}
namespace java::util
{
	class Optional;
}

namespace java::util
{
	class Locale : public JObject
	{
	public:
		// Fields
		static java::util::Locale CANADA();
		static java::util::Locale CANADA_FRENCH();
		static java::util::Locale CHINA();
		static java::util::Locale CHINESE();
		static java::util::Locale ENGLISH();
		static java::util::Locale FRANCE();
		static java::util::Locale FRENCH();
		static java::util::Locale GERMAN();
		static java::util::Locale GERMANY();
		static java::util::Locale ITALIAN();
		static java::util::Locale ITALY();
		static java::util::Locale JAPAN();
		static java::util::Locale JAPANESE();
		static java::util::Locale KOREA();
		static java::util::Locale KOREAN();
		static java::util::Locale PRC();
		static jchar PRIVATE_USE_EXTENSION();
		static java::util::Locale ROOT();
		static java::util::Locale SIMPLIFIED_CHINESE();
		static java::util::Locale TAIWAN();
		static java::util::Locale TRADITIONAL_CHINESE();
		static java::util::Locale UK();
		static jchar UNICODE_LOCALE_EXTENSION();
		static java::util::Locale US();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Locale(QAndroidJniObject obj);
		
		// Constructors
		Locale(JString arg0);
		Locale(JString arg0, JString arg1);
		Locale(JString arg0, JString arg1, JString arg2);
		
		// Methods
		static JObject filter(JObject arg0, JObject arg1);
		static JObject filter(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2);
		static JObject filterTags(JObject arg0, JObject arg1);
		static JObject filterTags(JObject arg0, JObject arg1, java::util::Locale_FilteringMode arg2);
		static java::util::Locale forLanguageTag(JString arg0);
		static JArray getAvailableLocales();
		static java::util::Locale getDefault();
		static java::util::Locale getDefault(java::util::Locale_Category arg0);
		static JArray getISOCountries();
		static JObject getISOCountries(JObject arg0);
		static JArray getISOLanguages();
		static java::util::Locale lookup(JObject arg0, JObject arg1);
		static JString lookupTag(JObject arg0, JObject arg1);
		static void setDefault(java::util::Locale arg0);
		static void setDefault(java::util::Locale_Category arg0, java::util::Locale arg1);
		JObject clone();
		jboolean equals(JObject arg0);
		JString getCountry();
		JString getDisplayCountry();
		JString getDisplayCountry(java::util::Locale arg0);
		JString getDisplayLanguage();
		JString getDisplayLanguage(java::util::Locale arg0);
		JString getDisplayName();
		JString getDisplayName(java::util::Locale arg0);
		JString getDisplayScript();
		JString getDisplayScript(java::util::Locale arg0);
		JString getDisplayVariant();
		JString getDisplayVariant(java::util::Locale arg0);
		JString getExtension(jchar arg0);
		JObject getExtensionKeys();
		JString getISO3Country();
		JString getISO3Language();
		JString getLanguage();
		JString getScript();
		JObject getUnicodeLocaleAttributes();
		JObject getUnicodeLocaleKeys();
		JString getUnicodeLocaleType(JString arg0);
		JString getVariant();
		jboolean hasExtensions();
		jint hashCode();
		java::util::Locale stripExtensions();
		JString toLanguageTag();
		JString toString();
	};
} // namespace java::util

