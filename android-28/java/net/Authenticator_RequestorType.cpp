#include "./Authenticator_RequestorType.hpp"

namespace java::net
{
	// Fields
	java::net::Authenticator_RequestorType Authenticator_RequestorType::PROXY()
	{
		return getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"PROXY",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	java::net::Authenticator_RequestorType Authenticator_RequestorType::SERVER()
	{
		return getStaticObjectField(
			"java.net.Authenticator$RequestorType",
			"SERVER",
			"Ljava/net/Authenticator$RequestorType;"
		);
	}
	
	// QJniObject forward
	Authenticator_RequestorType::Authenticator_RequestorType(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::net::Authenticator_RequestorType Authenticator_RequestorType::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/net/Authenticator$RequestorType;",
			arg0
		);
	}
	jarray Authenticator_RequestorType::values()
	{
		return callStaticObjectMethod(
			"java.net.Authenticator$RequestorType",
			"values",
			"()[Ljava/net/Authenticator$RequestorType;"
		).object<jarray>();
	}
} // namespace java::net

