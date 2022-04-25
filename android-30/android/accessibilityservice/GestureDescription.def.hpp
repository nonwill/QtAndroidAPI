#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription;
}

namespace android::accessibilityservice
{
	class GestureDescription : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureDescription(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jlong getMaxGestureDuration();
		static jint getMaxStrokeCount();
		jint getDisplayId() const;
		android::accessibilityservice::GestureDescription_StrokeDescription getStroke(jint arg0) const;
		jint getStrokeCount() const;
	};
} // namespace android::accessibilityservice
