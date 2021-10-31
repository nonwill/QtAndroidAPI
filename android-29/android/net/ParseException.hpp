#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::net
{
	class ParseException : public java::lang::RuntimeException
	{
	public:
		// Fields
		jstring response();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParseException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ParseException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

