#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "./MediaBrowser_ConnectionCallback.def.hpp"
#include "./MediaBrowser_ItemCallback.def.hpp"
#include "./MediaBrowser_SubscriptionCallback.def.hpp"
#include "../session/MediaSession_Token.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser.def.hpp"

namespace android::media::browse
{
	// Fields
	inline JString MediaBrowser::EXTRA_PAGE()
	{
		return getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaBrowser::EXTRA_PAGE_SIZE()
	{
		return getStaticObjectField(
			"android.media.browse.MediaBrowser",
			"EXTRA_PAGE_SIZE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaBrowser::MediaBrowser(android::content::Context arg0, android::content::ComponentName arg1, android::media::browse::MediaBrowser_ConnectionCallback arg2, android::os::Bundle arg3)
		: JObject(
			"android.media.browse.MediaBrowser",
			"(Landroid/content/Context;Landroid/content/ComponentName;Landroid/media/browse/MediaBrowser$ConnectionCallback;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline void MediaBrowser::connect() const
	{
		callMethod<void>(
			"connect",
			"()V"
		);
	}
	inline void MediaBrowser::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline android::os::Bundle MediaBrowser::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline void MediaBrowser::getItem(JString arg0, android::media::browse::MediaBrowser_ItemCallback arg1) const
	{
		callMethod<void>(
			"getItem",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$ItemCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString MediaBrowser::getRoot() const
	{
		return callObjectMethod(
			"getRoot",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::ComponentName MediaBrowser::getServiceComponent() const
	{
		return callObjectMethod(
			"getServiceComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::media::session::MediaSession_Token MediaBrowser::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	inline jboolean MediaBrowser::isConnected() const
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	inline void MediaBrowser::subscribe(JString arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1) const
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaBrowser::subscribe(JString arg0, android::os::Bundle arg1, android::media::browse::MediaBrowser_SubscriptionCallback arg2) const
	{
		callMethod<void>(
			"subscribe",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaBrowser::unsubscribe(JString arg0) const
	{
		callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaBrowser::unsubscribe(JString arg0, android::media::browse::MediaBrowser_SubscriptionCallback arg1) const
	{
		callMethod<void>(
			"unsubscribe",
			"(Ljava/lang/String;Landroid/media/browse/MediaBrowser$SubscriptionCallback;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::browse

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::browse;
#endif
