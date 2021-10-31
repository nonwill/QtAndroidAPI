#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class MalformedURLException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MalformedURLException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedURLException(QAndroidJniObject obj);
		
		// Constructors
		MalformedURLException();
		MalformedURLException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

