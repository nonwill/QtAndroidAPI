#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaDrm;
}
namespace android::media::metrics
{
	class LogSessionId;
}

namespace android::media
{
	class MediaDrm_PlaybackComponent : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_PlaybackComponent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_PlaybackComponent(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::media::metrics::LogSessionId getLogSessionId() const;
		void setLogSessionId(android::media::metrics::LogSessionId arg0) const;
	};
} // namespace android::media
