#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class IndexOutOfBoundsException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IndexOutOfBoundsException(QJniObject obj);
		
		// Constructors
		IndexOutOfBoundsException();
		IndexOutOfBoundsException(jint arg0);
		IndexOutOfBoundsException(jstring arg0);
		IndexOutOfBoundsException(jlong arg0);
		
		// Methods
	};
} // namespace java::lang

