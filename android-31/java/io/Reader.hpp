#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class Writer;
}
namespace java::nio
{
	class CharBuffer;
}

namespace java::io
{
	class Reader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Reader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Reader(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::Reader nullReader();
		void close();
		void mark(jint arg0);
		jboolean markSupported();
		jint read();
		jint read(jcharArray arg0);
		jint read(java::nio::CharBuffer arg0);
		jint read(jcharArray arg0, jint arg1, jint arg2);
		jboolean ready();
		void reset();
		jlong skip(jlong arg0);
		jlong transferTo(java::io::Writer arg0);
	};
} // namespace java::io

