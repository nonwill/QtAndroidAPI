#pragma once

#include "../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::util
{
	class Locale_Category : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::Locale_Category DISPLAY();
		static java::util::Locale_Category FORMAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_Category(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_Category(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::Locale_Category valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::util

