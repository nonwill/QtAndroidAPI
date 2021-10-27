#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::media::tv
{
	class TvRecordingClient_RecordingCallback;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}

namespace android::media::tv
{
	class TvRecordingClient : public __JniBaseClass
	{
	public:
		// Fields
		
		TvRecordingClient(QAndroidJniObject obj);
		// Constructors
		TvRecordingClient(android::content::Context &arg0, jstring &arg1, android::media::tv::TvRecordingClient_RecordingCallback &arg2, android::os::Handler &arg3);
		TvRecordingClient(android::content::Context &arg0, const QString &arg1, android::media::tv::TvRecordingClient_RecordingCallback &arg2, android::os::Handler &arg3);
		TvRecordingClient() = default;
		
		// Methods
		void release();
		void sendAppPrivateCommand(jstring arg0, android::os::Bundle arg1);
		void sendAppPrivateCommand(const QString &arg0, android::os::Bundle arg1);
		void startRecording(android::net::Uri arg0);
		void stopRecording();
		void tune(jstring arg0, android::net::Uri arg1);
		void tune(const QString &arg0, android::net::Uri arg1);
		void tune(jstring arg0, android::net::Uri arg1, android::os::Bundle arg2);
		void tune(const QString &arg0, android::net::Uri arg1, android::os::Bundle arg2);
	};
} // namespace android::media::tv

