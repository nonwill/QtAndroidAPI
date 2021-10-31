#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class ResourceMismatchViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourceMismatchViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		ResourceMismatchViolation(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

