#pragma once

#include "../../JObject.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class InstantiationError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InstantiationError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		InstantiationError(QJniObject obj);
		
		// Constructors
		InstantiationError();
		InstantiationError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

