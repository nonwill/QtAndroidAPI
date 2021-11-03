#pragma once

#include "../../../JObject.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"
#include "./DeflaterOutputStream.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class HashSet;
}
namespace java::util
{
	class Vector;
}
namespace java::util::zip
{
	class CRC32;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::zip
{
	class ZipOutputStream : public java::util::zip::DeflaterOutputStream
	{
	public:
		// Fields
		static jint DEFLATED();
		static jint STORED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ZipOutputStream(const char *className, const char *sig, Ts...agv) : java::util::zip::DeflaterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		ZipOutputStream(QJniObject obj);
		
		// Constructors
		ZipOutputStream(java::io::OutputStream arg0);
		ZipOutputStream(java::io::OutputStream arg0, java::nio::charset::Charset arg1);
		
		// Methods
		void close();
		void closeEntry();
		void finish();
		void putNextEntry(java::util::zip::ZipEntry arg0);
		void setComment(jstring arg0);
		void setLevel(jint arg0);
		void setMethod(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::util::zip

