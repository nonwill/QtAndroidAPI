#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::file
{
	class FileSystemException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystemException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemException(QAndroidJniObject obj);
		
		// Constructors
		FileSystemException(jstring arg0);
		FileSystemException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring getFile();
		jstring getMessage();
		jstring getOtherFile();
		jstring getReason();
	};
} // namespace java::nio::file
