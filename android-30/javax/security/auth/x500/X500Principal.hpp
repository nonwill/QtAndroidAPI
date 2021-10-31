#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace javax::security::auth::x500
{
	class X500Principal : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CANONICAL();
		static jstring RFC1779();
		static jstring RFC2253();
		
		// QJniObject forward
		template<typename ...Ts> explicit X500Principal(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		X500Principal(QJniObject obj);
		
		// Constructors
		X500Principal(jbyteArray arg0);
		X500Principal(java::io::InputStream arg0);
		X500Principal(jstring arg0);
		X500Principal(jstring arg0, __JniBaseClass arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jstring getName();
		jstring getName(jstring arg0);
		jstring getName(jstring arg0, __JniBaseClass arg1);
		jint hashCode();
		jstring toString();
	};
} // namespace javax::security::auth::x500

