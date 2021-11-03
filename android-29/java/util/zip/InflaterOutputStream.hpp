#pragma once

#include "../../io/FilterOutputStream.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
namespace java::util::zip
{
	class Inflater;
}

namespace java::util::zip
{
	class InflaterOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InflaterOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		InflaterOutputStream(QJniObject obj);
		
		// Constructors
		InflaterOutputStream(java::io::OutputStream arg0);
		InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1);
		InflaterOutputStream(java::io::OutputStream arg0, java::util::zip::Inflater arg1, jint arg2);
		
		// Methods
		void close();
		void finish();
		void flush();
		void write(jint arg0);
		void write(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

