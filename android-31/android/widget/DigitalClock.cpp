#include "../content/Context.hpp"
#include "./DigitalClock.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	DigitalClock::DigitalClock(QAndroidJniObject obj) : android::widget::TextView(obj) {}
	
	// Constructors
	DigitalClock::DigitalClock(android::content::Context arg0)
		: android::widget::TextView(
			"android.widget.DigitalClock",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	DigitalClock::DigitalClock(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::TextView(
			"android.widget.DigitalClock",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jstring DigitalClock::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace android::widget

