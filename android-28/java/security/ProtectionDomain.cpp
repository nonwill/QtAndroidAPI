#include "../lang/ClassLoader.hpp"
#include "./CodeSource.hpp"
#include "./Permission.hpp"
#include "./PermissionCollection.hpp"
#include "./ProtectionDomain.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	ProtectionDomain::ProtectionDomain(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProtectionDomain::ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1)
		: JObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V",
			arg0.object(),
			arg1.object()
		) {}
	ProtectionDomain::ProtectionDomain(java::security::CodeSource arg0, java::security::PermissionCollection arg1, java::lang::ClassLoader arg2, jarray arg3)
		: JObject(
			"java.security.ProtectionDomain",
			"(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	java::lang::ClassLoader ProtectionDomain::getClassLoader()
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::security::CodeSource ProtectionDomain::getCodeSource()
	{
		return callObjectMethod(
			"getCodeSource",
			"()Ljava/security/CodeSource;"
		);
	}
	java::security::PermissionCollection ProtectionDomain::getPermissions()
	{
		return callObjectMethod(
			"getPermissions",
			"()Ljava/security/PermissionCollection;"
		);
	}
	jarray ProtectionDomain::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		).object<jarray>();
	}
	jboolean ProtectionDomain::implies(java::security::Permission arg0)
	{
		return callMethod<jboolean>(
			"implies",
			"(Ljava/security/Permission;)Z",
			arg0.object()
		);
	}
	jboolean ProtectionDomain::staticPermissionsOnly()
	{
		return callMethod<jboolean>(
			"staticPermissionsOnly",
			"()Z"
		);
	}
	jstring ProtectionDomain::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

