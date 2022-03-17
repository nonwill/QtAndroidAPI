#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../Session2Token.def.hpp"
#include "./MediaSessionManager_RemoteUserInfo.def.hpp"
#include "../../os/Handler.def.hpp"
#include "./MediaSessionManager.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaSessionManager::addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1) const
	{
		callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSessionManager::addOnActiveSessionsChangedListener(JObject arg0, android::content::ComponentName arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"addOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;Landroid/content/ComponentName;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaSessionManager::addOnSession2TokensChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.object()
		);
	}
	inline void MediaSessionManager::addOnSession2TokensChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject MediaSessionManager::getActiveSessions(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getActiveSessions",
			"(Landroid/content/ComponentName;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject MediaSessionManager::getSession2Tokens() const
	{
		return callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;"
		);
	}
	inline jboolean MediaSessionManager::isTrustedForMediaControl(android::media::session::MediaSessionManager_RemoteUserInfo arg0) const
	{
		return callMethod<jboolean>(
			"isTrustedForMediaControl",
			"(Landroid/media/session/MediaSessionManager$RemoteUserInfo;)Z",
			arg0.object()
		);
	}
	inline void MediaSessionManager::notifySession2Created(android::media::Session2Token arg0) const
	{
		callMethod<void>(
			"notifySession2Created",
			"(Landroid/media/Session2Token;)V",
			arg0.object()
		);
	}
	inline void MediaSessionManager::removeOnActiveSessionsChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnActiveSessionsChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnActiveSessionsChangedListener;)V",
			arg0.object()
		);
	}
	inline void MediaSessionManager::removeOnSession2TokensChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnSession2TokensChangedListener",
			"(Landroid/media/session/MediaSessionManager$OnSession2TokensChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
