#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class Toast_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Toast_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Toast_Callback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Toast_Callback();
		
		// Methods
		void onToastHidden() const;
		void onToastShown() const;
	};
} // namespace android::widget

