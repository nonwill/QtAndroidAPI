#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Locale_Category.hpp"
#include "./Locale_FilteringMode.hpp"
#include "./Optional.hpp"
#include "./Locale.hpp"

namespace java::util
{
	// Fields
	QAndroidJniObject Locale::CANADA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"CANADA",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::CANADA_FRENCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"CANADA_FRENCH",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::CHINA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"CHINA",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"CHINESE",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::ENGLISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"ENGLISH",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::FRANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"FRANCE",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::FRENCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"FRENCH",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::GERMAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"GERMAN",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::GERMANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"GERMANY",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::ITALIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"ITALIAN",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::ITALY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"ITALY",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::JAPAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"JAPAN",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::JAPANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"JAPANESE",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::KOREA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"KOREA",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::KOREAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"KOREAN",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::PRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"PRC",
			"Ljava/util/Locale;"
		);
	}
	jchar Locale::PRIVATE_USE_EXTENSION()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.util.Locale",
			"PRIVATE_USE_EXTENSION"
		);
	}
	QAndroidJniObject Locale::ROOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"ROOT",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::SIMPLIFIED_CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"SIMPLIFIED_CHINESE",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::TAIWAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"TAIWAN",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::TRADITIONAL_CHINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"TRADITIONAL_CHINESE",
			"Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::UK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"UK",
			"Ljava/util/Locale;"
		);
	}
	jchar Locale::UNICODE_LOCALE_EXTENSION()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"java.util.Locale",
			"UNICODE_LOCALE_EXTENSION"
		);
	}
	QAndroidJniObject Locale::US()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.Locale",
			"US",
			"Ljava/util/Locale;"
		);
	}
	
	Locale::Locale(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Locale::Locale(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Locale::Locale(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Locale::Locale(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	Locale::Locale(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	Locale::Locale(jstring &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	Locale::Locale(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Locale",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject Locale::filter(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"filter",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Locale::filter(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"filter",
			"(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Locale::filterTags(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"filterTags",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Locale::filterTags(__JniBaseClass arg0, __JniBaseClass arg1, java::util::Locale_FilteringMode arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"filterTags",
			"(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Locale::forLanguageTag(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"forLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale;",
			arg0
		);
	}
	QAndroidJniObject Locale::forLanguageTag(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"forLanguageTag",
			"(Ljava/lang/String;)Ljava/util/Locale;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Locale::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject Locale::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"getDefault",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Locale::getDefault(java::util::Locale_Category arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"getDefault",
			"(Ljava/util/Locale$Category;)Ljava/util/Locale;",
			arg0.__jniObject().object()
		);
	}
	jarray Locale::getISOCountries()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Locale::getISOCountries(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"getISOCountries",
			"(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;",
			arg0.__jniObject().object()
		);
	}
	jarray Locale::getISOLanguages()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"getISOLanguages",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Locale::lookup(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"lookup",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Locale::lookupTag(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Locale",
			"lookupTag",
			"(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	void Locale::setDefault(java::util::Locale arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Locale",
			"setDefault",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void Locale::setDefault(java::util::Locale_Category arg0, java::util::Locale arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.Locale",
			"setDefault",
			"(Ljava/util/Locale$Category;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jobject Locale::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Locale::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Locale::getCountry()
	{
		return __thiz.callObjectMethod(
			"getCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayCountry()
	{
		return __thiz.callObjectMethod(
			"getDisplayCountry",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayCountry(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayCountry",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Locale::getDisplayLanguage()
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayLanguage(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayLanguage",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Locale::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayName(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Locale::getDisplayScript()
	{
		return __thiz.callObjectMethod(
			"getDisplayScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayScript(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayScript",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Locale::getDisplayVariant()
	{
		return __thiz.callObjectMethod(
			"getDisplayVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getDisplayVariant(java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayVariant",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Locale::getExtension(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"getExtension",
			"(C)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Locale::getExtensionKeys()
	{
		return __thiz.callObjectMethod(
			"getExtensionKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring Locale::getISO3Country()
	{
		return __thiz.callObjectMethod(
			"getISO3Country",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getISO3Language()
	{
		return __thiz.callObjectMethod(
			"getISO3Language",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::getScript()
	{
		return __thiz.callObjectMethod(
			"getScript",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Locale::getUnicodeLocaleAttributes()
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleAttributes",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Locale::getUnicodeLocaleKeys()
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleKeys",
			"()Ljava/util/Set;"
		);
	}
	jstring Locale::getUnicodeLocaleType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Locale::getUnicodeLocaleType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getUnicodeLocaleType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Locale::getVariant()
	{
		return __thiz.callObjectMethod(
			"getVariant",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Locale::hasExtensions()
	{
		return __thiz.callMethod<jboolean>(
			"hasExtensions",
			"()Z"
		);
	}
	jint Locale::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject Locale::stripExtensions()
	{
		return __thiz.callObjectMethod(
			"stripExtensions",
			"()Ljava/util/Locale;"
		);
	}
	jstring Locale::toLanguageTag()
	{
		return __thiz.callObjectMethod(
			"toLanguageTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locale::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util
