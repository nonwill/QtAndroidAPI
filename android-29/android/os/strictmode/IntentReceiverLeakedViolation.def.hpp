#pragma once

#include "./Violation.def.hpp"

class JThrowable;

namespace android::os::strictmode
{
	class IntentReceiverLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntentReceiverLeakedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		IntentReceiverLeakedViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

