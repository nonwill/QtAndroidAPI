#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class OptionalDataException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		jboolean eof();
		jint length();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OptionalDataException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		OptionalDataException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::io

