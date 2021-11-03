#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class IOException;
}
class JObject;
namespace java::nio::file
{
	class FileVisitResult;
}

namespace java::nio::file
{
	class SimpleFileVisitor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleFileVisitor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimpleFileVisitor(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::file::FileVisitResult postVisitDirectory(JObject arg0, java::io::IOException arg1);
		java::nio::file::FileVisitResult preVisitDirectory(JObject arg0, JObject arg1);
		java::nio::file::FileVisitResult visitFile(JObject arg0, JObject arg1);
		java::nio::file::FileVisitResult visitFileFailed(JObject arg0, java::io::IOException arg1);
	};
} // namespace java::nio::file

