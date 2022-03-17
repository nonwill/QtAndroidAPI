#pragma once

#include "../../JObjectArray.hpp"
#include "../io/File.def.hpp"
#include "../io/IOException.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../io/PrintStream.def.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.def.hpp"
#include "./Locale.def.hpp"
#include "./regex/Pattern.def.hpp"
#include "./Formatter.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Formatter::Formatter()
		: JObject(
			"java.util.Formatter",
			"()V"
		) {}
	inline Formatter::Formatter(java::io::File arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	inline Formatter::Formatter(java::io::OutputStream arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	inline Formatter::Formatter(java::io::PrintStream arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		) {}
	inline Formatter::Formatter(JObject arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;)V",
			arg0.object()
		) {}
	inline Formatter::Formatter(JString arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Formatter::Formatter(java::util::Locale arg0)
		: JObject(
			"java.util.Formatter",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline Formatter::Formatter(java::io::File arg0, JString arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Formatter::Formatter(java::io::OutputStream arg0, JString arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline Formatter::Formatter(JObject arg0, java::util::Locale arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Formatter::Formatter(JString arg0, JString arg1)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline Formatter::Formatter(java::io::File arg0, JString arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline Formatter::Formatter(java::io::File arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	inline Formatter::Formatter(java::io::OutputStream arg0, JString arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline Formatter::Formatter(java::io::OutputStream arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	inline Formatter::Formatter(JString arg0, JString arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	inline Formatter::Formatter(JString arg0, java::nio::charset::Charset arg1, java::util::Locale arg2)
		: JObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline void Formatter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Formatter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::util::Formatter Formatter::format(JString arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0.object<jstring>(),
			arg1.object<jobjectArray>()
		);
	}
	inline java::util::Formatter Formatter::format(java::util::Locale arg0, JString arg1, JObjectArray arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline java::io::IOException Formatter::ioException() const
	{
		return callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	inline java::util::Locale Formatter::locale() const
	{
		return callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	inline JObject Formatter::out() const
	{
		return callObjectMethod(
			"out",
			"()Ljava/lang/Appendable;"
		);
	}
	inline JString Formatter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

