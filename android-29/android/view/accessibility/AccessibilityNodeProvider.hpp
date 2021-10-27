#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view::accessibility
{
	class AccessibilityNodeInfo;
}

namespace android::view::accessibility
{
	class AccessibilityNodeProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint HOST_VIEW_ID();
		
		AccessibilityNodeProvider(QAndroidJniObject obj);
		// Constructors
		AccessibilityNodeProvider();
		
		// Methods
		void addExtraDataToAccessibilityNodeInfo(jint arg0, android::view::accessibility::AccessibilityNodeInfo arg1, jstring arg2, android::os::Bundle arg3);
		void addExtraDataToAccessibilityNodeInfo(jint arg0, android::view::accessibility::AccessibilityNodeInfo arg1, const QString &arg2, android::os::Bundle arg3);
		QAndroidJniObject createAccessibilityNodeInfo(jint arg0);
		QAndroidJniObject findAccessibilityNodeInfosByText(jstring arg0, jint arg1);
		QAndroidJniObject findAccessibilityNodeInfosByText(const QString &arg0, jint arg1);
		QAndroidJniObject findFocus(jint arg0);
		jboolean performAction(jint arg0, jint arg1, android::os::Bundle arg2);
	};
} // namespace android::view::accessibility

