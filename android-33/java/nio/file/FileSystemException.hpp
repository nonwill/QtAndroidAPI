#pragma once

#include "../../../JString.hpp"
#include "./FileSystemException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline FileSystemException::FileSystemException(JString arg0)
		: java::io::IOException(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FileSystemException::FileSystemException(JString arg0, JString arg1, JString arg2)
		: java::io::IOException(
			"java.nio.file.FileSystemException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JString FileSystemException::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Ljava/lang/String;"
		);
	}
	inline JString FileSystemException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString FileSystemException::getOtherFile() const
	{
		return callObjectMethod(
			"getOtherFile",
			"()Ljava/lang/String;"
		);
	}
	inline JString FileSystemException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
