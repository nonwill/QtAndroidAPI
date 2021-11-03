#pragma once

#include "../../lang/InternalError.hpp"

class JString;

namespace java::util::zip
{
	class ZipError : public java::lang::InternalError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZipError(const char *className, const char *sig, Ts...agv) : java::lang::InternalError(className, sig, std::forward<Ts>(agv)...) {}
		ZipError(QAndroidJniObject obj);
		
		// Constructors
		ZipError(JString arg0);
		
		// Methods
	};
} // namespace java::util::zip

