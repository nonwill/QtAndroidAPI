#pragma once

#include "./IllegalFormatException.def.hpp"

class JString;

namespace java::util
{
	class MissingFormatArgumentException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MissingFormatArgumentException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		MissingFormatArgumentException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		MissingFormatArgumentException(JString arg0);
		
		// Methods
		JString getFormatSpecifier() const;
		JString getMessage() const;
	};
} // namespace java::util
