#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./EncodedKeySpec.hpp"


namespace java::security::spec
{
	class PKCS8EncodedKeySpec : public java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKCS8EncodedKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::EncodedKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		PKCS8EncodedKeySpec(QAndroidJniObject obj);
		
		// Constructors
		PKCS8EncodedKeySpec(jbyteArray arg0);
		PKCS8EncodedKeySpec(jbyteArray arg0, jstring arg1);
		
		// Methods
		jbyteArray getEncoded();
		jstring getFormat();
	};
} // namespace java::security::spec
