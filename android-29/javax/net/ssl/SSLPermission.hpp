#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/security/Permission.hpp"
#include "../../../java/security/BasicPermission.hpp"


namespace javax::net::ssl
{
	class SSLPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SSLPermission(const char *className, const char *sig, Ts...agv) : java::security::BasicPermission(className, sig, std::forward<Ts>(agv)...) {}
		SSLPermission(QJniObject obj);
		
		// Constructors
		SSLPermission(jstring arg0);
		SSLPermission(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace javax::net::ssl

