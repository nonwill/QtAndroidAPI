#pragma once

#include "../io/InterruptedIOException.def.hpp"

class JString;

namespace java::net
{
	class SocketTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::InterruptedIOException(className, sig, std::forward<Ts>(agv)...) {}
		SocketTimeoutException(QAndroidJniObject obj) : java::io::InterruptedIOException(obj) {}
		
		// Constructors
		SocketTimeoutException();
		SocketTimeoutException(JString arg0);
		
		// Methods
	};
} // namespace java::net

