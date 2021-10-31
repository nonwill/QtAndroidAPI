#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::mbms
{
	class DownloadRequest;
}
namespace android::telephony::mbms
{
	class FileInfo;
}

namespace android::telephony::mbms
{
	class DownloadProgressListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadProgressListener(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DownloadProgressListener(QJniObject obj);
		
		// Constructors
		DownloadProgressListener();
		
		// Methods
		void onProgressUpdated(android::telephony::mbms::DownloadRequest arg0, android::telephony::mbms::FileInfo arg1, jint arg2, jint arg3, jint arg4, jint arg5);
	};
} // namespace android::telephony::mbms

