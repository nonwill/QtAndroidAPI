#pragma once

#include "../../../JObject.hpp"


namespace javax::crypto::spec
{
	class SecretKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecretKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeySpec(QJniObject obj);
		
		// Constructors
		SecretKeySpec(jbyteArray arg0, jstring arg1);
		SecretKeySpec(jbyteArray arg0, jint arg1, jint arg2, jstring arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jstring getFormat();
		jint hashCode();
	};
} // namespace javax::crypto::spec

