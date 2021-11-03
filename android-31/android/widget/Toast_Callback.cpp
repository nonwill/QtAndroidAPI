#include "./Toast_Callback.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Toast_Callback::Toast_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Toast_Callback::Toast_Callback()
		: JObject(
			"android.widget.Toast$Callback",
			"()V"
		) {}
	
	// Methods
	void Toast_Callback::onToastHidden()
	{
		callMethod<void>(
			"onToastHidden",
			"()V"
		);
	}
	void Toast_Callback::onToastShown()
	{
		callMethod<void>(
			"onToastShown",
			"()V"
		);
	}
} // namespace android::widget

