#pragma once

#include "../lang/RuntimeException.def.hpp"

class JString;

namespace java::util
{
	class IllformedLocaleException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllformedLocaleException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllformedLocaleException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		IllformedLocaleException();
		IllformedLocaleException(JString arg0);
		IllformedLocaleException(JString arg0, jint arg1);
		
		// Methods
		jint getErrorIndex() const;
	};
} // namespace java::util
