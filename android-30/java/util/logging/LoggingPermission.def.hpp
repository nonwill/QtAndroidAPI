#pragma once

#include "../../security/BasicPermission.def.hpp"

class JString;

namespace java::util::logging
{
	class LoggingPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoggingPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		LoggingPermission(QAndroidJniObject obj) : java::security::BasicPermission(obj) {}
		
		// Constructors
		LoggingPermission(JString arg0, JString arg1);
		
		// Methods
	};
} // namespace java::util::logging
