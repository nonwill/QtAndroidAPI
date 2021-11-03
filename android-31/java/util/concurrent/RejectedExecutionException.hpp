#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::util::concurrent
{
	class RejectedExecutionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RejectedExecutionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RejectedExecutionException(QJniObject obj);
		
		// Constructors
		RejectedExecutionException();
		RejectedExecutionException(jstring arg0);
		RejectedExecutionException(jthrowable arg0);
		RejectedExecutionException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

