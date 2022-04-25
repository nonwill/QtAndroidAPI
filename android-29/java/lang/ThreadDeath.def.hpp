#pragma once

#include "./Error.def.hpp"

namespace java::lang
{
	class ThreadDeath : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ThreadDeath(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		ThreadDeath(QAndroidJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		ThreadDeath();
		
		// Methods
	};
} // namespace java::lang
