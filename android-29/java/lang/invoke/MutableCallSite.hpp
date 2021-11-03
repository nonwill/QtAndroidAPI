#pragma once

#include "../../../JObject.hpp"
#include "./CallSite.hpp"

namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}

namespace java::lang::invoke
{
	class MutableCallSite : public java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MutableCallSite(const char *className, const char *sig, Ts...agv) : java::lang::invoke::CallSite(className, sig, std::forward<Ts>(agv)...) {}
		MutableCallSite(QJniObject obj);
		
		// Constructors
		MutableCallSite(java::lang::invoke::MethodHandle arg0);
		MutableCallSite(java::lang::invoke::MethodType arg0);
		
		// Methods
		static void syncAll(jarray arg0);
		java::lang::invoke::MethodHandle dynamicInvoker();
		java::lang::invoke::MethodHandle getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
	};
} // namespace java::lang::invoke

