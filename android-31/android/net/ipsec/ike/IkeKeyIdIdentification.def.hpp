#pragma once

#include "./IkeIdentification.def.hpp"

class JByteArray;
class JObject;

namespace android::net::ipsec::ike
{
	class IkeKeyIdIdentification : public android::net::ipsec::ike::IkeIdentification
	{
	public:
		// Fields
		JByteArray keyId();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeKeyIdIdentification(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::IkeIdentification(className, sig, std::forward<Ts>(agv)...) {}
		IkeKeyIdIdentification(QAndroidJniObject obj) : android::net::ipsec::ike::IkeIdentification(obj) {}
		
		// Constructors
		IkeKeyIdIdentification(JByteArray arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::ipsec::ike
