#pragma once

#include "../../../JString.hpp"
#include "./FileAlreadyExistsException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline FileAlreadyExistsException::FileAlreadyExistsException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FileAlreadyExistsException::FileAlreadyExistsException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileAlreadyExistsException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif