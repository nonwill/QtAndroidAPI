#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class GestureDescription;
}
namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription;
}

namespace android::accessibilityservice
{
	class GestureDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureDescription_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureDescription_Builder(QAndroidJniObject obj);
		
		// Constructors
		GestureDescription_Builder();
		
		// Methods
		android::accessibilityservice::GestureDescription_Builder addStroke(android::accessibilityservice::GestureDescription_StrokeDescription arg0);
		android::accessibilityservice::GestureDescription build();
		android::accessibilityservice::GestureDescription_Builder setDisplayId(jint arg0);
	};
} // namespace android::accessibilityservice

