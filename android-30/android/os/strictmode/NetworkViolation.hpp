#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class NetworkViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		NetworkViolation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

