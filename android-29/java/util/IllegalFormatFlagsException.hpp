#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class IllegalFormatFlagsException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalFormatFlagsException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatFlagsException(QJniObject obj);
		
		// Constructors
		IllegalFormatFlagsException(JString arg0);
		
		// Methods
		JString getFlags();
		JString getMessage();
	};
} // namespace java::util

