#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"


namespace java::net
{
	class URISyntaxException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URISyntaxException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		URISyntaxException(QJniObject obj);
		
		// Constructors
		URISyntaxException(jstring arg0, jstring arg1);
		URISyntaxException(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
		jint getIndex();
		jstring getInput();
		jstring getMessage();
		jstring getReason();
	};
} // namespace java::net

