#include "../../io/File.hpp"
#include "../../nio/channels/FileChannel.hpp"
#include "./LogRecord.hpp"
#include "./FileHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	FileHandler::FileHandler(QAndroidJniObject obj) : java::util::logging::StreamHandler(obj) {}
	
	// Constructors
	FileHandler::FileHandler()
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"()V"
		) {}
	FileHandler::FileHandler(jstring arg0)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FileHandler::FileHandler(jstring arg0, jboolean arg1)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		) {}
	FileHandler::FileHandler(jstring arg0, jint arg1, jint arg2)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		) {}
	FileHandler::FileHandler(jstring arg0, jint arg1, jint arg2, jboolean arg3)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;IIZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	FileHandler::FileHandler(jstring arg0, jlong arg1, jint arg2, jboolean arg3)
		: java::util::logging::StreamHandler(
			"java.util.logging.FileHandler",
			"(Ljava/lang/String;JIZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	void FileHandler::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void FileHandler::publish(java::util::logging::LogRecord arg0)
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging
