#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::os
{
	class ParcelFormatException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelFormatException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ParcelFormatException(QAndroidJniObject obj);
		
		// Constructors
		ParcelFormatException();
		ParcelFormatException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

