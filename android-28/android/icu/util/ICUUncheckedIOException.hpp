#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace android::icu::util
{
	class ICUUncheckedIOException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ICUUncheckedIOException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ICUUncheckedIOException(QJniObject obj);
		
		// Constructors
		ICUUncheckedIOException();
		ICUUncheckedIOException(jstring arg0);
		ICUUncheckedIOException(jthrowable arg0);
		ICUUncheckedIOException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::icu::util

