#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class DigitalClock : public android::widget::TextView
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DigitalClock(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		DigitalClock(QJniObject obj);
		
		// Constructors
		DigitalClock(android::content::Context arg0);
		DigitalClock(android::content::Context arg0, JObject arg1);
		
		// Methods
		jstring getAccessibilityClassName();
	};
} // namespace android::widget

