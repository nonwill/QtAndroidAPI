#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::util
{
	class TooManyListenersException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TooManyListenersException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TooManyListenersException(QAndroidJniObject obj);
		
		// Constructors
		TooManyListenersException();
		TooManyListenersException(jstring arg0);
		
		// Methods
	};
} // namespace java::util

