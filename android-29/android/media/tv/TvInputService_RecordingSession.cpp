#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "./TvInputService_RecordingSession.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvInputService_RecordingSession::TvInputService_RecordingSession(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TvInputService_RecordingSession::TvInputService_RecordingSession(android::content::Context arg0)
		: __JniBaseClass(
			"android.media.tv.TvInputService$RecordingSession",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void TvInputService_RecordingSession::notifyError(jint arg0)
	{
		callMethod<void>(
			"notifyError",
			"(I)V",
			arg0
		);
	}
	void TvInputService_RecordingSession::notifyRecordingStopped(android::net::Uri arg0)
	{
		callMethod<void>(
			"notifyRecordingStopped",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::notifyTuned(android::net::Uri arg0)
	{
		callMethod<void>(
			"notifyTuned",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onAppPrivateCommand(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onAppPrivateCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void TvInputService_RecordingSession::onRelease()
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onStartRecording(android::net::Uri arg0)
	{
		callMethod<void>(
			"onStartRecording",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onStopRecording()
	{
		callMethod<void>(
			"onStopRecording",
			"()V"
		);
	}
	void TvInputService_RecordingSession::onTune(android::net::Uri arg0)
	{
		callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void TvInputService_RecordingSession::onTune(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onTune",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media::tv

