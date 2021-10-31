#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class StandardConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint SNI_HOST_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::net::ssl

