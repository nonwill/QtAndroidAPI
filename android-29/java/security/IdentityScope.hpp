#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Identity.hpp"

namespace java::security
{
	class Identity;
}

namespace java::security
{
	class IdentityScope : public java::security::Identity
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IdentityScope(const char *className, const char *sig, Ts...agv) : java::security::Identity(className, sig, std::forward<Ts>(agv)...) {}
		IdentityScope(QJniObject obj);
		
		// Constructors
		IdentityScope(jstring arg0);
		IdentityScope(jstring arg0, java::security::IdentityScope &arg1);
		
		// Methods
		static java::security::IdentityScope getSystemScope();
		void addIdentity(java::security::Identity arg0);
		java::security::Identity getIdentity(jstring arg0);
		java::security::Identity getIdentity(__JniBaseClass arg0);
		__JniBaseClass identities();
		void removeIdentity(java::security::Identity arg0);
		jint size();
		jstring toString();
	};
} // namespace java::security

