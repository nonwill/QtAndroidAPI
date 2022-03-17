#pragma once

#include "../../../content/Context.def.hpp"
#include "./ChildSessionParams.def.hpp"
#include "./IkeSessionParams.def.hpp"
#include "./IkeSession.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline IkeSession::IkeSession(android::content::Context arg0, android::net::ipsec::ike::IkeSessionParams arg1, android::net::ipsec::ike::ChildSessionParams arg2, JObject arg3, JObject arg4, JObject arg5)
		: JObject(
			"android.net.ipsec.ike.IkeSession",
			"(Landroid/content/Context;Landroid/net/ipsec/ike/IkeSessionParams;Landroid/net/ipsec/ike/ChildSessionParams;Ljava/util/concurrent/Executor;Landroid/net/ipsec/ike/IkeSessionCallback;Landroid/net/ipsec/ike/ChildSessionCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	inline void IkeSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void IkeSession::closeChildSession(JObject arg0) const
	{
		callMethod<void>(
			"closeChildSession",
			"(Landroid/net/ipsec/ike/ChildSessionCallback;)V",
			arg0.object()
		);
	}
	inline void IkeSession::finalize() const
	{
		callMethod<void>(
			"finalize",
			"()V"
		);
	}
	inline void IkeSession::kill() const
	{
		callMethod<void>(
			"kill",
			"()V"
		);
	}
	inline void IkeSession::openChildSession(android::net::ipsec::ike::ChildSessionParams arg0, JObject arg1) const
	{
		callMethod<void>(
			"openChildSession",
			"(Landroid/net/ipsec/ike/ChildSessionParams;Landroid/net/ipsec/ike/ChildSessionCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

