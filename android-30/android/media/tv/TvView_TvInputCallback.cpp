#include "./TvContentRating.hpp"
#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./TvView_TvInputCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvView_TvInputCallback::TvView_TvInputCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvView_TvInputCallback::TvView_TvInputCallback()
		: JObject(
			"android.media.tv.TvView$TvInputCallback",
			"()V"
		) {}
	
	// Methods
	void TvView_TvInputCallback::onChannelRetuned(JString arg0, android::net::Uri arg1)
	{
		callMethod<void>(
			"onChannelRetuned",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TvView_TvInputCallback::onConnectionFailed(JString arg0)
	{
		callMethod<void>(
			"onConnectionFailed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvView_TvInputCallback::onContentAllowed(JString arg0)
	{
		callMethod<void>(
			"onContentAllowed",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvView_TvInputCallback::onContentBlocked(JString arg0, android::media::tv::TvContentRating arg1)
	{
		callMethod<void>(
			"onContentBlocked",
			"(Ljava/lang/String;Landroid/media/tv/TvContentRating;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TvView_TvInputCallback::onDisconnected(JString arg0)
	{
		callMethod<void>(
			"onDisconnected",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvView_TvInputCallback::onTimeShiftStatusChanged(JString arg0, jint arg1)
	{
		callMethod<void>(
			"onTimeShiftStatusChanged",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void TvView_TvInputCallback::onTrackSelected(JString arg0, jint arg1, JString arg2)
	{
		callMethod<void>(
			"onTrackSelected",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void TvView_TvInputCallback::onTracksChanged(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"onTracksChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void TvView_TvInputCallback::onVideoAvailable(JString arg0)
	{
		callMethod<void>(
			"onVideoAvailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TvView_TvInputCallback::onVideoSizeChanged(JString arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"onVideoSizeChanged",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void TvView_TvInputCallback::onVideoUnavailable(JString arg0, jint arg1)
	{
		callMethod<void>(
			"onVideoUnavailable",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::media::tv

