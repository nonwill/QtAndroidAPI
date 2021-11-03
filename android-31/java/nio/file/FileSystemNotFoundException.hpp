#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::nio::file
{
	class FileSystemNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystemNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemNotFoundException(QJniObject obj);
		
		// Constructors
		FileSystemNotFoundException();
		FileSystemNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

