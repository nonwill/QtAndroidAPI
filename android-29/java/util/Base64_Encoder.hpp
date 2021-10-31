#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace java::util
{
	class Base64_Encoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Base64_Encoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Base64_Encoder(QJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray encode(jbyteArray arg0);
		jint encode(jbyteArray arg0, jbyteArray arg1);
		java::nio::ByteBuffer encode(java::nio::ByteBuffer arg0);
		jstring encodeToString(jbyteArray arg0);
		java::util::Base64_Encoder withoutPadding();
		java::io::OutputStream wrap(java::io::OutputStream arg0);
	};
} // namespace java::util

