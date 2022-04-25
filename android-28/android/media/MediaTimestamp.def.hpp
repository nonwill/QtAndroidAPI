#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::media
{
	class MediaTimestamp : public JObject
	{
	public:
		// Fields
		static android::media::MediaTimestamp TIMESTAMP_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaTimestamp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaTimestamp(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getAnchorMediaTimeUs() const;
		jlong getAnchorSytemNanoTime() const;
		jfloat getMediaClockRate() const;
		JString toString() const;
	};
} // namespace android::media
