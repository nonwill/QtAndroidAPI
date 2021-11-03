#include "./Activity.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_Request.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	VoiceInteractor_Request::VoiceInteractor_Request(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void VoiceInteractor_Request::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	android::app::Activity VoiceInteractor_Request::getActivity()
	{
		return callObjectMethod(
			"getActivity",
			"()Landroid/app/Activity;"
		);
	}
	android::content::Context VoiceInteractor_Request::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	JString VoiceInteractor_Request::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	void VoiceInteractor_Request::onAttached(android::app::Activity arg0)
	{
		callMethod<void>(
			"onAttached",
			"(Landroid/app/Activity;)V",
			arg0.object()
		);
	}
	void VoiceInteractor_Request::onCancel()
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void VoiceInteractor_Request::onDetached()
	{
		callMethod<void>(
			"onDetached",
			"()V"
		);
	}
	JString VoiceInteractor_Request::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app

