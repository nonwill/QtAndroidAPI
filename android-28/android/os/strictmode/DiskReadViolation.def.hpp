#pragma once

#include "./Violation.def.hpp"

namespace android::os::strictmode
{
	class DiskReadViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DiskReadViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		DiskReadViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode
