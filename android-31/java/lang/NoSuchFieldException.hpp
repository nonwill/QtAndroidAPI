#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"


namespace java::lang
{
	class NoSuchFieldException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchFieldException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFieldException(QAndroidJniObject obj);
		
		// Constructors
		NoSuchFieldException();
		NoSuchFieldException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang
