#pragma once

#include "./ActivityGroup.hpp"

namespace android::app
{
	class Activity;
}
namespace android::os
{
	class Bundle;
}
namespace android::widget
{
	class TabHost;
}
namespace android::widget
{
	class TabWidget;
}
class JString;
class JString;

namespace android::app
{
	class TabActivity : public android::app::ActivityGroup
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TabActivity(const char *className, const char *sig, Ts...agv) : android::app::ActivityGroup(className, sig, std::forward<Ts>(agv)...) {}
		TabActivity(QAndroidJniObject obj);
		
		// Constructors
		TabActivity();
		
		// Methods
		android::widget::TabHost getTabHost();
		android::widget::TabWidget getTabWidget();
		void onContentChanged();
		void setDefaultTab(jint arg0);
		void setDefaultTab(JString arg0);
	};
} // namespace android::app

