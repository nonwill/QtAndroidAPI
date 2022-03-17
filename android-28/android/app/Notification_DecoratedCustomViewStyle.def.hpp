#pragma once

#include "./Notification_Style.def.hpp"

namespace android::app
{
	class Notification_DecoratedCustomViewStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_DecoratedCustomViewStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_DecoratedCustomViewStyle(QAndroidJniObject obj) : android::app::Notification_Style(obj) {}
		
		// Constructors
		Notification_DecoratedCustomViewStyle();
		
		// Methods
	};
} // namespace android::app

