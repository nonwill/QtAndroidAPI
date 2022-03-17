#pragma once

#include "../../../java/lang/RuntimeException.def.hpp"

class JString;

namespace android::view::inspector
{
	class PropertyMapper_PropertyConflictException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PropertyMapper_PropertyConflictException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		PropertyMapper_PropertyConflictException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		PropertyMapper_PropertyConflictException(JString arg0, JString arg1, JString arg2);
		
		// Methods
	};
} // namespace android::view::inspector

