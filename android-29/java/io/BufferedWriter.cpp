#include "../../JCharArray.hpp"
#include "./Writer.hpp"
#include "../../JString.hpp"
#include "./BufferedWriter.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	BufferedWriter::BufferedWriter(QJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	BufferedWriter::BufferedWriter(java::io::Writer arg0)
		: java::io::Writer(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	BufferedWriter::BufferedWriter(java::io::Writer arg0, jint arg1)
		: java::io::Writer(
			"java.io.BufferedWriter",
			"(Ljava/io/Writer;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void BufferedWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void BufferedWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void BufferedWriter::newLine()
	{
		callMethod<void>(
			"newLine",
			"()V"
		);
	}
	void BufferedWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void BufferedWriter::write(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void BufferedWriter::write(JString arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace java::io

