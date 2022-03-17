#pragma once

#include "../../java/lang/IllegalStateException.def.hpp"

class JString;

namespace android::media
{
	class MediaCasStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCasStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCasStateException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		
		// Methods
		JString getDiagnosticInfo() const;
	};
} // namespace android::media

