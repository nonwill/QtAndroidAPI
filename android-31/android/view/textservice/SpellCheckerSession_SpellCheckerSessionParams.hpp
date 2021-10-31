#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace java::util
{
	class Locale;
}

namespace android::view::textservice
{
	class SpellCheckerSession_SpellCheckerSessionParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerSession_SpellCheckerSessionParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerSession_SpellCheckerSessionParams(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::Bundle getExtras();
		java::util::Locale getLocale();
		jint getSupportedAttributes();
		jboolean shouldReferToSpellCheckerLanguageSettings();
	};
} // namespace android::view::textservice
